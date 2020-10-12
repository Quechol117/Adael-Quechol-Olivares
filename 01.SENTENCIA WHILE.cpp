// ADAEL QUECHOL OLIVARES 11/10/20 4°B MAAU
//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//DECLARACION DE VARIABLES
    int n,l,c;
    //INGRESO DE DIGITOS
    printf("INGRESE UN NUMERO ENTRE EL RANGO DEL 0 AL 5:  ");
    scanf("%d",&n);
    
    l=(7*n)+2;
    c=n*3;
    //SENTENCIA WHILE
    while (c <= l)
    {
        if (n <=5){
       printf("%d ",c);
       c=c+2;
        }
        else{
            printf("EL NUMERO INGRESADO NO ESTA ESTA FUERA DEL RANGO");
            return 0;
        }
    }
}




