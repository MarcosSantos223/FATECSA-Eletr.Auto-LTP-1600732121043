/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//calculadora
#include <stdio.h>

int main()
{
char e_op;
 float  e_numero_1,e_numero_2,s_result;
printf ("entre com o numero1:");
scanf("%f",& e_numero_1);
printf("entre com e_operacao(+,-,* ou /:)");
scanf("%c",& e_op);
scanf("%c",& e_op);
printf("entre com e_numero_2");
scanf("%f",& e_numero_2);
switch(e_op){
    case'+': s_result = e_numero_1 + e_numero_2;
    break;
    case'-' : s_result = e_numero_1 - e_numero_2;
    break;
    case'*' : s_result = e_numero_1*e_numero_2;
    break;
    case '/' : if (e_numero_2!=0) s_result = e_numero_1/e_numero_2;
    break;
}
switch(e_op){
    case '+' : case'-':
    case '*' : printf("s= %f\n",s_result);
    break;
    case'/':
    if((e_numero_2)){
        printf("erro");
    }else{
        printf("s=%f",s_result);
    }
    break;
    default:printf("erro de opecacao");
}
    

    return 0;
}
