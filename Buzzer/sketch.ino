const int buzzerPin = 13; // Pino do buzzer
const int ledPin = 12;    // Pino do LED
int stop = 0;             // Variável de controle do loop

void setup() {
  pinMode(buzzerPin, OUTPUT); // Configura o pino do buzzer como saída
  pinMode(ledPin, OUTPUT);    // Configura o pino do LED como saída
}

void loop() {
  if (stop < 5) { // condiciona o início da variação frequencia ao valor da variavel stop
    int frequency = 100;      // define frequência inicial

    // Toca um som gradualmente crescente usando um loop for:
    for (; frequency <= 2000; frequency += 100) { // frequency já declarado no ínicio
      tone(buzzerPin, frequency); // Emite um tom com a frequência atual
      analogWrite(ledPin, (frequency/7.85)); // piscar o led baseado na frequencia do som        
      delay(50); // Pequeno atraso para observar a mudança gradual
    }

    // Toca um som gradualmente decrescente usando um loop while:
    while (frequency >= 100) {   
      tone(buzzerPin, frequency);
      analogWrite(ledPin, (frequency/7.85));
      delay(50); 
      frequency -= 100; // Reduz a frequência gradualmente
    }

    stop++; // Incrementa a variável de controle

    // Aguarda um breve momento antes de reiniciar o loop
    delay(100);
  } else {
    noTone(buzzerPin); // Para de emitir o som
    analogWrite(ledPin, 0); // Desliga o led
  }
}
