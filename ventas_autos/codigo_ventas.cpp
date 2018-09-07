#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
float a,c,x;
cout<<"Si es auto nuevo c=1 \n";
cout<<"Si es un auto usado c=2 \n";
cout<<"Si son accesorios c=3 \n";

cout<<"Ingrese el tipo de codigo que desea:";
cin>>c;
cout<<"Ingrese el valor del auto o accesorio: ";
cin>>a;


		if(c==1&&a<=300000){
      	x=(a-(a*0.05));
			cout<<"El total es: "<<x;
      }else{
			if(c==1&&a>300000){
         x=a;
         cout<<"El total es: "<<x;
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
