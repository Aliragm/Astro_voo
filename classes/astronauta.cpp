#include "astronauta.h"

astronauta::astronauta(std::string cpf, std::string nome, int idade){
	this->cpf = cpf;
	this->nome = nome;
	this->idade = idade;
	this->esta_vivo = true;
	this->esta_disponivel = true;
	this->qntd_voos = 0;
}

astronauta::~astronauta() {
	voos.clear();
}

void astronauta::morte(){
	this->esta_vivo = false;
	this->esta_disponivel = false;
}

void astronauta::voou(int cod) {
    this->voos.push_back(cod);
}
