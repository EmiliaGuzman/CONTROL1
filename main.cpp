#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

///Programa que vea el numero de digitos ingresado
int digitos(int n){
	if(n<10){
		return 1;}
	else
		return(1+digitos(n/10));
}
bool palindromo(int n){
	int digit=digitos(n);
	int base10=1,aux=10;
	for(int i=digit; i>1; i--){
		base=base10*10;}
	while(base10>0){
		aux=n/base10;
		if(aux!=n%10){
			return false;}
		n=aux*base10;
		base10/=100;
		n=n/10;}
	return true;
}

///DE BINARIO A DECIMAL

int binADec(int num){
	int digitos=0;
	int aux=num;
	while(aux>0){
		aux=aux/10;
		++digitos;
	}
	int aux2;
	int mult=1;
	int suma=0;
	for(int i=0; digitos >1; i++){
		aux2=num*10;
		suma=suma+aux2*mult;
		mult=mult*2;
		num=num/10;
	}
	return suma;
}


///DE DECIMAL A BINARIO

decimalABinario(int n){
	int v=0;
	int b=1;
	while(n!=0){
		v+=(n%2)*b;
		b*=10;
		n/=2;
	}
	return v;
}

