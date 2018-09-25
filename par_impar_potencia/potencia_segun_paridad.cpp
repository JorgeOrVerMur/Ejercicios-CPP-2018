/*
HACER UN PROGRAMA QUE LEA N NUMEROS, SI EL NUMERO ES PAR ELEVAR AL CUADRADO ESE NUMERO Y MOSTRAR SU RESULTADO EN PANTALLA, DE LO CONTRARIO ELEVAR ESE NUMERO AL CUBO Y MOSTRARLO EN PANTALLA. AL FINAL DEL PROGRAMA DEBE DECIR CUANTOS NUMEROS FUERON PARES Y CUANTOS IMPARES.
*/

#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
float q,a,b,p,par,imp,n;
int t;



cout<<" Ingrese la cantidad de numeros que desea ingresar: ";
cin>>n;
q=0;

a=0;
b=0;


while(q<n){
cout<<" Ingrese el numero: ";
cin>>t;
p=(t%2);
q=q+1;
if(p==0){
a=a+1;
par=pow(t,2);
cout<<"El numero:"<<t<<" es par y al cuadrado es:"<<par;
cout<<"\n";
}else{
imp=pow(t,3);
b=b+1;
cout<<"El numero:"<<t<<" es impar y al cubo es:"<<imp;
cout<<"\n";
}

}
  cout<<"Cantidad de pares fue:"<<a<<" los impares fueron:"<<b;
 getch();
 }
