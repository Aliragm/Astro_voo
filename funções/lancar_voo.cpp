#include "lancar_voo.h"

void lancar_voo(gerenciador &a){
	if(a.checar_voos_com_astronautas() == false){
        std::cout << "não há voos com astronautas" << std::endl;
        return;
    }
    int voo_escolhido;
    std::cout << "Estes são os voos que já tem astronautas. Escolha (digite o indice): " << std::endl;
    a.exibir_voos_com_astronautas();
    std::cout << "\n:";
    std::cin >> voo_escolhido;
    voo* b = a.voos[voo_escolhido];
    b->voar();
}