#include <stdio.h>

int main()

{
    int v_aux, e_multiplicador, e_multiplicando , s_resultado ;

    printf("Entre com o valor do multiplicando:\n");
    scanf("%i",&e_multiplicando);
    printf("Entre com o valor do multiplicador:\n");
    scanf("%i",&e_multiplicador);
    v_aux=0;
    s_resultado=0;
    
    while (v_aux<e_multiplicador){
        s_resultado=e_multiplicando+e_multiplicando;
        v_aux++;
        
        }
        printf("O resultado eh:\n %i",s_resultado);
    
    return 0;
}

