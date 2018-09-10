/*
HACER UN PROGRAMA QUE PERMITA CALCULAR LO QUE HAY QUE PAGARLE A UN TRABAJADOR TENIENDO EN CUENTA SUS SUELDO Y LAS HORAS EXTRA TRABAJADAS. PARA EL PAGO D HORAS EXTRA SE TOMA EN CUENTA LA CATEGORIA DEL TRABAJADOR. CADA TRABAJADOR PUEDE TENER UN MAXIMO DE 30 HORAS EXTRAS, SI TIENEN MAS SOLO SE LE PAGARAN 30 HORAS EXTRA, A LOS TRABAJADORES CON CATEGORIA MAYOR A 4 NO SE LE DEBEN PAGAR HORAS EXTRA.
CATEGORIA PRECIO HORA EXTRA
1                      50
2                      42
3                      35
4                      28
/*

#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
int sueldo,extra,cate,total;
cout<<"Digite la categoria: ";
cin>>cate;
cout<<"Digite el valor del sueldo: ";
cin>>sueldo;
cout<<"Digite las horas extra: ";
cin>>extra;

switch(cate){
case 1:
if(extra>30){
total=(sueldo+(50*30));
cout<<"Su sueldo total es: "<<total;
}else{
total=(sueldo+(50*extra));
cout<<"Su sueldo total es: "<<total;
}
break;
case 2:
if(extra>30){
total=(sueldo+(42*30));
cout<<"Su sueldo total es: "<<total;
}else{
total=(sueldo+(42*extra));
cout<<"Su sueldo total es: "<<total;
}
break;
case 3:
if(extra>30){
total=(sueldo+(35*30));
cout<<"Su sueldo total es: "<<total;
}else{
total=(sueldo+(35*extra));
cout<<"Su sueldo total es: "<<total;
}
break;
case 4:
if(extra>30){
total=(sueldo+(28*30));
cout<<"Su sueldo total es: "<<total;
}else{
total=(sueldo+(28*extra));
cout<<"Su sueldo total es: "<<total;
}
default:
total=(sueldo);
cout<<"Su sueldo total es: "<<total;
break;}
getch();
}
