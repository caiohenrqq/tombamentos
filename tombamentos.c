#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include <string.h>
#include <time.h>


char* obterData()
{
    static char data[25];
    time_t tempo = time(NULL);
    struct tm tm = *localtime(&tempo);
    snprintf(data, sizeof(data), "%d/%d/%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    return data;
}


char* obterHora()
{
    static char hora[25];
    time_t tempo = time(NULL);
    struct tm tm = *localtime(&tempo);
    snprintf(hora, sizeof(hora), "%d:%d:%d", tm.tm_hour, tm.tm_min, tm.tm_sec);
    return hora;
}
=======
>>>>>>> b1d941e11cbb8c08da9a96f50dddf9ba97543f49

int main()
{
    int *tombamentos, i = 0, tamanho, rTombamentosMenu, rTombamentos, fim = 0;

    do {
<<<<<<< HEAD
        printf("| (1) - ADICIONAR TOMBAMENTOS | (2) - LER TOMBAMENTOS |\n");
        scanf("%d", &rTombamentos);
=======
        system("cls");
        printf("| === | GERENCIA DE INFORMATICA | === |\n");
        printf("| (1) - TOMBAMENTOS |\n");
        scanf("%d", &rTombamentosMenu);

        if (rTombamentosMenu == 1)
        {
            printf("| (1) - ADICIONAR TOMBAMENTOS | (2) - LER TOMBAMENTOS |\n");
            scanf("%d", &rTombamentos);
        }
>>>>>>> b1d941e11cbb8c08da9a96f50dddf9ba97543f49

        if (rTombamentos == 1)
        {
            FILE *arquivo = fopen("tombamentos.txt", "a");
            printf("Quantos tombamentos voce quer inserir?\n");
            scanf("%d", &tamanho);
            tombamentos = malloc(tamanho * sizeof(int));

            if (arquivo == NULL)
            {
<<<<<<< HEAD
                printf("Erro: não foi possivel abrir o arquivo %s", arquivo);
=======
                printf("Erro: nÃ£o foi possivel abrir o arquivo %s", arquivo);
>>>>>>> b1d941e11cbb8c08da9a96f50dddf9ba97543f49
                return 1;
            }

            for (i = 0; i < tamanho; i++)
            {
                printf("Entre com o tombamento %d: ", i+1);
                scanf("%d", &tombamentos[i]);
<<<<<<< HEAD
                fprintf(arquivo, "%d - %s - %s\n", tombamentos[i], obterData(), obterHora());
=======
                fprintf(arquivo, "%d\n", tombamentos[i]);
>>>>>>> b1d941e11cbb8c08da9a96f50dddf9ba97543f49
            }

            fclose(arquivo);
            printf("Dados salvos no arquivo com sucesso!\n");

            if (i == tamanho)
            {
                int j;
                for (j = 0; j < tamanho; j++)
                {
<<<<<<< HEAD
                    printf("Tombamento %d: %d\n", j+1, tombamentos[j]);
=======
                    printf("Tombamento %d: %d. \n", j+1, tombamentos[j]);
>>>>>>> b1d941e11cbb8c08da9a96f50dddf9ba97543f49
                }
            }
            free(tombamentos);
        }
<<<<<<< HEAD

=======
>>>>>>> b1d941e11cbb8c08da9a96f50dddf9ba97543f49
        if (rTombamentos == 2)
        {
            FILE *arquivo = fopen("tombamentos.txt", "r");

            if (arquivo == NULL)
            {
<<<<<<< HEAD
                printf("Erro: não foi possivel abrir o arquivo %s", arquivo);
=======
                printf("Erro: nÃ£o foi possivel abrir o arquivo %s", arquivo);
>>>>>>> b1d941e11cbb8c08da9a96f50dddf9ba97543f49
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
