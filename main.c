// C++ code
//
//Definindo leds

int led_vermelho = 13;
int led_amarelo = 12;
int led_verde = 11;

void setup()
{
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
}

void loop()
{
  //Liga LED Vermelho
  digitalWrite(led_vermelho, HIGH);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, LOW);
  delay(5000); // Espera 5 millisecond(s)
  //Liga LED Verde
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, HIGH);
  delay(5000); // Espera 5 millisecond(s)
  //Liga LED Amarelo
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, HIGH);
  digitalWrite(led_verde, LOW);
  delay(2000); // Espera 2 millisecond(s)
}