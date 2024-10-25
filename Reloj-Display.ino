int W = 0;
int X = 0;
int Y = 0;
int Z = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT); //W
  pinMode(3, INPUT); //X
  pinMode(4, INPUT); //Y
  pinMode(5, INPUT); //Z

  //Lado Izquerdo
  pinMode(8, OUTPUT); //F
  pinMode(9, OUTPUT); //E

  //Lado Derecho
  pinMode(12, OUTPUT); //B
  pinMode(13, OUTPUT); //C

  //En Medio
  pinMode(10, OUTPUT); //A
  pinMode(7, OUTPUT); //G
  pinMode(11, OUTPUT); //D
}

void loop() {
  // put your main code here, to run repeatedly:
  W = digitalRead(2);
  X = digitalRead(3);
  Y = digitalRead(4);
  Z = digitalRead(5);
  //1
  if(!W && !X && !Y && Z){
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  //2
  if(!W && !X && Y && !Z){
    digitalWrite(10, LOW);
    digitalWrite(12, LOW);
    digitalWrite(7, LOW);
    digitalWrite(9, LOW);
    digitalWrite(11, LOW);
  }
  //3
  if(!W && !X && Y && Z){
    digitalWrite(10, LOW);
    digitalWrite(12, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(11, LOW);
  }
  //4
  if(!W && X && !Y && !Z){
    digitalWrite(7, LOW);
    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
    digitalWrite(13, LOW);
  }
  //5
  if(!W && X && !Y && Z){
    digitalWrite(10, LOW); //A
    digitalWrite(8, LOW); //F
    digitalWrite(7, LOW); //G
    digitalWrite(13, LOW); //C
    digitalWrite(11, LOW); //D  
  }
  //6
  if(!W && X && Y && !Z){
    digitalWrite(10, LOW); //A
    digitalWrite(8, LOW); //F
    digitalWrite(7, LOW); //G
    digitalWrite(13, LOW); //C
    digitalWrite(9, LOW); //E
    digitalWrite(11, LOW); //D
  }
  //7
  if(!W && X && Y && Z){
    digitalWrite(10, LOW); //A
    digitalWrite(12, LOW); //B
    digitalWrite(13, LOW); //C
    digitalWrite(7, LOW); //G
  }
  //8
  if(W && !X && !Y && !Z){
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  //9
  if(W && !X && !Y && Z){
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  //A (10)
  if(W && !X && Y && !Z){
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  //B (11)
  if(W && !X && Y && Z){
    digitalWrite(8, LOW); //F
    digitalWrite(9, LOW); //E
    digitalWrite(7, LOW); //G
    digitalWrite(11, LOW); //D
    digitalWrite(13, LOW); //C
  }
  //C (12)
  if(W && X && !Y && !Z){
    digitalWrite(10, LOW); //A
    digitalWrite(8, LOW); //F
    digitalWrite(9, LOW); //E
    digitalWrite(11, LOW); //D
  }
  //D(13)
  if(W && X && !Y && Z){
    digitalWrite(12, LOW); //B
    digitalWrite(7, LOW); //G
    digitalWrite(9, LOW); //E
    digitalWrite(11, LOW); //D
    digitalWrite(13, LOW); //C
  }
  //E(14)
  if(W && X && Y && !Z){
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
  //F(15)
  if(W && X && Y && Z){
    digitalWrite(10, LOW); //A
    digitalWrite(8, LOW); //F
    digitalWrite(9, LOW); //E
    digitalWrite(7, LOW); //G
  }

  //SET OFF
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}
