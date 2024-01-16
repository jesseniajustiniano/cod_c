#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char *argv[]) {
	char caracter;
	cout<<"Ingrese una letra";
	cin>>caracter;
	//Buscar la funcion para convertir en minusculas un caracter
	caracter=tolower(caracter)
	switch(caracter)
	{
	case 'a': 
	case 'e': 
	case 'i': 
	case 'o': 
	case 'u': cout<<"Es vocal";
	break;
	default: cout<<"No es una vocal";
	}
	return 0;
}

