#include "Estudiante.cpp"
#include <iostream>

using namespace std;

int main() {

	string nombres, apellidos, grado, seccion;
	int carne;
	
	
	cout<<"Ingrese Carnet: ";
 	cin>>carne;
 	cout<<"Ingrese Nombre: ";
 	cin>>nombres;
 	cout<<"Ingrese Apellido: ";
 	cin>> apellidos;
	cout<<"Ingrese Grado: ";
	cin>>grado;
	cout<<"Ingrese Seccion: ";
	cin>>seccion;

	system("cls");
	Estudiante obj= Estudiante(nombres,apellidos,grado,seccion,carne);
	obj.mostrar();
	cout<<"\n"<<endl;
	
 
	
		 // modificar atributos
 		cout<<"------------------modificar-------------------"<<endl;
  		cout<<"Modificar Carnet:";
 		cin>>carne;
		obj.setCarne(carne);
 		cout<<"Modificar Nombre:";
 		cin>>nombres;
		obj.setNombres(nombres);
		cout<<"Modificar apellido:";
		cin>>apellidos;
		obj.setApellidos(apellidos);
		cout<<"Modificar Grado: ";
		cin>>grado;
		obj.setGrado(grado);
		cout<<"Modificar Seccion: ";
		cin>>seccion;
		obj.setSeccion(seccion);
		system("cls");
		obj.mostrar(); 
		
	
	
}
