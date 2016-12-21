#define   LEFT_MOTOR_EN   8
#define   lb   7   
#define   lr   6
#define   RIGHT_MOTOR_EN   11
#define   rr   10
#define   rb   9
#define   rightA  1385
int s;

void right()
{

  digitalWrite(lr, LOW);
  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW );
  digitalWrite(rr, HIGH);
}

void left()
{

  digitalWrite(lr, LOW);
  digitalWrite(lb, HIGH);
  digitalWrite(rb, HIGH);
  digitalWrite(rr, LOW);
}
void fwd()
{
  digitalWrite(lb, HIGH);
  digitalWrite(lr, LOW);
  digitalWrite(rr, HIGH);
  digitalWrite(rb, LOW);
}
void back()
{
  digitalWrite(lb, LOW);
  digitalWrite(lr, HIGH);
  digitalWrite(rr, LOW);
  digitalWrite(rb, HIGH);
}
void stay()
{
  digitalWrite(lb, HIGH);
  digitalWrite(lr, HIGH); 
  digitalWrite(rr, HIGH);
  digitalWrite(rb, HIGH);
}

void t90r()
{ 
  right();
  delay(2870);
  stay();

}

void square()
{ 
  right();
  delay(1385);
  stay();

}


void setup()
{
  for (int x = 6; x <= 12; x++) 
  { 
    pinMode(x, OUTPUT);
  }
  digitalWrite(LEFT_MOTOR_EN, HIGH);
  digitalWrite(RIGHT_MOTOR_EN, HIGH);0
  pinMode(5, INPUT);
}
void loop()
{
  s = digitalRead(5);
  if (s == HIGH)
  { 
    fwd();
  }
  else;
  {
    t90r();
  }
}

