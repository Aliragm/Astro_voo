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

void voo::explodir() {
    this->explodiu = true;
    this->voando = false;
    for (std::list<astronauta*>::iterator it = this->tripulantes.begin(); it != this->tripulantes.end(); it++) {
        if (*it) {  
            (*it)->morte(); 
        }
    }
}

void voo::addtripulante(astronauta *tripulante) {
	this->tripulantes.push_back(tripulante);
	this->qntd_tripulantes += 1;
}

void voo::get_codigo(){
	std::cout << this->codigo;
}

int voo::retornar_codigo(){
	return this->codigo;
}

int voo::get_trip_qntd(){
	return this->qntd_tripulantes;
}

void voo::listar_tripulantes() {
    int contador = 0;
    for (std::list<astronauta*>::iterator it = tripulantes.begin(); it != tripulantes.end(); ++it) {
        contador += 1;
        std::cout << contador << " => ";
        (*it)->exibir_nome();
        std::cout << std::endl;
    }
}


void voo::tirar_tripulante(int num) {
    int contador = 0;
    for (std::list<astronauta*>::iterator it = tripulantes.begin(); it != tripulantes.end(); ++it) {
        contador += 1;
        if (num == contador) {
            it = tripulantes.erase(it);
            break; 
        }
    }
    this->qntd_tripulantes -= 1;
}

bool voo::esta_voando(){
	return this->voando;
}

void voo::voar(){
	this->voando = true;
	for (std::list<astronauta*>::iterator it = tripulantes.begin(); it != tripulantes.end(); ++it) {
		(*it)->voou(this->retornar_codigo());
	}

}

void voo::pousar(){
    this->voando = false;
    for (std::list<astronauta*>::iterator it = tripulantes.begin(); it != tripulantes.end(); ++it) {
		(*it)->voltou();
	}
}
