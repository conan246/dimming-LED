int led=5;
int intensity=0; 

void setup() {

  pinMode(led,OUTPUT);
  
}

void loop() {
intensity=analogRead(A1);
analogWrite(led,intensity / 4);

}
