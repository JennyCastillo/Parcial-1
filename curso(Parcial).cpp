#include<iostream>
#include "Estudiante(Parcial).cpp"
using namespace std;

class Curso: Estudiante {
	
	protected: string ncurso, mensaje;
				int nota1, nota2, nota3, nota4, promedio; 
				
	public:
	Curso(){
	}
	
	Curso(string cod, string nom, string ape, string nc, int n1, int n2, int n3, int n4, int pro, string mens):Estudiante(cod, nom,ape){
		ncurso=nc;
		nota1=n1;
		nota2=n2;
		nota3=n3;
		nota4=n4;
		promedio=pro;
		mensaje=mens;
		
	}
	
	void setCodigo(string cod){codigo = cod;	}
	void setNombre(string nom){nombre = nom;	}
	void setApellido(string ape){apellido = ape;	}
	void setNcurso(string nc){ncurso = nc;	}
	void setNota1(int n1){nota1 = n1;	}
	void setNota2(int n2){nota2 = n2;	}
	void setNota3(int n3){nota3 = n3;	}
	void setNota4(int n4){nota4 = n4;	}
	void setPromedio(int pro){promedio=pro;	}
	void setMensaje(string mens){mensaje=mens;	}

	
	string getCodigo(){return codigo; }
	string getNombre(){return nombre; }
	string getApellido(){return apellido; }
	string getNcurso(){return ncurso; }
	int getNota1(){ return nota1;}
	int getNota2(){ return nota2;}
	int getNota3(){ return nota3;}
	int getNota4(){ return nota4;}
	int getPromedio(){return promedio;}
	string getMensaje(){return mensaje;}
	
	
	void mostrar(){
		cout<<"Codigo:"<<codigo<<endl;
		cout<<"Nombre Completo: "<<nombre<<" "<<apellido<<endl;
		cout<<"Nombre del curso: "<<ncurso<<endl;
		cout<<"Nota 1: "<<nota1<<endl;
		cout<<"Nota 2: "<<nota2<<endl;
		cout<<"Nota 3: "<<nota3<<endl;
		cout<<"Nota 4: "<<nota4<<endl;
		cout<<"promedio: "<<promedio<<endl;
		cout<<"  "<<mensaje<<endl;
		
		system ("pause");
		system("cls");
	}
	
	
};