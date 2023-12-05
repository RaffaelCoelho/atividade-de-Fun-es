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

float dividir(float n1, float n2)
{

    float resultado;
    resultado = (n1 + n2) / 2;

    return resultado;
}

 int main()
{
 float primeironumero;
 float segundonumero;
 float media;


    cabecalho();
    printf("Digite o primeiro numero:");
    scanf("%f", &primeironumero);

    printf("Digite o primeiro numero:");
    scanf("%f", &segundonumero);

    media = dividir(primeironumero, segundonumero);

    limpa_tela();
    cabecalho();

    printf("Primeiro numero: %2.f\n" , primeironumero);
    printf("Segundo numero: %2.f\n" , segundonumero);
    printf("Media: %.2f\n" , media);
    
    return 0;
}