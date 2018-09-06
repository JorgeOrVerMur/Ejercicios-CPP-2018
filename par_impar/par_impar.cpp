/*
HACER UN PROGRAMA QUE LEA UN NUMERO ENTERO Y DETERMINE SI ES PAR O IMPAR
*/

#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
int a,b;

cout<<"Ingrese el numero: ";
cin>>a;
b=(a%2);
	if(b==0){

         cout<<"El numero es par ";
   }else{
      	cout<<"El numero es impar ";
         }

getch();
}
