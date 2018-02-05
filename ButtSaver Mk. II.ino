int gravswitch = 2; //declaring gravity switch to equal Pin 
int reading; //declaring reading for later use 

int led = 5; 
const int buzzer = 7; 

void setup() {
  Serial.begin(9600); 
  pinMode(gravswitch, INPUT); //Mapping Pin 8 as INPUT

  pinMode(led, OUTPUT); //Mapping Pin 5 as OUTPUT
  pinMode(buzzer, OUTPUT); //Mapping Pin 7 as OUTPUT
  digitalWrite(led, LOW); //starts LED in off position
  noTone(buzzer); //stars buzzer silent
}

void loop() {
  reading = digitalRead(gravswitch); //setting var "reading" as the result of switch, either 0 or 1

  if(reading == 1){
    Serial.println("SEAT LIFTED. ENJOY YOUR PISS. AND DON'T FORGET TO SHUT THE LID!"); 
    }
  
    
  while(reading == 1){
        delay(21000); //It takes the average mammal (humans included) 21 seconds to piss. 
if(reading == 0){//to check to see if the lid was shut in the meantime 
      reading = digitalRead(gravswitch); //setting var "reading" as the result of switch, either 0 or 1

      Serial.println("THANK YOU FOR SHUTTING THE LID!");
          digitalWrite(led, LOW);  

      break;
  }
  
else if(reading == 1){
      Serial.println("YOU WRETCHED WASTE OF HUMAN LIFE! YOU'VE FORGOTTEN TO SHUT THE LID! GET YOUR ASS OVER HERE AND SHUT IT!"); 

    for(int timer; timer <= 30; timer++){

    reading = digitalRead(gravswitch); //setting var "reading" as the result of switch, either 0 or 1
    
    digitalWrite(led, HIGH); 
    tone(buzzer, 888); //Sends 1KHz sound to buzzer
    delay(250); //Stops for 200 milis
    digitalWrite(led, LOW);  
    noTone(buzzer); 
    delay(250); 
    if(reading == 0){
      Serial.println("THANK YOU FOR SHUTTING THE LID!");
      break;
    }
    }
   while(reading == 1){//once the timer is up and the lid is still up, just the led flashes
          reading = digitalRead(gravswitch); //setting var "reading" as the result of switch, either 0 or 1

    digitalWrite(led, HIGH); 
    delay(250); //Stops for 200 milis
    digitalWrite(led, LOW);  
    delay(250); 
    if(reading == 0){
      Serial.println("THANK YOU FOR SHUTTING THE LID!");
      digitalWrite(led, LOW);  
      break;
  }
  }
  }
  }



 
  while(reading == 0){
  reading = digitalRead(gravswitch); //setting var "reading" as the result of switch, either 0 or 1
  digitalWrite(led, LOW);
  noTone(buzzer);
    if(reading ==1){
      break;
     }
  }
}
  
 



