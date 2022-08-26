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

void media_vetor(int vet[]){
    float soma=0,media;
    for(int i=0;i<TAM_VETOR;i++){
        soma=vet[i]+soma;
    }
    media=soma/TAM_VETOR;
    printf("Valor da media: %.2f \n",media);
    }

void imprimir_vetor(int vet[])
{
    for(int i = 0; i < TAM_VETOR; i++){
        printf("[%d] - %d\n", i, vet[i]);
    }

}
void mediana_vetor(int vet[]){
    float mediana;
     mediana = ((float)vet[500]+ (float)vet[499])/2;
     printf("Valor da mediana: %.2f \n", mediana);


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
    bubble(v,1000);
    imprimir_vetor(v);
    media_vetor(v);
    mediana_vetor(v);
    return 0;
}