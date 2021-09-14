void liczba_kart()
{
  x++;
  switch (x)
  {
  case 1:
    digitalWrite(led, HIGH);
    delay(200);
    break;
  case 2:
    digitalWrite(led2, HIGH);
    delay(200);
    break;
  case 3:
    digitalWrite(led3, HIGH);
    delay(200);
    break;
  case 4:
    digitalWrite(led4, HIGH);
    delay(200);
    break;
  case 5:
    digitalWrite(led5, HIGH);
    delay(200);
    break;
  case 6:
    digitalWrite(led, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    x = 0;
    delay(200);
    break;
  }
}
void dobranie()
{
  servoO.write(90);
  servoS.write(180);
  delay(300);
  for (int y = x; y > 0; y--)
  {
    wyrzut();
  }
  wy_poz_ram();
}
