#ifndef TAREAS_H
#define TAREAS_H
#include <string>

using namespace std;

class Tareas
{
	public:
		Tareas();
		string getDescripcion();
		int getNivel();
		int getCarga();
		void setDescripcion(string);
		void setNivel(int);
		void setCarga(int);
		~Tareas();
	private:
		string descripcion;
		int nivel, carga;
};

#endif
