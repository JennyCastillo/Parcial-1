#include <iostream>
#include "Curso.cpp"
#include <stdlib.h>

using namespace std;

int main(){
	
	string cod, nom, ape, nc, est;
		int n1, n2, n3, n4, pro;
		char i;
		
		do{
		fflush(stdin);
		cout<<"Codigo del estudiante:    ";
		getline(cin,cod);
		cout<<"Nombre: ";
		getline(cin,nom);	
		cout<<"Apellido: ";
		getline(cin,ape);
		cout<<"Nombre del curso: ";
		getline(cin,nc);	
		cout<<"Nota 1: ";
		cin>>n1;
		cout<<"Nota 2: ";
		cin>>n2;
		cout<<"Nota 3: ";
		cin>>n3;
		cout<<"Nota 4: ";
		cin>>n4;
		
		system("cls");
		
		pro=(n1+n2+n3+n4)/4;
		
		if(pro>=60){
		 
		 
		  est="APROBADO";
		}
		else {
		
		  est="REPROBADO";
		  
		}
		

	Curso obj= Curso(cod, nom, ape, nc, n1, n2, n3, n4, pro, est);
	obj.mostrar();
	
	cout<<"Desea ingresar otro estudiante (s/n): ";
	cin>>i;
	system("cls");
	}while(i=='s' || i=='S');	
	
	return 0;
}