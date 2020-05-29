#include "Empleado.h"

Empleado::Empleado()
{
}
string Empleado::getNombre(){
	return this->nombre;
	
}
int Empleado:: getEdad(){
	return this->edad;
}
int Empleado:: getNivel(){
	return this->nivel;
}
int Empleado::getHabilidad(){
	return this->habilidad;
}
int  Empleado::getPereza(){
	return this->pereza;
	
}
void Empleado::setNombre(string name){
	this->nombre=name;
}
void Empleado::setEdad(int edaad){
	this->edad=edaad;
}
void Empleado::setNivel(int level){
	this->nivel=level;
}
void Empleado::setHabilidad(int skill){
	this->habilidad=skill;
	
}
void Empleado::setPereza(int flojera){
this->pereza=flojera;	
}

Empleado::Empleado(string nombre,int edad,int nivel, int pereza, int habilidad){
this->nombre=nombre;
this->edad=edad;
this->nivel=nivel;
this->pereza=pereza;
this->habilidad=habilidad;
}

Empleado::~Empleado()
{
}
