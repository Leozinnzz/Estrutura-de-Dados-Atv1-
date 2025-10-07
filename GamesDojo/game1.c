/* Um jogo que apresenta uma tabela com um número padrao e um número aleatório,
que deve ser encontrado no meio dos númros padrões, onde o jogador tem 10 tentativas. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    // linha e coluna aleatória
    int ln, cl;

    // numeros aleatórios
    int pd, al;

    // escolha e acumulador
    int esc, cont = 0;

    // números de linhas e colunas
    int numLine = 10, numCol = 25;

    for (int n = 0; n < 10; n++) {
        do {
            pd = 1 + rand() % 9;
            al = 1 + rand() % 9;
        } while (pd == al);

        ln = rand() % numLine;
        cl = rand() % numCol;

        // geração da tabéla
        for (int l = 0; l < numLine; l++) {
            // geração dos elementos das linhas da tabéla
            for (int c = 0; c < numCol; c++) {
                // implementação do número diferent
                if (ln == l && cl == c) {
                    printf("%d ", al);
                    continue;
                }

                // implementação do número padrão
                printf("%d ", pd);
            }
            printf("\n");
        }

        system("sleep 3");
        system("clear");

        printf("Qual era o número diferente: ");
        scanf("%d", &esc);

        if (al == esc) {
            cont++;
            printf("Você acertou! :D\n\n");
        } else {
            printf("Chute para fora! :C\n\n");
        }

        // recurso para limpar o buffer
        while (getchar() != '\n') {};

        printf("Presione ENTER para continuar...\n");

        // setbuf(stdin,NULL);

        getchar();
        system("clear");

        // crescimento dinâmico da tabéla ao passar de tentativa
        numCol += 2;
        numLine += 2;
    }

    printf("Acertou %i/10\n", cont);
    return 0;
}
