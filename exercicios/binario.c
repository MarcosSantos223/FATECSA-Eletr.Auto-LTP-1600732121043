#include <stdio.h>

int main()

{
    int e_nro, e_s0,e_s1, e_s2, e_s3, e_s4, e_s5, e_s6, e_s7, e_s8, e_s9, s_binario,quociente,cont,resto, tmp;
    printf("entre com um valor decimal entre 0 e 1023:\n");
    scanf("%i", &e_nro);
    quociente = e_nro;
    cont=0;
    for(e_nro>1;){
        resto=quociente%2;
        quociente=quociente/2;
        switch(cont){
            case 0 : e_s0=resto; break;
            case 1 : e_s1=resto; break;
            case 2 : e_s2=resto; break;
            case 3 : e_s3=resto; break;
            case 4 : e_s4=resto; break;
            case 5 : e_s5=resto; break;
            case 6 : e_s6=resto; break;
            case 7 : e_s7=resto; break;
            case 8 : e_s8=resto; break;
            case 9 : e_s9=resto; break;
        }
        
        cont++;
        }
        printf("Binario:%i\n",quociente);
        for (tmp=cont-1; tmp>=0; tmp--){
            switch(tmp){
           
            case 0: printf("%i\n",e_s0);break;
            case 1: printf("%i\n",e_s1);break;
            case 2: printf("%i\n",e_s2);break;
            case 3: printf("%i\n",e_s3);break;
            case 4: printf("%i\n",e_s4);break;
            case 5: printf("%i\n",e_s5);break;
            case 6: printf("%i\n",e_s6);break;
            case 7: printf("%i\n",e_s7);break;
            case 8: printf("%i\n",e_s8);break;
            case 9: printf("%i\n",e_s9);break;
                                                                                                
        }
    }
        
    
        
    
    return 0;
}
