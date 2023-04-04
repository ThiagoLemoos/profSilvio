#include <stdio.h>

int main() {
   int array[5] = {1, 2, 3, 4, 5}; // vetor/array com 5 elementos

   // exibindo os valores do vetor
   printf("Valores do vetor:\n");
   for (int i = 0; i < 5; i++) {
      printf("array[%d] = %d\n", i, array[i]);
   }

   // exibindo os valores e endereços das variáveis
   printf("\nValores e endereços das variáveis:\n");
   for (int i = 0; i < 5; i++) {
      printf("&array[%d] = %p, array[%d] = %d\n", i, &array[i], i, array[i]);
   }

   return 0;
}
