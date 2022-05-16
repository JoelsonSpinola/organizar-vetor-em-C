#include<stdio.h>
#define nota 5

int main()
{
    int grand[nota];
    printf("Insira as notas\n");

    //receber dados do vector
    for (int i = 0; i < nota; i++)
    {
        scanf("%d",&grand[i]);
    }
    printf("o vetor já está completo...\n");

    //organização do vetor por ordem crescente
    int x=1,troca;
    while (x)
    {
        x=0;
        for (int i = 0; i < nota; i++)
        {
           if (grand[i]<grand[i-1])
           {
               troca=grand[i-1];
                grand[i-1]=grand[i];
                grand[i]=troca;

                x=1;
           }       
        }
    }

    printf("Vetor foi ordenado!\n");

    printf("As notas em ordenadas são:\n");

    //apresentação do conteudo do vetor organizado

    for (int i = 0; i <nota; i++)
    {
        printf("%d \t",grand[i]);
        
    }
    //apresentação da ultima melhor nota
    printf("\nA maior nota é %d.",grand[nota-1]);
    return 0;
}
