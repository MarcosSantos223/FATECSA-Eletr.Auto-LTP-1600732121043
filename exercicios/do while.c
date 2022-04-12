/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int main() {
    //declaração de variaveis
    int e_nro;
    do{
        printf("digite um valor >0:\n");
        scanf("%i",&e_nro);
    }while(e_nro<=0);
    printf(" o numero %i inserido é maior que 0 \n",e_nro);

    return 0;
}
