void setup()
{
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (11, OUTPUT);
}
const int f = 660;
const unsigned long nudget = 400;
bool nudge;
byte test = 0;
int cbit = 0;
unsigned long pmicros1 = 0;
unsigned long pmicros2 = 0;
unsigned long pmicros3 = 0;
unsigned long pmicros4 = 0;
bool s;
void loop()
{
  if(micros() - pmicros1 > (500000/f))
  {
   s = !s; 
   digitalWrite(13, s);
   pmicros1 = micros();
   if (!s)
   {
    nudge = true; 
   }
  } 
  if (!s)
  {
    pmicros2 = 0;
    cbit  = 0;
    digitalWrite(11, LOW);
    if (nudge)
    {
      if (micros() - pmicros4 > nudget)
      {
        digitalWrite()
      }
    }
  }
  if (micros() - pmicros2 > (500000 / 8 / f) && s)
  {
    digitalWrite(11, (test & (1 << cbit)) ? HIGH:LOW);
    cbit ++; 
    if (cbit > 7)
    {
      cbit = 0;
    }
    pmicros2 = micros();
  }
  if  (micros() - pmicros3 > 300000)
  {
    test ++;
    pmicros3 = micros();
  }
}
