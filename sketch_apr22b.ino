int button_1 = 3;
int button_2 = 5;
int button_3 = 7;
int LED_1 = 2;
int LED_2 = 4;
int LED_3 = 6;
 
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, INPUT);
}
void loop() {
  bool flag = true;
  int active; 
  while(flag == true){
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
    digitalWrite(LED_3, LOW);
    Serial.println("Flag while loop");
    delay(1000);
    active = random(1,4);
    Serial.print("Active LED: ");
    Serial.println(active);
    
    if(active == 1)
    {
      digitalWrite(LED_1, HIGH);
      bool boolin = true;
      while(boolin == true){
          Serial.println("Boolin while loop");
          int state_1 = digitalRead(button_1);
          Serial.print("Button State: ");
          Serial.println(state_1);
//          delay(500);
          if(state_1 == 1){
            boolin == false;
            flag = false;
            break;
          }
      }
      flag = false;
    }
    else if(active == 2)
    {
      digitalWrite(LED_2, HIGH);
      bool boolin = true;
      while(boolin == true){
          Serial.println("Boolin while loop");
          int state_2 = digitalRead(button_2);
          Serial.print("Button State: ");
          Serial.println(state_2);
//          delay(500);
          if(state_2 == 1){
            boolin == false;
            flag = false;
            break;
          }
      }
      flag = false;
    }
    else
    {
      digitalWrite(LED_3, HIGH);
      bool boolin = true;
      while(boolin == true){
          Serial.println("Boolin while loop");
          int state_3 = digitalRead(button_3);
          Serial.print("Button State: ");
          Serial.println(state_3);
//          delay(500);
          if(state_3 == 1){
            boolin == false;
            flag = false;
            break;
          }
      }
      flag = false;
    }
  }
  flag = true;
}
