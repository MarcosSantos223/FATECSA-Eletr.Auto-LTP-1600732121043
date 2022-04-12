/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
   
   int e_nro;
   
   do{
       do{
           printf("Entre com o nro:");
           scanf("%i",&e_nro);
       }while(e_nro < 0);
       printf("%i\n",e_nro);
   }while (e_nro!=0);
   printf("fim\n");

    return 0;
}
