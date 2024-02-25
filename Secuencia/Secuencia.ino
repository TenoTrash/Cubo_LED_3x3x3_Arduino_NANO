#define espera 6

void setup() {
  // Simple programita para prender todo de manera secuencial y ver que anden los LEDS, con una lógica simple

  Serial.begin(115200);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);


}

void loop()
{
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(A3, HIGH);
  for (int a = 2; a < 11; a++) {
    {
      digitalWrite(a, LOW);
      delay(espera);
      digitalWrite(a, HIGH);
      delay(espera);
    }
  }

  digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
  for (int a = 2; a < 11; a++) {
    {
      digitalWrite(a, LOW);
      delay(espera);
      digitalWrite(a, HIGH);
      delay(espera);
    }
  }

  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
  for (int a = 2; a < 11; a++) {
    {
      digitalWrite(a, LOW);
      delay(espera);
      digitalWrite(a, HIGH);
      delay(espera);
    }
  }
}
