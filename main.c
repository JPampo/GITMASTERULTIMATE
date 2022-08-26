#include <stdio.h>
#include <stdlib.h>

#define TAM_VETOR 1000


/*
 * Nome: insere_valores_no_vetor
 * Parametros: Vetor de inteiros
 * Retorno: nada
 */
void insere_valores_no_vetor(int vet[])
{
    for(int i = 0; i < TAM_VETOR; i++)
    {
        vet[i] = rand() % 1000;
    }
}

void imprimir_vetor(int vet[])
{
    for(int i = 0; i < TAM_VETOR; i++)
        printf("[%d] - %d\n", i, vet[i]);

}

void bubble(int arr[], int num)     //// função bubble sorting
{
    int x, y, temp;

    for(x = 0; x < num - 1; x++){

        for(y = 0; y < num - x - 1; y++){

            if(arr[y] > arr[y + 1]){

                temp = arr[y];

                arr[y] = arr[y + 1];

                arr[y + 1] = temp;

            }

        }

    }

}


int main()
{
    printf("ZA WARUDO: \n\n");
    int v[1000];
    insere_valores_no_vetor(v);
    imprimir_vetor(v);
    bubble(v,1000);
    imprimir_vetor(v);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define TAM_VETOR 1000


/*
 * Nome: insere_valores_no_vetor
 * Parametros: Vetor de inteiros
 * Retorno: nada
 */
void insere_valores_no_vetor(int vet[])
{
    for(int i = 0; i < TAM_VETOR; i++)
    {
        vet[i] = rand() % 1000;
    }
}

void imprimir_vetor(int vet[])
{
    for(int i = 0; i < TAM_VETOR; i++)
        printf("[%d] - %d\n", i, vet[i]);

}

void bubble(int arr[], int num)     //// função bubble sorting
{
    int x, y, temp;

    for(x = 0; x < num - 1; x++){

        for(y = 0; y < num - x - 1; y++){

            if(arr[y] > arr[y + 1]){

                temp = arr[y];

                arr[y] = arr[y + 1];

                arr[y + 1] = temp;

            }

        }

    }

}


int main()
{
    printf("ZA WARUDO: \n\n");
    int v[1000];
    insere_valores_no_vetor(v);
    imprimir_vetor(v);
    bubble(v,1000);
    imprimir_vetor(v);

    return 0;
}
