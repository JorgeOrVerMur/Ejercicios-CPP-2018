/*
HACER UN PROGRAMA QUE LEA 2 NUMEROS ENTEROS Y DETERMINE CUAL ES EL MAYOR, CONTEMPLER QUE AMBOS SEAN IGUALES
*/

#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
float a,b;

cout<<"Ingrese el valor de A: ";
cin>>a;
cout<<"Ingrese el valor de B: ";
cin>>b;

		if(a>b){

         cout<<"A es mayor que B ";
      }else{
      	if(a<b){

      	cout<<"B es mayor que A";
      	}else{
         	if(a==b){

            cout<<"A es igual que B ";
            }else{

               cout<<"ERROR ";
         }
      }
	}

getch();
}