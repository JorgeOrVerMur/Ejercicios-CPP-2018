/*
HACER UN PROGRAMA QUE LEA NUMEROS ENTEROS,Y QUE MUESTRE EN PANTALLAE IMPRIMA CUANTOS SON PARES Y CUANTOS SON IMPARES.
EL PROGRAMA SE TERMINA CUANDO EL NUMERO LEIDO ES IGUAL A 0.
*/

#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
int n,contpares,contimpares,x;
cout<<"Digite el #: ";
cin>>n;
contpares=0;
contimpares=0;
while(n!=0){
x=n%2;
if(x==0){
contpares=contpares+1;
}else{
contimpares=contimpares+1;
}
cout<<"Digite el #: ";
cin>>n;
} //end while
cout<<"La cantidad de pares es: "<<contpares;
cout<<"\n";
cout<<"La cantidad de impares es: "<<contimpares;
getch();
}

