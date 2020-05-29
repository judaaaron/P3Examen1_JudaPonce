#include <iostream>
#include<cstdlib>
#include <ctime>
#include<iomanip>
#include "Empleado.h"
#include "Tareas.h"
#include <vector>

using namespace std;

vector<Empleado>empleados;
vector<Tareas> backlog;
int menu();
int main(int argc, char** argv) {
int option=0;
	
	while( option != 7 ) {
		switch( option = menu() ){
			case 1:{
				string nombre;
				int edad,nivel,habilidad, pereza;
				cout<<" Opcion seleccionada: Contratar Empleado "<<endl;
				cout<<" Ingrese nombre: "<<endl;
				cin>>nombre;
				cout<<" Ingrese edad: "<<endl;
				cin>>edad;
				cout<<" Ingrese nivel: "<<endl;
				cin>>nivel;
				while(nivel< 1 || nivel >3){
					cout<<" Debe de ingresar un valor entre 1 y 3 "<<endl;
					cout<<" Por favor ingrese un nuevo valor: "<<endl;
					cin>>nivel;
					
				}
				cout<<" Ingrese porcentaje de pereza: "<<endl;
				cin>>pereza;
				cout<< " Ingrese porcentaje de habilidad: "<<endl;
				cin>>habilidad;
				empleados.push_back(Empleado(nombre,edad,nivel,pereza,habilidad));
				cout<<" Empleado contratado exitosamente..."<<endl;
				cout<<endl;
				break;
			}
			
			case 2:{
				int posicion;
				bool contrato=false;
				if(empleados.size()==0){
					cout<<" No hay ninguna persona contrada hasta el momento "<<endl;
					cout<<endl;
					contrato=true;
				
				}
				if(contrato==false){
					for(int i=0; i< empleados.size(); i++){
						cout << i<<". Nombre"<< " ["<<empleados[i].getNombre()<<"], "<<"Edad"<< " ["<<empleados[i].getEdad()<<"], "<<"Nivel"<<" ["<<empleados[i].getNivel()<<"], "<<"Porcentaje de pereza"<<" ["<<empleados[i].getPereza()<<"], "<<"Porcentaje de habilidad"<<" ["<<empleados[i].getHabilidad()<<"]"<<endl;
					}
					cout<<" Seleccione posicion del empleado a despedir, Nota la lista comienza en 0: "<<endl;
					cin>>posicion;
					empleados.erase(empleados.begin() + posicion);
					cout<<" Empleado ha sido eliminado exitosamente"<<endl;
					cout<<endl;
			}
				break;
			}
			
			case 3:{
				bool contrato=false;
				if(empleados.size()==0){
					cout<<" No hay ninguna persona contrada hasta el momento "<<endl;
					cout<<endl;
					contrato=true;
				
				}
				cout<<" ***Listado de empleados***"<<endl;
				if(contrato==false){
					for(int i=0; i< empleados.size(); i++){
							cout <<i<<". Nombre"<< " ["<<empleados[i].getNombre()<<"], "<<"Edad"<< " ["<<empleados[i].getEdad()<<"], "<<"Nivel"<<" ["<<empleados[i].getNivel()<<"], "<<"Porcentaje de pereza"<<" ["<<empleados[i].getPereza()<<"], "<<"Porcentaje de habilidad"<<" ["<<empleados[i].getHabilidad()<<"]"<<endl;
					}
					
				}
				
				break;
			}
			
			case 4:{
				string descripcion;
				int nivel,carga;
				bool employers=false;
				if(empleados.size()==0){
					cout<<" No se pueden crear tareas hasta que hayan personas contratadas "<<endl;
					employers=true;
				}else{
					cout<<" Opcion seleccionada: Crear Tarea "<<endl;
					cout<<" Ingrese Descripcion: "<<endl;
					cin>> descripcion;
					cout<<" Ingrese nivel: "<<endl;
					cin>>nivel;
					while(nivel < 1 || nivel > 3){
						cout<<" Debe de ingresar un valor entre 1 y 3 "<<endl;
						cout<<" Por favor ingrese un nuevo valor: "<<endl;
						cin>>nivel;
					}
					cout<<" Ingrese carga: "<<endl;
					cin>>carga;
					while(carga<= 0){
						cout<<" La carga no debe tener valores negativos"<<endl;
						cout<<" Por favor ingrese un nuevo valor: "<<endl;
						cin>>carga;
					}
					backlog.push_back(Tareas(descripcion,nivel,carga));
					cout<<" Tareas ha sido creada exitosamente... "<<endl;
					cout<<endl;
				}
				
				
				break;
			}
			
			case 5:{
				bool homeworks=false;
				bool employers=false;
				if(empleados.size()==0){
					cout<<" No hay ninguna persona contratada hasta el momento "<<endl;
					employers=true;
				}
				if(backlog.size()==0){
					cout<<" No hay ninguna tarea creada hasta el momento "<<endl;
					cout<<endl;
					homeworks=true;
				
				}
				cout<<" ***Listado de tareas***"<<endl;
				if(homeworks==false && employers==false){
					for(int i=0; i< empleados.size(); i++){
							cout <<i<<". Descripcion"<< " ["<<backlog[i].getDescripcion()<<"], "<<"Nivel"<< " ["<<backlog[i].getNivel()<<"], "<<"Carga"<<" ["<<backlog[i].getCarga()<<"]"<<endl;
					}
					
				}
				break;
			}
			
			case 6:{
				
				break;
			}
			
			case 7:{
				cout<<" Saliendo del programa..."<<endl;
				exit(0);
				break;
			}
			
		
		}	
	}
	
	return 0;
}


int menu(){
	int opcion=0;
	while(opcion < 1 || opcion > 7){
		
		cout<<"         ***MENU*** "<<endl;
		cout<<"1. Contratar empleado"<<endl;
		cout<<"2. Despedir empleado"<<endl;
		cout<<"3. Listar empleados"<<endl;
		cout<<"4. Crear tarea"<<endl;
		cout<<"5. Listar tareas"<<endl;
		cout<<"6. Iniciar proyecto"<<endl;
		cout<<"7. Salir"<<endl;
		cout<<"Ingrese una opcion entre 1 y 7: ";
			cin>>opcion;
			cout<<endl;
			if(opcion >= 1 && opcion <= 7)
				break;
			else
				cout<<endl<<"Opcion incorrecta, elija nuevamente "<<endl;	
				
	}//Fin del ciclo while
	
	
	return opcion;
}
