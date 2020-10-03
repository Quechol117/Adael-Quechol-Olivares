// PROGRAMA 04 ECUACIONES  ADAEL QUECHOL OLIVARES
//BIBLIOTECAS
#include<stdio.h>
#include<math.h>
//VARIABLES
int main(int argc, char** args){
   float a, b, c, d, x1, x2, xi, xr;
   //INGRESO DE VARIABLES
   printf("PROGRAMA DE SOLUCION DE ECUACIONES ax+bx+c=0");
   printf("\n\nECUACION: ax^2+bx+c=0\n");
   
   printf("\n INGRESE EL VALOR DE LA VARIABLE A : ");
   scanf("%f", &a);
   // PRECAUCION POR SI SE INTROCUCE UN CERO EN LA VARIABLE
   while(a==0){
   printf("\nEL VALOR NO PUEDE SER 0 , INGRESE OTRO LAVOR :");
   scanf("%f", &a);
   }
   printf("\n INGRESE EL VALOR DE LA VARIABLE B: ");
   scanf("%f", &b);
      // PRECAUCION POR SI SE INTROCUCE UN CERO EN LA VARIABLE

   while(b==0){
   printf("\nEL VALOR NO PUEDE SER 0 , INGRESE OTRO LAVOR :");
   scanf("%f", &b);
   }
   printf("\n INGRESE EL VALOR DE LA VARIABLE C : ");
   scanf("%f", &c);
      // PRECAUCION POR SI SE INTROCUCE UN CERO EN LA VARIABLE

   while(c==0){
   printf("\nEL VALOR NO PUEDE SER 0 , INGRESE OTRO LAVOR :");
   scanf("%f", &c);
   }
   //OPERACIONES 
   d=pow(b, 2.0)-4*a*c;
   if(d>0.0){
       printf("\n LAS RAICES REALES");
       x1=((-b+sqrt(d))/(2.0*a));
       x2=((-b-sqrt(d))/(2.0*a));
       printf("\n x1=%.2f   x2=%.2f", x1, x2);
   }
   // IMPRENCION DE DATOS
   else{
       if(d==0.0){
           x1=(-b)/(2.0*a);
           printf("\n LA ECUACION SOLO TIENE UNA RAIZ %.2f", x1);
       }
       else{
           xr=(-b/(2.0*a));
           xi=(sqrt(-d)/(2.0*a));
           printf("\n LA RAIZ REAL %.2f \n LA RAIZ IMAGINARIAES %.2f", xr, xi);
       }
   }
}
