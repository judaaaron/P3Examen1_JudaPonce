#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>

using namespace std;

class Empleado
{
	public:
		Empleado();
		string getNombre();
		int getEdad();
		int getNivel();
		int getHabilidad();
		int getPereza();
		void setNombre(string);
		void setEdad(int);
		void setNivel(int);
		void setHabilidad(int);
		void setPereza(int);
		~Empleado();
	private:
		string nombre;
		int edad, nivel, habilidad, pereza;
};

#endif
