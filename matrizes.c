#include <stdio.h>

int main() {
   float matriz[4][4];
   float soma_colunas_impares = 0.0, media_colunas_pares = 0.0;

   // lendo os valores da matriz
   printf("Digite os valores da matriz 4x4:\n");
   for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
         scanf("%f", &matriz[i][j]);
      }
   }

   // calculando a soma das colunas ímpares e a média das colunas pares
   for (int j = 0; j < 4; j++) {
      if (j % 2 == 0) { // coluna par
         float soma_coluna = 0.0;
         for (int i = 0; i < 4; i++) {
            soma_coluna += matriz[i][j];
         }
         media_colunas_pares += soma_coluna / 4.0;
      } else { // coluna ímpar
         for (int i = 0; i < 4; i++) {
            soma_colunas_impares += matriz[i][j];
         }
      }
   }

   // exibindo os resultados
   printf("\nSoma das colunas ímpares: %f\n", soma_colunas_impares);
   printf("Média das colunas pares: %f\n", media_colunas_pares / 2.0);

   return 0;
}
