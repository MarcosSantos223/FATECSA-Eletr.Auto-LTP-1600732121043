#include<stdio.h>

int main()
{
    int vetor[0];
    int dec, bin, aux, opcao, saida, i;
    char b, o, h ;

    printf("Escolha a conversão desejada:\n 'b' para Binario:\n 'o' para Octal:\n 'h' para Hexadecimal:\n");
    scanf("%c", &opcao);
    switch(opcao) {
    case 'b' :
        printf("Insira o Valor em decimal:\n");
        scanf("%d", &dec);
        for(i=0; i<dec; i++);
        i=dec %2 ;
        printf(" %d", vetor[i]);

        break;
    case 'o' :
        printf("Insira o Valor em decimal:");
        scanf("%d", &dec);
        break;
    case 'h' :
        printf("Insira o Valor em decimal:");
        scanf("%d", &dec);
        break;
    }
    printf("O valor convertido é %i",i);
    return 0;
}