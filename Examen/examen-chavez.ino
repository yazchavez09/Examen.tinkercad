// C++ code
//

#define cyan_a 0
#define cyan_v 1
#define azul 2
#define amarillo_r 3
#define amarillo_v 4
#define naranja_r 5
#define naranja_r 6
#define rojo 7
#define fotorresistencia A5

void setup()
{
  pinMode(0 , OUTPUT);
  pinMode(1 , OUTPUT);
  pinMode(2 , OUTPUT);
  pinMode(3 , OUTPUT);
  pinMode(4 , OUTPUT);
  pinMode(5 , OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(A5, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  
  
  int lectura = analogaRed (A5);
  int porc = map (lectura, 1, 600, 0, 100);
  
  if(porc == 0)
  {
    digitalWrite(cyan_a, HIGH);
    digitalWrite(cyan_v,HIGH);
    digitalWrite(azul; HIGH);
    digitalWrite(amarillo_r , HIGH);
    digitalWrite( amarillo_v, HIGH);
    digitalWrite( naranja_r, HIGH);
    digitalWrite( naranja_v, HIGH);
    digitalWrite( ROJO, HIGH);
    
  }else {
    if (porc > 0 and porc < 25)
    
    digitalWrite(cyan_a, HIGH);
    digitalWrite(cyan_v,HIGH);
    digitalWrite(azul; HIGH);
    digitalWrite(amarillo_r , HIGH);
    digitalWrite( amarillo_v, HIGH);
    digitalWrite( naranja_r, HIGH);
    digitalWrite( naranja_v, HIGH);
    digitalWrite( ROJO, HIGH);
    
}