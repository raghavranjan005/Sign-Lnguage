
const int flexpin1 = 0; 
const int flexpin2 = 1; 
const int flexpin3 = 2; 


void setup() 
{ 
  
  Serial.begin(9600);
  
} 


void loop() 
{ 
  int flexposition1; 
  int flexposition2;  
  int flexposition3;  

  
flexposition1 = analogRead(flexpin1);
flexposition2= analogRead(flexpin2);
flexposition3 = analogRead(flexpin3);
  

 
  if(flexposition1<=820 && flexposition2>=900 && flexposition3>=920)
  Serial.print("I ");
  
  if(flexposition1>=820 && flexposition2<=900 && flexposition3<=920)
  Serial.print("LOVE ");
  if(flexposition1<=820 && flexposition2>=900 && flexposition3<=920)
  Serial.print("YOU ");
  
  

  delay(2500);  
} 
