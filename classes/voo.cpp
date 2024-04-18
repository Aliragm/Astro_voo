#include "voo.h"

voo::voo(int codigo){
	this->voando = false;
	this->explodiu = false;
	this->codigo = codigo;
	this->qntd_tripulantes = 0;
}

voo::~voo(){
	for(int i = 0; i < tripulantes.size()){
		tripulantes.pop_back();
	}
}

void voo::explodir(){
	this->explodiu = true;
	this->voando = false;
}

void voo::addtripulante(astronauta *tripulante) {
	this->tripulantes.push_back(tripulante);
}