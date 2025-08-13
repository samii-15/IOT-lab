// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(9, INPUT);

}

void loop()
{
  int status=0;
  status=digitalRead(9);
  if(status==1){
  digitalWrite(2, HIGH);
  delay(200); 
  }
  else{// Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(200); // Wait for 1000 millisecond(s)
}
}
