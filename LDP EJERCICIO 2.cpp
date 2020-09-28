//Creador; Adael Quechol Olivares 
//Programa para calcular  resistencias por led
//fecha de creacion: 27/09/2020

#include <stdio.h>
int main (void)
{
    float v,i,r; //Voltaje de la fuente y corriente
printf("ELIGE LOS VALORES DESEADOS POR LED \n");
printf("     LED                 V          I\n");
printf("1.ROJO STD             1.5        0.015\n2.VERDE STD            1.8        0.015\n3.AMARILLO STD         1.8        0.015\n4.BLANCO               2.8         0.02\n");
printf("5.AMARILLO BRILLANTE     2         0.02\n6-VERDE BRILLANTE        3         0.02\n7.AZUL BRILLANTE         3         0.02\n8.ROJO BRILLANTE         2         0.02\n\n");
    printf("INGRESE EL VALOR DEL VOLTAJE: ");
    scanf("%f", &v);
    printf("ESCRIBE EL VALOR DE LA CORRIENTE: ");
    scanf("%f", &i);
    r=v*i;
    
		printf("LA RESISTENCIA DEL LED  ES : %.4f Ohms\n",r);
    	

    system ("PAUSE");

    return 0;
}

