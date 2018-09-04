/*

Diseñe un programa que lea 4 numeros reales a,b,c,d y un numero entero j, el programa debe ejecutar alguno de los siguientes calculos

*/



#include<conio.h>

#include<stdlib.h>

#include<stdio.h>

#include<iostream.h>

#include<math.h>

#include<string>

void main(){

float a,b,c,d,j,x;

cout<<"Si J=1,x=(a+b+c+d) \n";

cout<<"Si J=2,x=(a+b+c+d)/4 \n";

cout<<"Si J=3,x=x=(a+b)/(c+d) \n";

cout<<"Si J=4,x=(a/b)+(c/d) \n";

cout<<"Si J=5,x=a/(b-c*d) \n";

cout<<"Ingrese el tipo de operacion que desea:";

cin>>j;

cout<<"Ingrese el valor de A: ";

cin>>a;

cout<<"Ingrese el valor de B: ";

cin>>b;

cout<<"Ingrese el valor de C: ";

cin>>c;

cout<<"Ingrese el valor de D: ";

cin>>d;



if(j==1){

x=(a+b+c+d);

         cout<<"El resultado es: "<<x;

      }else{

       if(j==2){

         x=(a+b+c+d)/4;

       cout<<"El resultado es: "<<x;

       }else{

          if(j==3){

            x=(a+b)/(c+d);

            cout<<"El resultado es: "<<x;

            }else{

             if(j==4){

               x=(a/b)+(c/d);

               cout<<"El resultado es: "<<x;

               }else{

                if(j==5){

                  x=a/(b-c*d);

                  cout<<"El resultado es: "<<x;

                  }else{

                  if(j>=6&&j<1){

                  cout<<"ERROR";

                  }

               }

            }

         }

      }

}



getch();

}