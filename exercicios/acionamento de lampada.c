/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    //acionamento da lampada
    
    char e_interruptor;
    printf("lampada apagada\n");
    while (1){
    printf("a_aberto; f_fechado:\n");
    scanf("%c",&e_interruptor);
        switch(e_interruptor)
        {
            case 'a' : printf("apagado\n");
            break;
            case 'b' : printf("aceso\n");
            break;
        }
    }

    return 0;
}
