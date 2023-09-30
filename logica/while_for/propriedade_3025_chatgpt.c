#include <stdio.h>
#include <stdbool.h>

// Fun��o que verifica se um n�mero de 4 d�gitos possui a caracter�stica desejada
bool possui_caracteristica(int numero) {
  // Se o n�mero n�o for de 4 d�gitos, retorna falso
  if (numero < 1000 || numero > 9999) {
    return false;
  }
  // Separa os dois primeiros d�gitos e os dois �ltimos d�gitos do n�mero
  int primeiro = numero / 100;
  int segundo = numero % 100;
  // Calcula a soma dos dois pares de d�gitos e o seu quadrado
  int soma = primeiro + segundo;
  int quadrado = soma * soma;
  // Verifica se o quadrado � igual ao n�mero original
  return quadrado == numero;
}

int main() {
  int valor; // Vari�vel para armazenar o valor lido
  printf("Digite um valor entre 1000 e 9999 (ou outro valor para sair):\n");
  scanf("%d", &valor); // L� o valor digitado pelo usu�rio
  while (valor >= 1000 && valor <= 9999) { // Enquanto o valor for v�lido
    if (possui_caracteristica(valor)) { // Se o valor possuir a caracter�stica
      printf("O valor %d possui a caracter�stica.\n", valor);
    } else { // Se o valor n�o possuir a caracter�stica
      printf("O valor %d n�o possui a caracter�stica.\n", valor);
    }
    printf("Digite outro valor entre 1000 e 9999 (ou outro valor para sair):\n");
    scanf("%d", &valor); // L� outro valor digitado pelo usu�rio
  }
  printf("Programa encerrado.\n");
  return 0;
}

