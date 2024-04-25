#include "gerenciador.h"

std::map<int, astronauta*> gerenciador::astronautas;
std::list<int> gerenciador::voos;
int gerenciador::qntd_astros = 0;

gerenciador::~gerenciador(){
	astronautas.clear();
	voos.clear();
}

void gerenciador::astronauta_criado(astronauta* tripulante) {
    this->qntd_astros += 1;
    astronautas.insert(std::make_pair(qntd_astros, tripulante));
}

void gerenciador::voo_criado(voo* espaconave){
	voos.push_back(espaconave->get_codigo());
}