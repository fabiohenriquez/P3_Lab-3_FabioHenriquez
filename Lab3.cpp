#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl

///METODOS
int menu();
void ejercicio1();
void ejercicio2();
void ejercicio3();


int manin(){
	char res='s';
	do{
	   switch(menu()){
		   case 1:
	           ejercicio1();
		   break;

		   case 2:
		   ejercicio2();
		   break;

		   case 3:
		   ejercicio3();
		   break;

		   default:
		   cout<<"Esta opcion no existe"<<endl;
		   break;
	   }

	   cout<<"\n Desea continuar?[S/N]?";
	   cin>>res;

	}while(res=='s' || res=='S');

	return 0;

}//fin del main

int menu(){
	int opcion=0;

	cout<<"--Menu--"<<endl<<
		"[1]. Ejercicio 1"<<endl<<
		"[2]. Ejercicio 2"<<endl<<
		"[3]. Ejercicio 3"<<endl<<
		"Ingrese una opcion:"<<endl;
	cin>>opcion;

	return opcion;

}//fin del menu


//funcion ejercicio1

void ejercicio1(){
	

}
		

	

}

