/*
EN UN HOSPITAL SE HA HECHO UN ESTUDIO SOBRE LOS PACIENTES REGITRADOS DURANTE LOS ULTIMOS 10 AÑOS, CON EL OBJETO DE HACER UNA APROXIMACION DE LOS COSTOS DE INTERNACION POR PACIENTE. SE OBTUVO UN COSTO PROMEDIO DIARIO SEGUN EL TIPO DE ENFERMEDAD QUE AQUEJA AL PACIENTE, ADEMAS SE PUEDE DETERMINAR QUE EN PROMEDIO TODOS LOS PACIENTES CON EDAD ENTRE 15 Y 25 AÑOS IMPLICAN UN COSTO ADICIONAL DEL 15%, LA SIGUIENTE TABLA EXPRESA LOS COSTOS DIARIOS SEGUN EL TIPO DE ENFERMEDAD, HACER UN PROGRAMA QUE CALCULE E IMPRIMA EL COSTO TOTAL QUE REPRESENTA UN PACIENTE.

TIPO DE ENFERMEDAD    COSTO/PACIENTE/DIA
A                                                37
B                                                14
C                                                21
D                                                32
E                                                43
*/



#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<string>
void main(){
float edad,dias,total;
char tipo;
cout<<"Digite el tipo de enfermedad: ";
cin>>tipo;
cout<<"Digite la edad: ";
cin>>edad;
cout<<"Digite los dias: ";
cin>>dias;

switch(tipo){
case 'a':
if(15<=edad&&edad<=25){
total=((37*dias)+(37*dias)*0.15);
cout<<"El costo total es: "<<total;
}else{
total=(37*dias);
cout<<"El costo total es: "<<total;
}
break;
case 'b':
if(15<=edad&&edad<=25){
total=((14*dias)+(14*dias)*0.15);
cout<<"El costo total es: "<<total;
}else{
total=(14*dias);
cout<<"El costo total es: "<<total;
}
break;
case 'c':
if(15<=edad&&edad<=25){
total=((21*dias)+(21*dias)*0.15);
cout<<"El costo total es: "<<total;
}else{
total=(21*dias);
cout<<"El costo total es: "<<total;
}
case 'd':
if(15<=edad&&edad<=25){
total=((32*dias)+(32*dias)*0.15);
cout<<"El costo total es: "<<total;
}else{
total=(32*dias);
cout<<"El costo total es: "<<total;
}
case 'e':
if(15<=edad&&edad<=25){
total=((43*dias)+(43*dias)*0.15);
cout<<"El costo total es: "<<total;
}else{
total=(43*dias);
cout<<"El costo total es: "<<total;
}
break;

default:

cout<<"NO REGISTRADO ";
break;}
getch();
}
