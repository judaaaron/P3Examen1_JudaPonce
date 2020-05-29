#include "Tareas.h"

Tareas::Tareas()
{
}

string Tareas:: getDescripcion(){
	return this->descripcion;
}
int Tareas:: getNivel(){
return this->nivel;
	
}
int Tareas::getCarga(){
return this->carga;
}

void Tareas::setEstado(bool estado){
	this->estado = estado;
}
void Tareas::setDescripcion(string descrip){
	this->descripcion=descrip;
}
void Tareas:: setNivel(int levell){
	this->nivel=levell;
}
void Tareas::setCarga(int charge){
	this->carga=charge;
}

Tareas::Tareas(string descripcion,int nivel,int carga){
	this->descripcion=descripcion;
	this->nivel=nivel;
	this->carga=carga;
	this->estado = true;
}

void Tareas::charge(){
	this->carga--;
}
Tareas::~Tareas()
{
}
