/*
HACER UN PROGRAMA QUE LEA n TRABAJADORES Y POR CADA TRABAJADOR LEA EL SUELDO. CALCULAR E IMPRIMIR SU NUEVO SUELDO DEPENDIENDO DE LA SIGUIENTE TABLA:

SUELDO                              
<=1000                               APLIQUE IN AUMENTO DEL 25%
1000<SUELDO<=5000      APLIQUE UN   DEL 12%
5000<SUELDOZ<=10000  NO TIENE AUMENTO 
>10000                               APLIQUE UN DESCUENTO DEL 9%
*/


#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
float n,s,m,t;

cout<<" Ingrese el numero de trabajadores: ";
cin>>n;
m=0;



while(m<n){
cout<<" Ingrese el sueldo del trabajador: ";
cin>>s;

m=m+1;
if(s<=1000){
t=s+(s*0.25);
cout<<" El sueldo fue de: "<<t;

}else{
if(1000<s&&s<=5000){
t=s+(s*0.12);
cout<<" El sueldo fue de: "<<t;
}else{
if(5000<s&&s<=10000){
t=s;
cout<<" El sueldo fue de: "<<t;
}else{
t=s-(s*0.09);
cout<<" El sueldo fue de: "<<t;
}
}
}
cout<<" \n";

}


 getch();
 }