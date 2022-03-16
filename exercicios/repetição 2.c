/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // declaracao de variavel
    int valor_aux,valor_nro_n;
    printf("entre com o valor_nro_n:\n");
    scanf("%d",&valor_nro_n);
    valor_aux=0;
       while(valor_aux<=valor_nro_n){
        printf ("%d \n",valor_aux );
        valor_aux++;
    }

    return 0;
}
