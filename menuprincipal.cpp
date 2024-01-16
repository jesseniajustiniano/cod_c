#include <iostream>
using namespace std;
/*
datos de inicio del programa

menu 
1- opcion uno 
2-opcion dos 
0- salir 
*/
//Lo mismo pero DO WHILE
int main(int argc, char *argv[]) {
	int opcion;
	opcion=1;
	do {
		cout <<"MENU PRINCIPAL";
		cout<<"1- opcion uno";
		cout<<"2- opciondos";
		cout<<"0- salir";
		cin>>opcion;
		switch(opcion){
		case 1: cout<<"Eligio la opcion 1"<<endl;
		break;
		case 2: cout<<"Eligio la opcion 2:"<<endl;
		break 
		case 0: cout<<"Eligio la opcion 0 salir:"<<endl;
		break
		default:cout<<"No escogio una opcion correcta"<<endl;
		}
	}while(opcion !=0);
	return 0;
}

