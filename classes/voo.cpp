#include "voo.h"

voo::voo(int codigo){
	this->voando = false;
	this->explodiu = false;
	this->codigo = codigo;
	this->qntd_tripulantes = 0;
}

voo::~voo(){
	tripulantes.clear();
}

void voo::explodir(){
	this->explodiu = true;
	this->voando = false;
}

void voo::addtripulante(astronauta *tripulante) {
	this->tripulantes.push_back(tripulante);
}

int voo::get_codigo(){
	return this->codigo;
}
