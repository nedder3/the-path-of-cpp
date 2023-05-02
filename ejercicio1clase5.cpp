/*
Realizar un programa que lea entrada estandar los siguientes datos de una persona :
	edad : dato de tipo entero.
	sexo : dato de tipo caracter.
	altura en metros : datos de tipo real. 

Tras leer los datos, el programa debe mostrarlos en la salida estandar
*/

#include <iostream>

using namespace std;

int main(){
	int edad ;
	char sexo[10];
	float altura;
	cout<<"digite su edad : "; cin>>edad;
	cout<<"digite su sexo : "; cin>>sexo;
	cout<<"digite su altura en metros : "; cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"sexo : " <<sexo<<endl;
	cout<<"altura : "<<altura<<endl;
	
	return 0;
	
}
