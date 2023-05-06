/*. escribir un programa que Lea de la entrada estandar el precio de un producto y muestre 
en la salida estandar el precio del producto al aplicarle IVA.*/

#include<iostream>

using namespace std;

int main(){
	int precioProducto, iva ;
	
	iva = 21;
	
	cout <<"ingrese el precio del producto : "; cin>>precioProducto;

	precioProducto= precioProducto+(precioProducto*21/100);
		
	
	
	cout<<"\nEl precio del producto con iva es : "<<precioProducto<<endl;

}
