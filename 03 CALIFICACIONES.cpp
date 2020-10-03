// PROGRAMA 03 CALIFICACIONES  ADAEL QUECHOL OLIVARES
//BIBLIOTECAS
#include <stdio.h>

int main ()
{
	//VARIABLES
    char c,c2, c3;
    float p;
    int n,n2,n3;
        printf("PROGRAMA PARA GENERAR TU PROMEDIO EN BASE A TRES CALIFICACIONES: ");

// INGRESO DE VARIABLE A
    printf("INGRESA LA PRIMER CALIFICACION: ");
    scanf("%s", &c);
//COMPARACION E IGUALACION
    if (c=='A' || c=='a')
    {
        n=10;

    }
    else if (c=='B' || c=='b'){
        n=9;

    }
     else if (c=='C' || c=='c'){
        n=8;

    }
     else if (c=='D' || c=='d'){
        n=7;
    }
     else if (c=='E' || c=='e'){
        n=6;
    }
     else if (c=='F' || c=='f'){
        n=5;
    }
     else if (c=='G' || c=='g'){
        n=4;
    }
    else if (c=='H' || c=='h'){
        n=3;
    }
    else if (c=='I' || c=='i'){
        n=2;
    }
    else if (c=='J' || c=='j'){
        n=1;
    }
    else if (c=='K' || c=='k'){
        n=0;
    }
    else{
        printf("LA CALIFICACION INGRESADA NO ESTA DENTRO DEL RANGO \n");
        printf("INGRESE OTRA CALIFICACION");
    }
// INGRESO DE VARIABLE A
    printf("INGRESE LA SEGUNDA CALIFICACION: ");
    scanf("%s", &c2);
//COMPARACION E IGUALACION
    if (c2=='A' || c2=='a')
    {
        n2=10;

    }
    else if (c2=='B' || c2=='b'){
        n2=9;

    }
     else if (c2=='C' || c2=='c'){
        n2=8;

    }
     else if (c2=='D' || c2=='d'){
        n2=7;
    }
     else if (c2=='E' || c2=='e'){
        n2=6;
    }
     else if (c2=='F' || c2=='f'){
        n2=5;
    }
    else if (c2=='G' || c2=='g'){
        n2=4;
    }
    else if (c2=='H' || c2=='h'){
        n2=3;
    }
    else if (c2=='I' || c2=='i'){
        n2=2;
    }
    else if (c2=='J' || c2=='j'){
        n2=1;
    }
    else if (c2=='K' || c2=='k'){
        n2=0;
    }
    else{
        printf("LA CALIFICACION INGRESADA NO ESTA DENTRO DEL RANGO \n");
        printf("INGRESE OTRA CALIFICACION");
    }
    // INGRESO DE VARIABLE A
    printf("INGRESE LA TERCER CALIFICACION: ");
    scanf("%s", &c3);
//COMPARACION E IGUALACION

    if (c3=='A' || c3=='a')
    {
        n3=10;
    }
    else if (c3=='B' || c3=='b'){
        n3=9;
    }
     else if (c3=='C' || c3=='c'){
        n3=8;
    }
     else if (c3=='D' || c3=='d'){
        n3=7;
    }
     else if (c3=='E' || c3=='e'){
        n3=6;
    }
     else if (c3=='F' || c3=='f'){
        n3=5;
    }
    else if (c3=='G' || c3=='g'){
        n3=4;
    }
    else if (c3=='H' || c3=='h'){
        n3=3;
    }
    else if (c3=='I' || c3=='i'){
        n3=2;
    }
    else if (c3=='J' || c3=='j'){
        n3=1;
    }
    else if (c3=='K' || c3=='k'){
        n3=0;
    }
    else{
       printf("LA CALIFICACION INGRESADA NO ESTA DENTRO DEL RANGO \n");
        printf("INGRESE OTRA CALIFICACION");
    }
    
   // OPERACION PROMEDIO 
    p =(n+n2+n3)/3;
    printf("EL PROMEDIO ES  %.2f\n", p);
//COMPARACION E IGUALACION DEL PROMEDIO

    if (p==10){
        printf("TU PROMEDIO ES A");
    }
    else if (p>8.9 && p<9.9){
        printf("TU PROMEDIO ES B");
    }
    else if (p>7.9 && p<8.9){
        printf("TU PROMEDIO ES C");
    }
     else if (p>6.9 && p<7.9){
        printf("TU PROMEDIO ES D");
    }
     else if (p>5.9 && p<6.9){
        printf("TU PROMEDIO ES E");
    }
     else if (p<5.9){
        printf("REPROBADO");
    }
    return 0;
}
