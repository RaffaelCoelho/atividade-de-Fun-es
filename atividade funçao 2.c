#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{

    printf("\n========================\n");
    printf("\tSENAI");
    printf("\n========================\n");
}

void limpa_tela()
{
    fflush(stdin);
    system("cls || clear");
}

mostrar_tabuada(int n1)
{
    int i;
    for( i = 0; i < 11; i++)
    {
        printf("%d x %d = %d\n" , n1, i, n1 * i) ;
    }
    
}

 int main()
{
 int primeironumero;
 
    cabecalho();
    printf("Digite o primeiro numero:");
    scanf("%d", &primeironumero);

   
    limpa_tela();
    cabecalho();
    mostrar_tabuada(primeironumero);
      
    return 0;
}