const int sag_i = 7;
const int sag_g = 6;
const int sol_i = 5;
const int sol_g = 4;
const int sag_e = 9;
const int sol_e = 3;

const int s_1 = 12;
const int s_2 = 13;
const int s_3 = 14;
const int s_4 = 15;
const int s_5 = 16;
const int s_6 = 17;
const int s_7 = 18;
const int s_8 = 19;

int s_durum1, s_durum2, s_durum3, s_durum4, s_durum5, s_durum6, s_durum7, s_durum8;


void setup() {
  pinMode(sag_i, OUTPUT);
  pinMode(sag_g, OUTPUT);
  pinMode(sol_i, OUTPUT);
  pinMode(sol_g, OUTPUT);

  pinMode (s_1, INPUT);
  pinMode (s_2, INPUT);
  pinMode (s_3, INPUT);
  pinMode (s_4, INPUT);
  pinMode (s_5, INPUT);
  pinMode (s_6, INPUT);
  pinMode (s_7, INPUT);
  pinMode (s_8, INPUT);

  //Serial.begin(9600);
  

}

void loop() {
  s_durum1 = digitalRead(s_1); //sag
  s_durum2 = digitalRead(s_2); //sag
  s_durum3 = digitalRead(s_3); //sag
  s_durum4 = digitalRead(s_4); //orta
  s_durum5 = digitalRead(s_5); //orta
  s_durum6 = digitalRead(s_6); //sol
  s_durum7 = digitalRead(s_7); //sol
  s_durum8 = digitalRead(s_8); //sol

  Serial.print("1. Sensor =");
  Serial.println(s_durum1);
  Serial.println("_______________");
  Serial.print("2. Sensor =");
  Serial.println(s_durum2);
  Serial.println("_______________");
  Serial.print("3. Sensor =");
  Serial.println(s_durum3);
  Serial.println("_______________");
  Serial.print("4. Sensor =");
  Serial.println(s_durum4);
  Serial.println("_______________");
  Serial.print("5. Sensor =");
  Serial.println(s_durum5);
  Serial.println("_______________");
  Serial.print("6. Sensor =");
  Serial.println(s_durum6);
  Serial.println("_______________");
  Serial.print("7. Sensor =");
  Serial.println(s_durum7);
  Serial.println("_______________");
  Serial.print("8. Sensor =");
  Serial.println(s_durum8);
  Serial.println("_______________");
 

  if(s_durum4 == HIGH || s_durum5== HIGH) 
  {
  analogWrite(sag_e, 255);
  analogWrite(sol_e, 255);      
  digitalWrite(sag_i, HIGH);
  digitalWrite(sag_g, LOW);
  digitalWrite(sol_i, HIGH);
  digitalWrite(sol_g, LOW);
  }

  if(s_durum1 == HIGH || s_durum2 == HIGH || s_durum3 == HIGH) 
  {   
  analogWrite(sag_e, 255);
  analogWrite(sol_e, 255);   
  digitalWrite(sag_i, HIGH);
  digitalWrite(sag_g, LOW);
  digitalWrite(sol_i, HIGH);
  digitalWrite(sol_g, HIGH);    
  }

  if(s_durum6 == HIGH || s_durum7 == HIGH || s_durum8 == HIGH) 
  {
  analogWrite(sag_e, 255);
  analogWrite(sol_e, 255);   
  digitalWrite(sag_i, HIGH);
  digitalWrite(sag_g, HIGH);
  digitalWrite(sol_i, HIGH);
  digitalWrite(sol_g, LOW);
  }

  

  if(s_durum1 == HIGH && s_durum2 == HIGH && s_durum3 == HIGH && s_durum4 == HIGH && s_durum5 == HIGH && s_durum6 == HIGH && s_durum7 == HIGH && s_durum8 == HIGH)
  {
  analogWrite(sag_e, 255);
  analogWrite(sol_e, 255);   
  digitalWrite(sag_i, HIGH);
  digitalWrite(sag_g, HIGH);
  digitalWrite(sol_i, HIGH);
  digitalWrite(sol_g, LOW);    
  }
  if(s_durum1 == LOW && s_durum2 == LOW && s_durum3 == LOW && s_durum4 == LOW && s_durum5== LOW && s_durum6 == LOW && s_durum7 == LOW && s_durum8 == LOW)
   {
  analogWrite(sag_e, 255);
  analogWrite(sol_e, 255);
  digitalWrite(sag_i, LOW);
  digitalWrite(sag_g, HIGH);
  digitalWrite(sol_i, LOW);
  digitalWrite(sol_g, HIGH);
   }
  delay(10);
  analogWrite(sag_e, 255);
  analogWrite(sol_e, 255);   
  digitalWrite(sag_i, LOW);
  digitalWrite(sag_g, LOW);
  digitalWrite(sol_i, LOW);
  digitalWrite(sol_g, LOW); 
  delay(10);
  
  
  }

