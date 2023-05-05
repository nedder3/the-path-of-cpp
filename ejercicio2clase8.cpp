//ingresar cuatro notas y calcular el promedio

#include<iostream>

using namespace std;

int main (){
	int n1,n2,n3,n4;
	float promedio;
	
	cout<<"Digite el valor de nota 1 : ";cin>>n1;
	cout<<"Digite el valor de nota 2 : ";cin>>n2;
	cout<<"Digite el valor de nota 3 : ";cin>>n3;
	cout<<"Digite el valor de nota 4 : ";cin>>n4;
	
	
	promedio = (n1+n2+n3+n4)/4;




	cout<<"\nLa nota final del alumno es : "<<promedio<<endl;

	
	
	return 0;
}
