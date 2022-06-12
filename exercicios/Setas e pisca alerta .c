#include <stdio.h>
int main()
{
//acionamento das setas e pisca alerta:
    char interruptor;
    printf("Entre com:\n 'e' para esquerda:\n 'd' para direita:\n 'p' para pisca alerta :\n");
    while (1) {

        scanf("%c",&interruptor);
        switch(interruptor) {

        case 'e' :
            printf("Esquerda\n");
            break;
        case 'd' :
            printf("Direita\n");
            break;
        case 'p' :
            printf("esquerda : direita ");
            break;

        }
    }
    return 1;
}