PROGRAMA QUE MUESTRE APROBO O REPROBO SI ES MAYOR O IGUAL A 3.0
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
float f;
cout<<"digite su definitiva:";
cin>>f;
if(f>=0.0&&f<=5.0){
if(f>=3.0){
cout<<"aprobo la materia";
}else{
cout<<"reprobo";
}
}else{
cout<<"error";
}
getch();
}