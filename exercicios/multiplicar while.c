#include <stdio.h>

int main()

{
    int v_aux, e_multiplicador, e_multiplicando , s_soma;

    printf("Entre com o valor do multiplicando:\n");
    scanf("%i",&e_multiplicando);
    printf("Entre com o valor do multiplicador:\n");
    scanf("%i",&e_multiplicador);
    v_aux=0;
    s_soma=0;
    
    while (v_aux<e_multiplicador){
        s_soma=s_soma+e_multiplicando;
        v_aux++;
        
        }
        printf("Resultado :\n %i",s_soma);
    
    return 0;
}

