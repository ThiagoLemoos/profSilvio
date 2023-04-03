/*
Desenvolva uma algoritmo que leia 2 notas de um aluno. Para cada aluno, calcular a média ponderadas das notas, sendo:

nota1 tem peso = 4
nota2 tem peso = 6.

Mostra na tela a média do aluno e o conceito final, conforme tabela abaixo:

0.0 a 4.9  -> D
5.0 a 6.9  -> C
7.0 a 8.9  -> B
9.0 a 10.0 -> A
*/

#include <stdio.h>

int main() {
    float nota1, nota2, media;
    
    // solicita as notas do aluno
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    // calcula a média ponderada
    media = (nota1 * 4 + nota2 * 6) / 10;
    
    // imprime a média e o conceito final
    printf("Média do aluno: %.2f\n", media);
    
    if (media >= 0 && media <= 4.9) {
        printf("Nota: D");
    } else if (media >= 5.0 && media <= 6.9) {
        printf("Nota: C");
    } else if (media >= 7.0 && media <= 8.9) {
        printf("Nota: B");
    } else if (media >= 9.0 && media <= 10.0) {
        printf("Nota: A");
    } else {
        printf("Média inválida.");
    }
    
    return 0;
}
