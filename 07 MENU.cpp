// Adael Quechol Olivares
//30-10-2020
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
int main()
{
    int o=0;
    int op;
    char c;
    setlocale(LC_ALL, "");
    while (o==0){
    puts("-----------------MENU----------------");
    printf("POR FAVOR ELIJA UNA OPCION: ");
    printf("\n1.IMPRESION TRIANGULAR\n2.VALOR DE PI.\n3.SECUENCIAS \n4.SALIR");
    puts("\n---------------------------------------");
    printf("SU OPCION ES: ");
    scanf("%d", &op);
    system ("cls");
    if (op==1)
        {
    int r, e, a;
    int na=1; 
    int ne=4; 
    int ia=2; 
    int ie=-1; 
        printf ("A)\n");
    for (r=1;r<=10;r++)
    {
        for (a=1;a<=r;a++)
        {
            printf ("*");
        }
        printf ("\n");
    }
        printf ("B)\n");
    for (r=1;r<=10;r++)
    {
        for (a=r;a<=10;a++)
        {
            printf ("*");
        }
        printf ("\n");
    }
        printf ("C)\n");
    for (r=1;r<=10;r++)
    {
        for (e=2;e<=r;e++)
        {
            printf (" ");
        }
        for (a=10;a>=r;a--)
        {
            printf ("*");
        }
        printf ("\n");
    }
        printf ("D)\n");
    for (r=1;r<=10;r++)
    {
        for (e=9;e>=r;e--) 
        {
            printf(" ");
        }
        for (a=1;a<=r;a++)
        {
            printf("*");
        }
        printf ("\n");
    }
        }
    else if (op==2)
    {
      int i,v , j = 1;
      double pi = 0, rtdo;
      printf("INGRESE EL NUMERO DE VALORES: ");
      scanf("%d",&v);

      for (i = 0; i < v; i++){
          rtdo = 4 / (double)j;

               if (i % 2 == 1)
                  pi -= rtdo;
               else
                   pi += rtdo;
          j += 2;
      }
      printf("EL VALOR DE PI ES: %.16f", pi);
    }
    else if (op==3)
    {
        int y=0;
        char p='s';
        while (p!='n' && p!='N')
    	{
        int x=0,a=1,b=2,c=30,d=15;
		printf("INGRESE EL NUMERO DE CIFRAS QUE DESEA EJECUTAR: ");
        scanf("%i",&x);
           printf("\n N  A     B      C      D ");
		for(y=1;y<=x;y++)
		{
			printf("\n %d: %d     %d     %d     %d ",y,a,b,c,d);
			a=a+2;
			b=b+3;
			c=c-10;
			d=d+8;
		}
		printf("\n DESEA INTENTARLO OTRA VEZ [S/N]?: ");
            scanf("%s",&p);
            system("cls");
	}
    }
    else if (op==4)
    {
        exit(-1);
    }
    else
    {
        printf("NO ES UNA OPCIÓN CORRECTA");
    }
    printf("\n\n DESEA REGRESAR AL MENU [S/N]?: ");
        scanf("%s", &c);
        if(c=='s'||c=='S')
        {
            c=0;
        }
        else if(c=='n'||c=='N')
        {
            system("cls");
            printf("MUCHAS GRACIAS");
            exit(-1);
        }
        system("cls");
    }
    return 0;
}
