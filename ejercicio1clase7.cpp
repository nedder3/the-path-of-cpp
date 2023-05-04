//escribir la expresion matematicas como expresion en c++

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f, resultado = 0 ;
	
	cout<<"Digite al valor de a: ";cin>>a;
	cout<<"Digite al valor de b: ";cin>>b;
	cout<<"Digite al valor de c: ";cin>>c;
	cout<<"Digite al valor de d: ";cin>>d;
	cout<<"Digite al valor de e: ";cin>>e;
	cout<<"Digite al valor de f: ";cin>>f;
	
	resultado =(a+(b/c))/(d+(e/f));
	
	//acortamos el resultado
	
	cout.precision(2);
	
	cout<<"El resultado es: "<<resultado<<endl;
	

	
	return 0;
}
