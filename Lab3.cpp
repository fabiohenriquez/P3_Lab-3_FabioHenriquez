#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


using std::string;
using std::cin;
using std::cout;
using std::endl;

///METODOS
int menu();
void ejercicio1();
void ejercicio2();
void ejercicio3();
void imprimirVector(int* arreglo,int size);
void clearArray(int* arreglo);
void ordenamiento(int* arreglo,int x ,int z, int y);
void ordenamiento_final(int*arreglo, int x, int y);

//using srand (time(NULL));


int main(){
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
		
void ejercicio2(){
	string polinomio;
	cout<<"Ingrese el polinomio"<<endl;
	cin>>polinomio;


	int a, b, c;
	string a_1;
	string b_1;
	string c_1;

	int posicion1=0;
	int centi = 0;
	int posicion2;
	double x;

	for(int i=0; i<polinomio.length();i++){

		if((polinomio[i]=='x' || polinomio[i]=='X')&&(centi==0)){
			posicion1 = i;
			centi++;
		}else if ((polinomio[i]=='x' || polinomio[i]=='X')&&(centi==1)){
			posicion2 = i;
			centi++;
		}
	}

	for(int j=0;j<posicion1;j++){
	   a_1 +=polinomio[j];

	}

	for(int j=posicion1 + 3;j<posicion2;j++){
		b_1 +=polinomio[j];

	}
	for(int j=posicion2+1;j<polinomio.length();j++){

		c_1 +=polinomio[j];

	}

	//funciones 
	a = atoi(a_1.c_str());
	b = atoi(b_1.c_str());
	c = atoi(c_1.c_str());

	int cuadrado = pow(b,2);
	int sqr = cuadrado-(4*a*c);
	if(sqr<0){
		cout<<"Su respuesta tiende a numeros imaginarios"<<endl;
	}else{
		x = -b+sqrt(sqr);

		cout<< "(x + "<<x/2*a<<")(x - "<<x/2*a<<")"<<endl;
	}


	/*string delimitador_cuadrado = "X^2";
	string delimitador_cuadrado_2 = "x^2";
	string delimitador_1 = "X";
	String delimitador_1_2 = "x";
	string 
	

	char a;
	char b;
	char c;
	

	a = polinomio.spli('x')[0];
	b= polinomio.split('x')[1];
	c = polinomio.split('x')[2];

        

	cout<<"a : "<<a<<endl;
	cout<<"b : "<<b<<endl;
	cout<<"c : "<<c<<endl;
		
	
*/




}

void ejercicio3(){

	int size=0;
        cout<<"Ingrese el tamaño del arreglo"<<endl;
	cin>>size;

	int vector[size];
	int numero=0;
	
	srand(time(NULL));

	for(int i=0;i<size;i++){
	
		numero = rand()% 100 + 1;
		vector[i] = numero;
		//numero = numero + rand() % 100 +1;
	
	}

	int c = sizeof(vector)/sizeof(vector[0]);	
	imprimirVector(vector,c);

	/*if(size == 0 || size ==1){
          cout<<" "<<endl;
	  imprimirVector(vector,size);
	}*/

	ordenamiento_final(vector,0, c-1);

	imprimirVector(vector,c);



}


void imprimirVector(int*vector, int size){
	for(int i= 0;i<size;i++){
		cout<<vector[i]<<" ";

	}
	cout<<" "<<endl; 
}

void clearVector(int*Array){
	delete[] Array;
	Array=NULL;
}

void ordenamiento(int* arreglo, int x, int z, int y){
	
	int i;
	int j;

	int k;

	int n1 = z-x+1;
	int n2 = y-z;

	int temporal [n1];
	int temporal_2 [n2];

	for(i=0;i<n1;i++)
	   temporal[i] = arreglo[x+i];
	

	for(j=0;j<n2;j++)
	   temporal_2[j] = arreglo[z+1+j]; 
	
	
	i =0;
	j=0;
	k=x;

	while(i<n1&& j<n2){

		if(temporal[i]<= temporal_2[j]){
			arreglo[k] = temporal[i];
			i++;
		}else{

		 arreglo[k] = temporal_2[j];
		 j++;

		}
		k++;

	}

	while(i<n1){
		arreglo[k] = temporal[i];
		i++;
		k++;
	}

	while(j<n2){
	 arreglo[k] = temporal_2[j];
	 j++;
	 k++;

	}


	}


         


void ordenamiento_final(int*arreglo, int l, int r){
	if(l<r){
	int m = l +(r-l)/2;

	ordenamiento_final(arreglo,l,m);

	ordenamiento_final(arreglo,m+1,r);

	ordenamiento(arreglo,l,m,r);




	}

}



