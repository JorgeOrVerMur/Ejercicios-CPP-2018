#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
int val,v,num;
cout<<"Digite el valor del menu num: ";
cin>>num;
cout<<"Digite el valor de v: ";
cin>>v;
switch(num){
case 1:
val=100*v;
cout<<"el valor de val es: "<<val;
break;
case 2:
val=pow(100,v);
cout<<"el valor de val es: "<<val;
break;
case 3:
val=100/v;
cout<<"el valor de val es: "<<val;
break;
default:
val=0;
cout<<"el valor es: "<<val;
break;}
getch();
}