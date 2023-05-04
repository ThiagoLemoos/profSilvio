#include <stdio.h> 
int soma(int a, int b) 
{ return a + b; }
int subtracao(int a, int b) 
{ return a - b; } 
int divisao(int a, int b) 
{ return a / b; } 
int multiplicacao(int a, int b)
{ return a * b; }
int main() 
{ int n1, n2, opcao, resultado;
 int *p1, *p2;
 char continuar; 
 p1 = &n1;
 p2 = &n2; 
 do { printf("Digite o primeiro valor: "); 
     scanf("%d", p1); 
     printf("Digite o segundo valor: ");
     scanf("%d", p2); 
     printf("Escolha uma operacao:\n"); 
     printf("1 - Soma\n"); 
     printf("2 - Subtracao\n"); 
     printf("3 - Divisao\n");
     printf("4 - Multiplicacao\n"); 
     scanf("%d", &opcao);
     switch (opcao) { 
       case 1: resultado = soma(*p1, *p2); 
         printf("Soma dos valores: %d + %d = %d\n", *p1, *p2, resultado); 
         break;
       case 2: resultado = subtracao(*p1, *p2); 
         printf("Subtracao dos valores: %d - %d = %d\n", *p1, *p2, resultado);
         break; 
       case 3: resultado = divisao(*p1, *p2); 
         printf("Divisao dos valores: %d / %d = %d\n", *p1, *p2, resultado);
         break; 
       case 4: resultado = multiplicacao(*p1, *p2); 
         printf("Multiplicacao dos valores: %d * %d = %d\n", *p1, *p2, resultado);
         break; 
       default: printf("Opcao invalida\n"); 
         break; 
     } printf("Deseja continuar? (S/N)\n"); 
     scanf(" %c", &continuar); 
    } while (continuar == 'S' || continuar == 's'); 
 return 0; }
