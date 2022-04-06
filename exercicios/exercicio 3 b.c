#include <stdio.h>

int main()
{
        int e_nro_1 , e_nro_2 , e_nro_3;
    printf("digite tres numeros:\n");
        scanf("%i",&e_nro_1);
    scanf("%i",&e_nro_2);
    scanf("%i",&e_nro_3);
    
    if (e_nro_1>e_nro_2){
        if(e_nro_2>e_nro_3){
            printf ("%i \n",e_nro_3);
            printf ("%i \n",e_nro_2);
            printf ("%i \n",e_nro_1);
            }
            else{
                if(e_nro_1>e_nro_3){
            printf ("%i \n",e_nro_2);
            printf ("%i \n",e_nro_3);
            printf ("%i \n",e_nro_1);
            }
            else{
            printf ("%i \n",e_nro_2);
            printf ("%i \n",e_nro_1);
            printf ("%i \n",e_nro_3);
         }
       }
     }
    else{
    if(e_nro_1>e_nro_3){
            printf ("%i \n",e_nro_3);
            printf ("%i \n",e_nro_1);
            printf ("%i \n",e_nro_2);
    }
    else{
        if(e_nro_2>e_nro_3){
            printf ("%i \n",e_nro_1);
            printf ("%i \n",e_nro_3);
            printf ("%i \n",e_nro_2);
    }
    else{
            printf ("%i \n",e_nro_1);
            printf ("%i \n",e_nro_2);
            printf ("%i \n",e_nro_3);
    }
    }
    }

    return 0;
}
