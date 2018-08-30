/*
HACER UN PROGRAMA QUE LEA EL SUELDO DE UN TRABAJADOR, 
APLIQUELE UN AUMENTO DEL 35% SI SU SUELDO ES INFERIOR A 2.000, 
DE LO CONTRARIO APLIQUELE UN AUMENTO DEL 5%. 
IMPRIMIR EN AMBOS CASOS EL NUEVO SUELDO.
*/

#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>

void main(){
    float a,b;
    cout<<"Digite su sueldo:";
    cin>>a;

    if(a>=0){
        if(a<=2000){
            b=(a+(a*0.35));
        }else{
            b=(a+(a*0.05));
        }
        cout<<"Su nuevo sueldo es:"<<b;
    }else{
        cout<<"error";
    }
    getch();
}