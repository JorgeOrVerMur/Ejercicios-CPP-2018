/*

HACER UN PROGRAMA QUE LEA UN NUMERO CUALQUIERA x Y LO ELEVE A OTRO NUMERO CUALQUIERA, MOSTRAR EN PANTALLA EL RESULTADO DE LOS DOS NUMEROS, DEBEN SER ENTEROS POSITIVOS

*/



#include<conio.h>

#include<stdlib.h>

#include<stdio.h>

#include<iostream.h>

#include<math.h>

#include<string>

void main(){

float b,e,r;

cout<<"Ingrese el numero de la base: ";

cin>>b;

cout<<"Ingrese el numero de el exponente: ";

cin>>e;

		if(b>=0&&e>=0){

			r=pow(b,e);

         cout<<"El resultado es: "<<r;

      }else{

      cout<<"ERROR";

      }



getch();

}