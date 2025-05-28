#define Mla 3
#define Mlb 4
#define Mra 5
#define Mrb 6

void setup() {
  pinMode(Mla,OUTPUT);
  pinMode(Mlb,OUTPUT);
  pinMode(Mra,OUTPUT);
  pinMode(Mrb,OUTPUT);
}

void loop() {vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
  digitalWrite(Mla,HIGH);
  digitalWrite(Mlb,LOW);
  digitalWrite(Mra,HIGH);
  digitalWrite(Mrb,LOW);
  delay(1000);

}