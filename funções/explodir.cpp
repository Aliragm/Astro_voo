#include "explodir.h"

void explodira(gerenciador &a){
	int voo_escolhido;
	std::cout << "os voos voando são os seguintes. Escolha (digite o indice): " << std::endl;
	bool rumo = a.exibir_voos_voando();
	if(rumo == true){
		std::cout << "\n:";
	    std::cin >> voo_escolhido;
	    voo* b = a.voos[voo_escolhido];
	    a.explodir_voo(b, voo_escolhido);
	}
	else{
		return;
	}
}
