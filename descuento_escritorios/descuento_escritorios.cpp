/*

UN ALMACEN DE ESCRITORIOS HACE LOS SIGUIENTES DESCUENTOS:SI EL CLIENTE COMPRA MENOS DE 5 UNIDADES TIENE UN DESCUENTO DEL 10% SOBRE LA COMPRA; SI EL NUMERO DE UNIDADES ES >=5 PERO <10 UNIDADES TIENE UN DESCUENTO DEL 20% Y SI SON 10 O MAS TIENE UN DESCUENTO DEL 40%. HACER UN PROGRAMA QUE DETERMINE CUANTO DEBE PAGAR UN CLIENTE SI EL VALOR DE CADA ESCRITORIO ES DE 800MIL.

*/



#include<conio.h>

#include<stdlib.h>

#include<stdio.h>

#include<iostream.h>

#include<math.h>

#include<string>

void main(){

float x,y,a,c;

cout<<"Ingrese el numero de escritorios comprados: ";

cin>>a;



x=a*800;

if(a<5){

      c=(x*0.1);

y=(x-c);

}else{

    if(a>=5&&a<10){

         c=(x*0.2);

y=(x-c);

}else{

         c=(x*0.4);

y=(x-c);

}

}

cout<<"El precio total es: "<<y;

getch();

}