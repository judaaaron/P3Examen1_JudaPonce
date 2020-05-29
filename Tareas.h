#ifndef TAREAS_H
#define TAREAS_H
#include <string>

using namespace std;

class Tareas
{
	public:
		Tareas();
		Tareas(string,int,int);
		string getDescripcion();
		int getNivel();
		int getCarga();
		void setEstado(bool);
		void setDescripcion(string);
		void setNivel(int);
		void setCarga(int);
		void charge();
		
		~Tareas();
	private:
		string descripcion;
		int nivel, carga;
		bool estado;
};

#endif
