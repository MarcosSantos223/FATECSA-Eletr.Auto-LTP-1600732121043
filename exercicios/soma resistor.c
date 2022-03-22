#include <stdio.h>

int main()
{
    float e_r1, e_r2, e_r3, e_r4 , s_req;
    printf ("entre com o resistor 1:");
    scanf("%f",&e_r1);
    printf ("entre com o resistor 2:");
    scanf("%f",&e_r2);
    printf ("entre com o resistor 3:");
    scanf("%f",&e_r3);
    printf ("entre com o resistor 4:");
    scanf("%f",&e_r4);
    s_req=e_r1+e_r2+e_r3+e_r4;
    printf("resistor equivalente %f\n", s_req);
    
    
       return 0;
}