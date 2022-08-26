#include <stdio.h>
#include <stdlib.h>

#define TAM_VETOR 1000


/*
 * Nome: insere_valores_no_vetor
 * Função: Coloca valores randons para o vetor
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
/*
 * Nome: media_vetor
 * Função: Calcula e imprime a média do vetor
 * Parametros: Vetor de inteiros
 * Retorno: nada
 */
void media_vetor(int vet[])
{
    float soma=0,media;
    for(int i=0; i<TAM_VETOR; i++)
    {
        soma=vet[i]+soma;
    }
    media=soma/TAM_VETOR;
    printf("Valor da media: %.2f \n",media);
}
/*
 * Nome: Imprimir Vetor
 * Função: Imprime o vetor
 * Parametros: Vetor de inteiros
 * Retorno: nada
 */
void imprimir_vetor(int vet[])
{
    for(int i = 0; i < TAM_VETOR; i++)
    {
        printf("[%d] - %d\n", i, vet[i]);
    }

}
/*
 * Nome: mediana_vetor
 * Função: Calcula e imprime a mediana do vetor
 * Parametros: Vetor de inteiros
 * Retorno: nada
 */
void mediana_vetor(int vet[])
{
    float mediana;
    mediana = ((float)vet[500]+ (float)vet[499])/2;
    printf("Valor da mediana: %.2f \n", mediana);


}
/*
 * Nome: bubble
 * Função: Realiza um bubble sort no vetor
 * Parametros: Vetor de inteiros,Tamanho do Vetor
 * Retorno: nada
 */
void bubble(int arr[], int num){
int x, y, temp;

for(x = 0; x < num - 1; x++)
{

    for(y = 0; y < num - x - 1; y++)
    {

        if(arr[y] > arr[y + 1])
        {

            temp = arr[y];

            arr[y] = arr[y + 1];

            arr[y + 1] = temp;

        }

    }

}

}
/*
 * Nome: maior_valor
 * Função: Calcula e imprime a maior valor do vetor
 * Parametros: Vetor de inteiros
 * Retorno: nada
 */
void maior_valor (int vetor[])
{
    int Contador,maior=0;
    for(Contador = 0; Contador<TAM_VETOR; Contador++)
    {
        if(vetor[Contador]>maior)
            maior = vetor[Contador];
    }
    printf("Maior numero: %d\n",maior);
}
/*
 * Nome: menor valor
 * Função: Calcula e imprime a maior valor do vetor
 * Parametros: Vetor de inteiros
 * Retorno: nada
 */
void menor_valor (int vetor[])
{
    int Contador,menor=1000;
    for(Contador = 0; Contador<TAM_VETOR; Contador++)
    {
        if(vetor[Contador]<menor)
            menor = vetor[Contador];
    }
    printf("Menor numero: %d\n",menor);
}
int main()
{
    printf("ZA WARUDO: \n\n");
    int v[TAM_VETOR];
    insere_valores_no_vetor(v);
    bubble(v,TAM_VETOR);
    imprimir_vetor(v);
    maior_valor(v);
    menor_valor(v);
    media_vetor(v);
    mediana_vetor(v);
    return 0;

}





