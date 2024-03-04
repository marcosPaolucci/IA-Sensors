
void setup() {
  // função setup é similar a BIOS do pc, roda uma vez só ao energizar o chip
  //os parenteses estão vazios pois ainda não foram passados parametros
  //aqui dentro irá colocar as configs básicas p/ o seu microcontrolador
  Serial.begin(9600); // São valores de velocidade de transmissão de caracteres. Padrão = 9600
  Serial.print("Hello World!");


}

void loop() {
  //aqui ficará seu algoritmo principal, num loop infinito enquanto houver energia
  // A partir dessa função loop você poderá carregar outras funções
  // a velocidade do loop depende do clock do chip. São dezenas de vezes por segundo
  //Como pausar as voltas? Não tem jeito, temos que adicionar um atraso nas impressões
  Serial.print("Frase sendo repetida");

}

//use o simulador wokwi.com para rodar seu prog01.ino caso não tenha o chip
