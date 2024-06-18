#include "gerenciador.h"

std::map<int, astronauta*> gerenciador::astronautas;
std::map<int, voo*> gerenciador::voos;
int gerenciador::qntd_astros = 0;
int gerenciador::qntd_voos = 0;

gerenciador::~gerenciador() {
    for (std::map<int, astronauta*>::iterator it = astronautas.begin(); it != astronautas.end(); it++){
        delete it->second;
    }
    astronautas.clear();
    for (std::map<int, voo*>::iterator it = voos.begin(); it != voos.end(); it++){
        delete it->second;
    }
    voos.clear();
}

void gerenciador::astronauta_criado(astronauta* tripulante){
    this->qntd_astros += 1;
    astronautas.insert(std::make_pair(qntd_astros, tripulante));
}

void gerenciador::voo_criado(voo* espaconave){
	this->qntd_voos += 1;
    voos.insert(std::make_pair(qntd_voos, espaconave));
}

void gerenciador::exibir_astros_vivos(){
    for (std::map<int, astronauta*>::iterator it = astronautas.begin(); it != astronautas.end(); it++){
        std::cout << it->first << " => ";
        it->second->exibir_nome();
    }
}

void gerenciador::exibir_voos_aguardando(){
	for (std::map<int, voo*>::iterator it = voos.begin(); it != voos.end(); it++){
        std::cout << it->first << " => ";
        it->second->get_codigo();
    }
}

void gerenciador::exibir_voos_com_astronautas(){
    for (std::map<int, voo*>::iterator it = voos.begin(); it != voos.end(); ++it) {
        if(it->second->get_trip_qntd() > 0) {
            std::cout << it->first << " => ";
            it->second->get_codigo();
            std::cout << std::endl;
        }
    }
}

bool gerenciador::checar_voos_com_astronautas(){
    for (std::map<int, voo*>::iterator it = voos.begin(); it != voos.end(); ++it) {
        if(it->second->get_trip_qntd() > 0) {
            return true;
        }
    }
    return false;
}
