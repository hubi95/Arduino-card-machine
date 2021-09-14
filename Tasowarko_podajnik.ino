#include <Servo.h>

Servo servoO;
Servo servoW;
Servo servoS;

int randNumber;
int pin_przycisk = A1;
int pin_przycisk2 = A2;
int pin_przycisk3 = A3;
int pin_przycisk4 = A4;
int pin_przycisk5 = A5;
int led = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int x = 0;

void setup()
{
    servoO.attach(10);
    servoW.attach(8);
    servoS.attach(7);
    wy_poz_ram();

    pinMode(pin_przycisk, INPUT);
    digitalWrite(pin_przycisk, HIGH);
    pinMode(pin_przycisk2, INPUT);
    digitalWrite(pin_przycisk2, HIGH);
    pinMode(pin_przycisk3, INPUT);
    digitalWrite(pin_przycisk3, HIGH);
    pinMode(pin_przycisk4, INPUT);
    digitalWrite(pin_przycisk4, HIGH);
    pinMode(pin_przycisk5, INPUT);
    digitalWrite(pin_przycisk5, HIGH);
    pinMode(led, OUTPUT);
    digitalWrite(led, LOW);
    pinMode(led2, OUTPUT);
    digitalWrite(led2, LOW);
    pinMode(led3, OUTPUT);
    digitalWrite(led3, LOW);
    pinMode(led4, OUTPUT);
    digitalWrite(led4, LOW);
    pinMode(led5, OUTPUT);
    digitalWrite(led5, LOW);
}

void loop()
{
    int przycisk = digitalRead(pin_przycisk);
    int przycisk2 = digitalRead(pin_przycisk2);
    int przycisk3 = digitalRead(pin_przycisk3);
    int przycisk4 = digitalRead(pin_przycisk4);
    int przycisk5 = digitalRead(pin_przycisk5);

    if (przycisk == LOW)
    {
        los();
    }

    if (przycisk2 == LOW)
    {
        rozdanie3();
    }

    if (przycisk3 == LOW)
    {
        rozdanie4();
    }

    if (przycisk4 == LOW)
    {
        liczba_kart();
    }

    if (przycisk5 == LOW)
    {
        dobranie();
    }
}

void wy_poz_ram() // wyjściowa pozycja ramienia głównego pętla: rozdanie3 i los
{
    servoW.write(70);
    servoS.write(150);
    servoO.write(60);
}

void wyrzut()
{
    servoW.write(130);
    delay(300);
    servoW.write(70);
    delay(400);
}

void rozdanie3()
{
    servoS.write(180);
    delay(300);

    for (int i = 0; i < 5; i++)
    {
        wyrzut();
        servoO.write(90);
        wyrzut();
        servoO.write(120);
        wyrzut();
        servoO.write(60);
        delay(60);
    }
    wy_poz_ram();
}

void rozdanie4()
{
    servoS.write(180);
    delay(300);
    for (int i = 0; i < 5; i++)
    {
        wyrzut();
        servoO.write(80);
        wyrzut();
        servoO.write(100);
        wyrzut();
        servoO.write(120);
        wyrzut();
        servoO.write(60);
        delay(80);
    }
    wy_poz_ram();
}

void los()
{
    servoS.write(180);
    delay(150);

    for (int i = 0; i < 29; i++)
    {
        randNumber = random(1, 4);

        switch (randNumber)
        {
        case 1:
            servoO.write(60);
            wyrzut();
            break;
        case 2:
            servoO.write(90);
            wyrzut();
            break;
        case 3:
            servoO.write(120);
            wyrzut();
            break;
        }
    }
    wy_poz_ram();
}
