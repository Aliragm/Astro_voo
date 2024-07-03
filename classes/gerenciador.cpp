#include "gerenciador.h"

std::map<int, astronauta*> gerenciador::astronautas;
std::map<int, voo*> gerenciador::voos;
int gerenciador::qntd_astros = 0;
int gerenciador::qntd_voos = 0;
std::map<int, astronauta*> gerenciador::astronautas_mortos;
std::map<int, voo*> gerenciador::voos_destruidos;
int gerenciador::qntd_astros_mortos = 0;
int gerenciador::qntd_voos_destruidos = 0;
std::map<int, voo*> gerenciador::voos_finalizados;
int gerenciador::qntd_voos_finalizados = 0;


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
    	if(it->second->checar_status() == false){
    		continue;
    	}
        std::cout << it->first << " => ";
        it->second->exibir_nome();
    }
}

void gerenciador::exibir_voos_aguardando(){
	for (std::map<int, voo*>::iterator it = voos.begin(); it != voos.end(); it++){
		if(it->second->esta_voando() == true){
			continue;
		}
        std::cout << it->first << " => ";
        it->second->get_codigo();
        std::cout << std::endl;
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

bool gerenciador::exibir_voos_voando(){
    int a = 0;
	for (std::map<int, voo*>::iterator it = voos.begin(); it != voos.end(); it++){
		if(it->second->esta_voando() == true && it->second->get_trip_qntd() > 0){
			std::cout << it->first << " => ";
        	it->second->get_codigo();
        	std::cout << std::endl;
            a += 1;
		}
		else{
			continue;
		}
    }
    if(a == 0){
        std::cout << "Não há voos voando." << std::endl;
        return false;
    }
    else{
        return true;
    }
}

    void gerenciador::explodir_voo(voo* espaconave, int voo_escolhido) {
    espaconave->explodir();
    
    this->qntd_voos_destruidos += 1;
    this->qntd_voos -= 1;

    std::map<int, voo*>::iterator voo_explodido = this->voos.find(voo_escolhido);
    if (voo_explodido != this->voos.end()) {
        this->voos_destruidos.insert(std::make_pair(voo_escolhido, voo_explodido->second));
        this->voos.erase(voo_explodido);
    }

    for (std::map<int, astronauta*>::iterator it = this->astronautas.begin(); it != this->astronautas.end();) {
        if (!it->second->checar_vida()) {
            this->qntd_astros_mortos += 1;
            this->astronautas_mortos.insert(std::make_pair(qntd_astros_mortos, it->second));
            std::map<int, astronauta*>::iterator temp = it;
            ++it;
            this->astronautas.erase(temp);
        } else {
            ++it;
        }
    }
}

void gerenciador::finalizar_voo(voo* espaconave, int voo_escolhido){
    espaconave->pousar();

    this->qntd_voos_finalizados += 1;
    this->qntd_voos -= 1;

    std::map<int, voo*>::iterator voo_atual = this->voos.find(voo_escolhido);
    if (voo_atual != this->voos.end()) {
        this->voos_finalizados.insert(std::make_pair(voo_escolhido, voo_atual->second));
        this->voos.erase(voo_atual);
    }
}

