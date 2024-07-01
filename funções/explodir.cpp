#include "explodir.h"

void explodira(gerenciador &a){
	int voo_escolhido;
	std::cout << "os voos voando são os seguintes. Escolha (digite o indice): " << std::endl;
	a.exibir_voos_voando();
	std::cout << "\n:";
    std::cin >> voo_escolhido;
    voo* b = a.voos[voo_escolhido];
    a.explodir_voo(b, voo_escolhido);
}