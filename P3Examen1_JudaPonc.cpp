#include <iostream>
#include "Empleado.h"
#include "Tareas.h"
#include <vector>

using namespace std;

vector<Empleado>empleados;
vector<Tareas> tareas;
int menu();
int main(int argc, char** argv) {
int option=0;
	
	while( option != 6 ) {
		switch( option = menu() ){
			case 1:{
				break;
			}
			
			case 2:{
				
				break;
			}
			
			case 3:{
				
				break;
			}
			
			case 4:{
				
				break;
			}
			
			case 5:{
				
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
