#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *tombamentos, i = 0, tamanho, rTombamentosMenu, rTombamentos, fim = 0;

    do {
        system("cls");
        printf("| === | GERENCIA DE INFORMATICA | === |\n");
        printf("| (1) - TOMBAMENTOS |\n");
        scanf("%d", &rTombamentosMenu);

        if (rTombamentosMenu == 1)
        {
            printf("| (1) - ADICIONAR TOMBAMENTOS | (2) - LER TOMBAMENTOS |\n");
            scanf("%d", &rTombamentos);
        }

        if (rTombamentos == 1)
        {
            FILE *arquivo = fopen("tombamentos.txt", "a");
            printf("Quantos tombamentos voce quer inserir?\n");
            scanf("%d", &tamanho);
            tombamentos = malloc(tamanho * sizeof(int));

            if (arquivo == NULL)
            {
                printf("Erro: não foi possivel abrir o arquivo %s", arquivo);
                return 1;
            }

            for (i = 0; i < tamanho; i++)
            {
                printf("Entre com o tombamento %d: ", i+1);
                scanf("%d", &tombamentos[i]);
                fprintf(arquivo, "%d\n", tombamentos[i]);
            }

            fclose(arquivo);
            printf("Dados salvos no arquivo com sucesso!\n");

            if (i == tamanho)
            {
                int j;
                for (j = 0; j < tamanho; j++)
                {
                    printf("Tombamento %d: %d. \n", j+1, tombamentos[j]);
                }
            }
            free(tombamentos);
        }
        if (rTombamentos == 2)
        {
            FILE *arquivo = fopen("tombamentos.txt", "r");

            if (arquivo == NULL)
            {
                printf("Erro: não foi possivel abrir o arquivo %s", arquivo);
                return 1;
            }

            const unsigned TAMANHO_MAXIMO = 256;
            char buffer[TAMANHO_MAXIMO];

            while (fgets(buffer, TAMANHO_MAXIMO, arquivo)) {
                printf("Tombamento: %s", buffer);
            }

            fclose(arquivo);

            printf("|\n(1) - Voltar ao inicio | (2) - Fechar programa | \n");
            scanf("%d", &fim);

            if (fim == 1)
            {
                fim = 0;
            }
            if (fim == 2)
            {
                return 0;
            }
        }
    } while (fim == 0);
}
