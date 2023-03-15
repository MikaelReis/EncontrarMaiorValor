#include <stdio.h>

int main()
{
    # define TAM_MAX 10
    float vet1[TAM_MAX];
    float maior;
    
    for(int i =0; i<TAM_MAX; i++){
        printf("Digite um numero:");    
        scanf("%f", &vet1[i]);// le os dados
    }    
    maior = vet1[0]; // assume que o primeiro é Maior
    for (int i = 0; i <TAM_MAX; i++)
        if (vet1[i] > maior){
            maior = vet1[i];
            
        }
    printf("o maior elemento é %2.f\n", maior);        

    return 0;        
}
