#include <stdio.h>

int main() {
   int idade = 25;
   char genero = 'M';
   char nome[] = "João";
   float altura = 1.75;

   printf("Nome: %s\n", nome);
   printf("Idade: %d anos\n", idade);
   printf("Gênero: %c\n", genero);
   printf("Altura: %.2f metros\n", altura);

   return 0;
}
