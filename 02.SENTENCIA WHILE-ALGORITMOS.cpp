//C// ADAEL QUECHOL OLIVARES 11/10/20 4°B MAAU
//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>

int main()
{
		//DECLARACION DE VARIABLES

    int n,l,c;
        //INGRESO DE DIGITOS

    printf("INGRESE UN NUMERO ENTRE EL RANGO DEL 0 AL 5: ");
    scanf("%d",&n);
    c=n*n;
    l=c-(n*2);
        //SENTENCIA EHILE

    while (l <= c)
    {
        if (n <=5)
		{	
       printf("%d ",c);
       c=c-(2);
        }
        else{
            printf("EL NUMERO INGRESADO NO ESTA ESTA FUERA DEL RANGO");
            return 0;
        }
    }
}
