/*
HACER UN PROGRAMA QUE LEA N ESTUDIANTES Y POR CADA ESTUDIANTE SE CAPTURA LA DEFINITIVA. CALCULAR E IMPRIMIR CUANTOS ESTUDIANTES APRUEBAN Y CUANTOS NO APRUEBAN, SE APRUEBA SI LA DEFINITIVA ES MAYOR O IGUAL  3,0.
*/

#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
float i,contpas,contper,n;
int def;
contpas=0;
contper=0;

cout<<" Digite el # de estudiantes: ";
cin>>n;

for(i=1;i<=n;i=i+1){
cout<<" Digite la definitiva: ";
cin>>def;

if(def>=3.0){
contpas=contpas+1;
}else{
contper=contper+1;
}

}
  cout<<"Pasaron :"<<contpas<<" perdieron:"<<contper;
 getch();
 }
