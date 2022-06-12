#include <stdio.h>

int main()

{
    int v_aux, e_multiplicador, e_multiplicando , s_res ;

    printf("Entre com o valor do multiplicando:\n");
    scanf("%i",&e_multiplicando);
    printf("Entre com o valor do multiplicador:\n");
    scanf("%i",&e_multiplicador);
    v_aux=0;
    s_res=0;
    
    do
    {
    s_res=s_res+e_multiplicando;
    v_aux++;
   }while (v_aux<e_multiplicador);{
        
         
        }
        printf("O resultado eh:\n %i",s_res);
    
    return 0;
}

