#ifndef GERENCIADOR_H
#define GERENCIADOR_H

#include "astronauta.h"
#include "voo.h"
#include <map>

class gerenciador {
public:
	static std::map<int, astronauta*> astronautas;
	static std::map<int, voo*> voos;
	static std::map<int, astronauta*> astronautas_mortos;
	static std::map<int, voo*> voos_destruidos;
	static int qntd_astros;
	static int qntd_voos;
	static int qntd_astros_mortos;
	static int qntd_voos_destruidos;
	
	~gerenciador();
	void astronauta_criado(astronauta* tripulante);
	void voo_criado(voo* espaconave);
	void exibir_astros_vivos();
	void exibir_voos_aguardando();
	void exibir_voos_com_astronautas();
	bool checar_voos_com_astronautas();
	void exibir_voos_voando();
	void voo_destruido(voo* espaconave);
	void astronauta_morto(astronauta* tripulante);
	void explodir_voo(voo* espaconave, int voo_escolhido);
};

#endif