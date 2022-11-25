#define buzzer 19

const int val = 30;

int pin1;
int pin2;
int pin3;
int pin4;
int pin5;

void setup(){
  
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  delay(1000); 
  digitalWrite(buzzer, LOW);
}

void loop(){
  
  pin1 = touchRead(T5);
  pin2 = touchRead(T6);
  pin3 = touchRead(T7);
  pin4 = touchRead(T8);
  pin5 = touchRead(T9);
  
  Serial.print("TOUCH Pin_1 VALUE 1:");
  Serial.print(pin1);
  Serial.print("  ");
  Serial.print("TOUCH Pin_2 VALUE:");
  Serial.print(pin2);
  Serial.print("  ");
  Serial.print("TOUCH Pin_3 VALUE:");
  Serial.print(pin3);
  Serial.print(" ");
  Serial.print("TOUCH Pin_4 VALUE:");
  Serial.print(pin4);
  Serial.print("  ");
  Serial.print("TOUCH Pin_5 VALUE:");
  Serial.print(pin5);
  Serial.println("  ");
  delay(1000);
  
  if(pin1 < val){
    for(int i=0; i<2; i++){
      digitalWrite(buzzer, HIGH);
      delay(100);
      digitalWrite(buzzer, LOW);
      delay(100);
    }
  }
  if(pin2 < val){
     for(int i=0; i<5; i++){
      digitalWrite(buzzer, HIGH);
      delay(50);
      digitalWrite(buzzer, LOW);
      delay(50);
    }
  }
  if(pin3 < val){
    for(int i=0; i<8; i++){
      digitalWrite(buzzer, HIGH);
      delay(25);
      digitalWrite(buzzer, LOW);
      delay(25);
    }
  }
  if(pin4 < val){
    for(int i=0; i<12; i++){
      digitalWrite(buzzer, HIGH);
      delay(15);
      digitalWrite(buzzer, LOW);
      delay(15);
    }
  }
  if(pin5 < val){
    for(int i=0; i<15; i++){
      digitalWrite(buzzer, HIGH);
      delay(5);
      digitalWrite(buzzer, LOW);
      delay(5);
    }
  }
  else{
    digitalWrite(2, LOW);
  } 
}
