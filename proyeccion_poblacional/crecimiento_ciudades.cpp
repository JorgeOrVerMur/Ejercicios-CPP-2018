/*
EN 1990 LA CIUDAD x TENIA 3 MILLONES DE HABITANTES, Y UNA TAZA DE CRECIMIENTO DEL 6% ANUAL; LA CIUDAD y TENIA 6 MILLONES DE HABITANTES Y UNA TAZA DE CRECIMIENTO DEL 3.5% ANUAL. SI EL CRECIMIENTO POBLACIONAL SE MANTIENE CONSTANTE EN LAS DOS CIUDADES, HACER UN PROGRAMA QUE CALCULE E IMPRIMA EN QUE AÑO LA POBLACION x ES MAYOR QUE LA y
*/

#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
float x,y,a;
x=3;
y=6;
a=1990;

while(x<=y){
x=x*1.06;
y=y*1.035;
a=a+1;

}

cout<<"En el año "<<a<<" X supera a Y";

getch();
}

