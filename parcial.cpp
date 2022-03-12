#include <iostream>
using namespace std;
main(){
		 string nombre,apellido,curso,codigo;
		 int n1=0,n2=0,n3=0,n4=0;
		 char continuar;
		do{
			fflush(stdin);
			
		cout<<"Ingrese el Codigo:";
        cin>>codigo;
		cout<<"Ingrese el Nombre:";
    	cin>>nombre; 
			
		cout<<"Ingrese el Apellido:";
		cin>>apellido;
		
		cout<<"Ingrese el Curso:";
		cin>>curso;	
		float promedio =0;
		string mensaje="";
		cout<<"Ingrese Nota1:";
		cin>>n1;
		cout<<"Ingrese Nota2:";
		cin>>n2;
		cout<<"Ingrese Nota3:";
		cin>>n3;
		cout<<"Ingrese Nota4:";
		cin>>n4;
		promedio = (n1+n2+n3+n4)/4;
		mensaje = promedio >60 ?"Aprabado" : "Reprobado";
		cout<<"El Promedio es: "<<promedio<<" Por lo tanto esta "<<mensaje<<endl;
		cout<<" **Favor ingresar un numero para seguir** ";
		cin>>promedio;
		cout<<"Desea Agregar otro Nombre s/n : ";
		cin>>continuar;
		} while((continuar=='s') || (continuar=='S') );
		
}