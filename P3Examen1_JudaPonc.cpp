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
	//Empleados predefinidos
	empleados.push_back(Empleado("Suazo",35,3,95,25));
	empleados.push_back(Empleado("Manrique",14,2,77,40));
	empleados.push_back(Empleado("Paulina",50,1,70,50));
	empleados.push_back(Empleado("Camilo",20,2,90,10));
	empleados.push_back(Empleado("Juda",21,2,80,20));
	empleados.push_back(Empleado("Guillermo",18,3,10,60));
	empleados.push_back(Empleado("Bendeck",19,1,35,49));
	empleados.push_back(Empleado("Marcela",25,2,80,20));
	empleados.push_back(Empleado("Lucia",28,1,70,30));
	empleados.push_back(Empleado("Osman",45,3,15,48));
	
	//Tareas predefinidas
	backlog.push_back(Tareas("Ecuaciones",2,10));
	backlog.push_back(Tareas("Deportes",1,2));
	backlog.push_back(Tareas("Programacion",3,4));
	backlog.push_back(Tareas("Algebra",1,10));
	backlog.push_back(Tareas("Fisica",2,1));
	backlog.push_back(Tareas("Ofimatica",1,6));
	backlog.push_back(Tareas("Lenguages",3,4));
	backlog.push_back(Tareas("Base de datos",1,9));
	backlog.push_back(Tareas("Estructuras",2,7));
	backlog.push_back(Tareas("Calculo",3,11));
	
	
int option=0;
	
	while( option != 7 ) {
		switch( option = menu() ){
			case 1:{
				string nombre;
				int edad,nivel,habilidad, pereza;
				cout<<"Opcion seleccionada: ***Contratar Empleado*** "<<endl;
				cout<<"Ingrese nombre: "<<endl;
				cin>>nombre;
				cout<<"Ingrese edad: "<<endl;
				cin>>edad;
				while(edad<=0){
					cout<<" Edad no permitida"<<endl;
					cout<<"Ingrese una nueva edad"<<endl;
					cin>>edad;
				}
				cout<<"Ingrese nivel: "<<endl;
				cin>>nivel;
				while(nivel< 1 || nivel >3){
					cout<<"Debe de ingresar un valor entre 1 y 3 "<<endl;
					cout<<"Por favor ingrese un nuevo valor: "<<endl;
					cin>>nivel;
					
				}
				cout<<"Ingrese porcentaje de pereza: "<<endl;
				cin>>pereza;
				while(pereza< 0){
					cout<<" Numero no permitido para porcentaje"<<endl;
					cout<<" Ingrese un nuevo porcentaje de pereza: "<<endl;
					cin>>pereza;
				}
				cout<<"Ingrese porcentaje de habilidad: "<<endl;
				cin>>habilidad;
				while(habilidad< 0){
					cout<<" Numero no permitido para porcentaje"<<endl;
					cout<<" Ingrese un nuevo porcentaje de habilidad: "<<endl;
					cin>>habilidad;
				}
				empleados.push_back(Empleado(nombre,edad,nivel,pereza,habilidad));
				cout<<"Empleado contratado exitosamente..."<<endl;
				cout<<endl;
				break;
			}
			
			case 2:{
				cout<<"Opcion seleccionada: ***Despedir Empleado*** "<<endl;
				int posicion;
				bool contrato=false;
				if(empleados.size()==0){
					cout<<"No hay ninguna persona contrada hasta el momento "<<endl;
					cout<<endl;
					contrato=true;
				
				}
				if(contrato==false){
					for(int i=0; i< empleados.size(); i++){
						cout << i<<". Nombre"<< " ["<<empleados[i].getNombre()<<"], "<<"Edad"<< " ["<<empleados[i].getEdad()<<"], "<<"Nivel"<<" ["<<empleados[i].getNivel()<<"], "<<"Porcentaje de pereza"<<" ["<<empleados[i].getPereza()<<"], "<<"Porcentaje de habilidad"<<" ["<<empleados[i].getHabilidad()<<"]"<<endl;
					}
					cout<<"Seleccione posicion del empleado a despedir, Nota la lista comienza en 0: "<<endl;
					cin>>posicion;
					empleados.erase(empleados.begin() + posicion);
					cout<<"Empleado ha sido eliminado exitosamente"<<endl;
					cout<<endl;
			}
				break;
			}
			
			case 3:{
				cout<<"Opcion seleccionada: ***Listar Empleados*** "<<endl;
				bool contrato=false;
				if(empleados.size()==0){
					cout<<"No hay ninguna persona contrada hasta el momento "<<endl;
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
				cout<<"Opcion seleccionada: ***Crear Tareas*** "<<endl;
				string descripcion;
				int nivel,carga;
				bool employers=false;
				if(empleados.size()==0){
					cout<<"No se pueden crear tareas hasta que hayan personas contratadas "<<endl;
					employers=true;
				}else{
					cout<<"Ingrese Descripcion: "<<endl;
					cin>> descripcion;
					cout<<"Ingrese nivel: "<<endl;
					cin>>nivel;
					while(nivel < 1 || nivel > 3){
						cout<<"Debe de ingresar un valor entre 1 y 3 "<<endl;
						cout<<"Por favor ingrese un nuevo valor: "<<endl;
						cin>>nivel;
					}
					cout<<"Ingrese carga: "<<endl;
					cin>>carga;
					while(carga<= 0){
						cout<<"La carga no debe tener valores negativos"<<endl;
						cout<<"Por favor ingrese un nuevo valor: "<<endl;
						cin>>carga;
					}
					backlog.push_back(Tareas(descripcion,nivel,carga));
					cout<<" Tareas ha sido creada exitosamente... "<<endl;
					cout<<endl;
				}
				
				
				break;
			}
			
			case 5:{
				cout<<"Opcion seleccionada: ***Listar Tareas*** "<<endl;
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
				cout<<" Nota: El listado comienza en 0"<<endl;
				if(homeworks==false && employers==false){
					for(int i=0; i< backlog.size(); i++){
							cout <<i<<". Descripcion"<< " ["<<backlog[i].getDescripcion()<<"], "<<"Nivel"<< " ["<<backlog[i].getNivel()<<"], "<<"Carga"<<" ["<<backlog[i].getCarga()<<"]"<<endl;
					}
					
				}
				break;
			}
			
			case 6:{
				cout<<"Opcion seleccionada: ***Iniciar proyecto*** "<<endl;
				bool permiso = false;
				if(empleados.size()==0 || backlog.size()==0){
					cout<<"No hay empleados contrados al momento o no hay tareas creadas al momento"<<endl;
					break;
				}else{
						bool simulacion = false;
				int formula=0, dias ,logrado = 0,ejecucionTarea = 0, flojeras = 0 , failed = 0,seleccion;
				int porcenPereza, porcenHabilidad;
				for(int i=0; i< backlog.size(); i++){
					formula+=backlog[i].getCarga();
				
				}
				dias=formula+(formula*0.20);	
				while(true){
				
					cout<<"Dias para terminar el proyecto: "<<dias<<endl;
					cout<<endl;
					cout<<" Ingrese una opcion "<<endl;
					cout<<" 1. Siguiente dia "<<endl;
					cout<<" 2. Generar reporte "<<endl;
					cout<<" 3. Salir"<<endl;
					cin>>seleccion;
					switch(seleccion){
						case 1:{
							logrado = 0;
							ejecucionTarea = 0; 
							flojeras = 0; 
							failed = 0;
							for(int controlEmpleados=0; controlEmpleados< empleados.size(); controlEmpleados++){
								for(int controlTareas=0; controlTareas< backlog.size(); controlTareas++){
									if(empleados[controlEmpleados].getNivel()>= backlog[controlEmpleados].getNivel()){
										int random =  rand() % 100;
										backlog[controlEmpleados].setEstado(false);
										if (empleados[controlEmpleados].getPereza() < random){
											if (empleados[controlEmpleados].getHabilidad() >= random){
												logrado++;
												backlog[controlEmpleados].charge();
												if (backlog[controlEmpleados].getCarga() == 0){
													backlog.erase(backlog.begin()+controlTareas);	
													}
												}else {
												failed++;
											}
										}else {
											flojeras++;
									}
										ejecucionTarea++;
										break;
								}
							}		
						}
						cout << endl;
						dias--;
						break;
						}
					
						case 2:{
							cout<<"Actualizando REPORTE: "<<endl;
							cout<<"Cantidad de tareas en backlog restantes: "<<backlog.size()<<endl;
							cout<<"Cantidad de tareas en progreso: "<<ejecucionTarea<<endl;
							cout<<"Cantidad de empleados perezosos: "<<flojeras<<endl;
							cout<<"Cantidad de empleados que fallaron: "<<failed<<endl;
							cout<<"Cantidad de empleados que lograron el dia: "<<logrado<<endl;
							cout<<endl;
						
						break;
						}
						
						case3:{
							exit(0);
							break;
						}
					
					}
				}
			}
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
