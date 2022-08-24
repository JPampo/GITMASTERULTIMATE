#include <stdio.h>
#include <stdlib.h>

#define TAM_VETOR 10


/*
 * Nome: insere_valores_no_vetor
 * Parametros: Vetor de inteiros
 * Retorno: nada
 */
void insere_valores_no_vetor(int vet[])
{
    for(int i = 0; i < TAM_VETOR; i++)
    {
        vet[i] = rand() % 5000;
    }

void imprimir_vetor(int vet[])
{
    for(int i = 0; i < TAM_VETOR; i++)
        printf("[%d] - %d\n", i, vet[i]);

}


int main()
{
    printf("ZA WARUDO: \n\n");
    int v[1000];
        
    return 0;
}
