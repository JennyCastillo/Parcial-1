#include<iostream>
using namespace std;

class Estudiante{
	
	protected : 
				string codigo, nombre, apellido;
				

	protected:
				Estudiante(){
				}
				Estudiante(string cod, string nom, string ape){
					codigo= cod;
					nombre= nom;
					apellido= ape;
				}
	

	void mostrar();
	
}; 