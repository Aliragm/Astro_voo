#ifndef GERENCIADOR_H
#define GERENCIADOR_H

#include "astronauta.h"
#include "voo.h"
#include <map>

class gerenciador {
private:
	static std::map<int, astronauta*> astronautas;
	static std::list<int> voos;
	static int qntd_astros;
public:
	~gerenciador();
	void astronauta_criado(astronauta* tripulante);
	void voo_criado(voo* espaconave);
};

#endif