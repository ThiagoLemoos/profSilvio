#include <stdio.h>

// função para realizar a soma
float soma(float x, float y) {
   return x + y;
}

// função para realizar a subtração
float subtracao(float x, float y) {
   return x - y;
}

// função para realizar a multiplicação
float multiplicacao(float x, float y) {
   return x * y;
}

// função para realizar a divisão
float divisao(float x, float y) {
   return x / y;
}

int main() {
   char operacao;
   float num1, num2, resultado;

   // lendo os valores de entrada
   printf("Digite a operacao desejada (+, -, *, /): ");
   scanf("%c", &operacao);
   printf("Digite o primeiro numero: ");
   scanf("%f", &num1);
   printf("Digite o segundo numero: ");
   scanf("%f", &num2);

   // realizando a operação correspondente
   switch (operacao) {
      case '+':
         resultado = soma(num1, num2);
         break;
      case '-':
         resultado = subtracao(num1, num2);
         break;
      case '*':
         resultado = multiplicacao(num1, num2);
         break;
      case '/':
         resultado = divisao(num1, num2);
         break;
      default:
         printf("Operacao invalida!\n");
         return 1;
   }

   // exibindo o resultado da operação
   printf("Resultado: %.2f\n", resultado);

   return 0;
}
