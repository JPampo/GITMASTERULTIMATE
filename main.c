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
        vet[i] = rand() % 5000;
    }
}
void media_vetor(int vet[]){
    float soma=0,media;
    for(int i=0;i<TAM_VETOR;i++){
        soma=vet[i]+soma;
    }
    media=soma/TAM_VETOR;
    printf("Valor da media: %f",media);
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
    insere_valores_no_vetor(v);
    imprimir_vetor(v);
    media_vetor(v);
        
    return 0;
}
