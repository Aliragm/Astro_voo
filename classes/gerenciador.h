#ifndef GERENCIADOR_H
#define GERENCIADOR_H

#include "astronauta.h"
#include "voo.h"
#include <map>

class gerenciador {
public:
	static std::map<int, astronauta*> astronautas;
	static std::map<int, voo*> voos;
	static int qntd_astros;
	static int qntd_voos;
	
	~gerenciador();
	void astronauta_criado(astronauta* tripulante);
	void voo_criado(voo* espaconave);
	void exibir_astros_vivos();
	void exibir_voos_aguardando();
	void exibir_voos_com_astronautas();
	bool checar_voos_com_astronautas();
};

#endif
