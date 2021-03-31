#define T 500
// a vérifier
#define PB0 2
#define PB1 3
#define PB2 4
#define PB3 5
#define PB4 6

void ledcontrole(bool P0,bool P1,bool P2,bool P3){
    digitalWrite(PB0,P0);
    digitalWrite(PB1,P1);
    digitalWrite(PB2,P2);
    digitalWrite(PB3,P3);
}
void setup() {
  pinMode(PB0,OUTPUT);
  pinMode(PB1,OUTPUT);
  pinMode(PB2,OUTPUT);
  pinMode(PB3,OUTPUT);
  pinMode(PB4,OUTPUT);

ledcontrole(LOW,LOW,LOW,LOW);

}

void loop() {
    ledcontrole(HIGH,LOW,HIGH,LOW);
    delay(T);
    ledcontrole(LOW,HIGH,LOW,HIGH);
    delay(T);
}
