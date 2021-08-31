//Programa realizado por Super AgroFighter para el canal
//de youtube de Agricultura Electrónica

//https://youtu.be/HCw2-_VTXBU 
//Suscribirse, que no cuesta naaaaaa!!!!  :D
//Muchas gracias majos!!!!


int IN1 = A4;      // Salidas para el motor paso a paso
int IN2 = A3;      
int IN3 = A2;
int IN4 = A1;
int demora = 10;      // demora entre pasos, no debe ser menor a 10 ms.
// Cuanto menor es la demora, más rápido va el motor.

void setup() {


  pinMode(A1, OUTPUT);//para el motor paso a paso
  pinMode(A2, OUTPUT);//para el motor paso a paso
  pinMode(A3, OUTPUT);//para el motor paso a paso
  pinMode(A4, OUTPUT);//para el motor paso a paso
}

void loop() {


  for (int i = 0; i < 512; i++) // 512 pasos (1 vuelta completa)
  {
    digitalWrite(IN1, HIGH);  // paso 1
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(demora);

    digitalWrite(IN1, LOW); // paso 2
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(demora);

    digitalWrite(IN1, LOW); // paso 3
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(demora);

    digitalWrite(IN1, LOW); // paso 4
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(demora);
  }

  digitalWrite(IN1, LOW); //Apagamos completamente las 4 bobinas
  digitalWrite(IN2, LOW);// asi no se estropeara. Para no sobrecargar
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(3000); // detiene por 3 seg.


  for (int i = 0; i < 256; i++) // 256 pasos (1/2 vuelta)
  {
    digitalWrite(IN1, HIGH);  // paso 1
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(demora);

    digitalWrite(IN1, LOW); // paso 2
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(demora);

    digitalWrite(IN1, LOW); // paso 3
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(demora);

    digitalWrite(IN1, LOW); // paso 4
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(demora);
  }

  digitalWrite(IN1, LOW); //Apagamos completamente las 4 bobinas
  digitalWrite(IN2, LOW);// asi no se estropeara. Para no sobrecargar
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(3000); // detiene por 3 seg.

}//Programa realizado por Super AgroFighter para el canal
//de youtube de Agricultura Electrónica

//https://youtu.be/HCw2-_VTXBU 
//Suscribirse, que no cuesta naaaaaa!!!!  :D
//Muchas gracias majos!!!!


int IN1 = A4;      // Salidas para el motor paso a paso
int IN2 = A3;      
int IN3 = A2;
int IN4 = A1;
int demora = 10;      // demora entre pasos, no debe ser menor a 10 ms.
// Cuanto menor es la demora, más rápido va el motor.

void setup() {


  pinMode(A1, OUTPUT);//para el motor paso a paso
  pinMode(A2, OUTPUT);//para el motor paso a paso
  pinMode(A3, OUTPUT);//para el motor paso a paso
  pinMode(A4, OUTPUT);//para el motor paso a paso
}

void loop() {


  for (int i = 0; i < 512; i++) // 512 pasos (1 vuelta completa)
  {
    digitalWrite(IN1, HIGH);  // paso 1
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(demora);

    digitalWrite(IN1, LOW); // paso 2
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(demora);

    digitalWrite(IN1, LOW); // paso 3
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(demora);

    digitalWrite(IN1, LOW); // paso 4
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(demora);
  }

  digitalWrite(IN1, LOW); //Apagamos completamente las 4 bobinas
  digitalWrite(IN2, LOW);// asi no se estropeara. Para no sobrecargar
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(3000); // detiene por 3 seg.


  for (int i = 0; i < 256; i++) // 256 pasos (1/2 vuelta)
  {
    digitalWrite(IN1, HIGH);  // paso 1
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(demora);

    digitalWrite(IN1, LOW); // paso 2
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(demora);

    digitalWrite(IN1, LOW); // paso 3
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(demora);

    digitalWrite(IN1, LOW); // paso 4
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(demora);
  }

  digitalWrite(IN1, LOW); //Apagamos completamente las 4 bobinas
  digitalWrite(IN2, LOW);// asi no se estropeara. Para no sobrecargar
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(3000); // detiene por 3 seg.

}
