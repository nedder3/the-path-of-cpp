// Escribe la siguiente expresion como expresion en c++

#include<iostream>
using namespace std;

int main(){
	float a,b,resultado=0;
	
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"Digite el valor de b: ";cin>>b;
	
	resultado = (a/b) + 1;
	
	cout.precision(2); //esto es como un truncar
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
