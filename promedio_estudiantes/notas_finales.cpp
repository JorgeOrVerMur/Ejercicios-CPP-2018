/*
HACER UN PROGRAMA QUE POR CADA ESTUDIANTE LEA EL CODIGO Y LAS NOTAS DE 4 PARCIALES DE UNA MATERIA, CALCULE E IMPRIMA EL CODIGO Y LA NOTA FINAL DE CADA ESTUDIANTE. NO SABEMOS CUANTOS ESTUDIANTES SON, PERO DESPUES DE LA INFORMACION DE EL ULTIMO SE INTRODUCE 0 EN EL CAMPO CORRESPONDIENTE AL CODIGO, TAMBIEN SE DEBE INFORMAR AL FINAL CUANTOS ESTUDIANTES PASARON LA MATERIA Y CUANTOS LA PERDIERON.
*/

#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
int a,r;
float c,p,n1,n2,n3,n4;
cout<<"Digite su codigo: ";
cin>>c;
a=0;
r=0;
while(c!=0){
cout<<"Ingrese la primera nota: ";
cin>>n1;
cout<<"Ingrese la segunda nota: ";
cin>>n2;
cout<<"Ingrese la tercera nota: ";
cin>>n3;
cout<<"Ingrese la cuarta nota: ";
cin>>n4;
p=((n1+n2+n3+n4)/4);
cout<<"El estudiante de codigo: "<<c<<" tuvo un promedio de:"<<p;
cout<<"\n";
if(p>=3.0){
a=a+1;
}else{
r=r+1;
}
cout<<"Digite su codigo: ";
cin>>c;
} //end while
cout<<"La cantidad de estudiantes que aprovaron es: "<<a;
cout<<"\n";
cout<<"La cantidad de estudiantes que reprovaron es: "<<r;
getch();
}
