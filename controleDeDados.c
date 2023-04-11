#include <stdio.h>
#include <string.h>

#define MAX_PROJETOS 100 // definição do máximo de projetos que podem ser cadastrados

// definição da estrutura Projeto
typedef struct Projeto {
    int numero;
    float saldo;
} Projeto;

// definição da função para cadastrar uma operação (receita ou despesa) em um projeto
void cadastrarOperacao(Projeto projetos[], int numProj, float valor, char tipoDespesa) {
    if (tipoDespesa == 'R') {
        projetos[numProj].saldo += valor;
    } else if (tipoDespesa == 'D') {
        projetos[numProj].saldo -= valor;
    }
}

int main() {
    int numProj, i;
    float valor;
    char tipoDespesa[2];
    Projeto projetos[MAX_PROJETOS];

    printf("Digite o número do projeto (ou -1 para encerrar): ");
    scanf("%d", &numProj);

    // loop para cadastrar operações em projetos até que seja digitado -1
    while (numProj != -1) {
        printf("Digite o valor da operação: ");
        scanf("%f", &valor);
        printf("Digite o tipo de despesa (R para receita e D para despesa): ");
        scanf("%s", tipoDespesa);

        // verifica se o projeto já foi cadastrado
        int projetoCadastrado = 0;
        for (i = 0; i < MAX_PROJETOS; i++) {
            if (projetos[i].numero == numProj) {
                cadastrarOperacao(projetos, i, valor, tipoDespesa[0]);
                projetoCadastrado = 1;
                break;
            }
        }

        // caso o projeto não tenha sido cadastrado ainda, cria um novo projeto
        if (!projetoCadastrado) {
            for (i = 0; i < MAX_PROJETOS; i++) {
                if (projetos[i].numero == 0) {
                    projetos[i].numero = numProj;
                    projetos[i].saldo = 0;
                    cadastrarOperacao(projetos, i, valor, tipoDespesa[0]);
                    break;
                }
            }
        }

        printf("Digite o número do projeto (ou -1 para encerrar): ");
        scanf("%d", &numProj);
    }

    // exibe o saldo final de cada projeto
    printf("Saldo final dos projetos:\n");
    for (i = 0; i < MAX_PROJETOS; i++) {
        if (projetos[i].numero != 0) {
            printf("Projeto %d: R$ %.2f\n", projetos[i].numero, projetos[i].saldo);
        }
    }

    return 0;
}
