int ldr = A0; // Atribui a porta A0 para o sensor
int valor_ldr = 0; //declara o valor_ldr como inteiro

void setup() {
  pinMode(ldr, INPUT); 
  Serial.begin(9600); //inicia um monitor serial com comunicação a uma taxa de 9600 bits por segundo

}

void loop() {
  valor_ldr = analogRead(ldr); //lê o valor do sensor e armazena em valor_ldr
  Serial.print("Valor lido pelo ldr: ");
  Serial.println(valor_ldr);
}
