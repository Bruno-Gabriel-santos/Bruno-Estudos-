#include <stdio.h> 

int main () {
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

      printf("entre com numero1: \n");
      scanf("%d", &numero1 );
      printf("entre com numero 2: \n");
      scanf("%d", &numero2);

    soma = numero1 + numero2;

    subtracao = numero1 - numero2;

    multiplicacao = numero1 * numero2;

    divisao = numero1 / numero2;

    printf("A soma é: %d\n", soma );
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisao é: %d\n", divisao);
}
