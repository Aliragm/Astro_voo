#include "atribuir_astronauta.h"

void atribuicao(gerenciador &a) {
	if(a.qntd_astros == 0){
		std::cout << "Não há astronautas disponíveis" << std::endl;
		return;
	}
	if(a.qntd_voos == 0){
    	std::cout << "Não há voos disponíveis" << std::endl;
		return;
    }
    int nome_escolhido;
    int voo_escolhido;
    std::cout << "Estes são os voos disponíveis. Escolha (digite o indice): " << std::endl;
    a.exibir_voos_aguardando();
    std::cout << "\n:";
    std::cin >> voo_escolhido;
    voo* b = a.voos[voo_escolhido];
    std::cout << "Estes são os astronautas disponíveis. Escolha (digite o índice): " << std::endl;
    a.exibir_astros_vivos();
    std::cout << ":";
    std::cin >> nome_escolhido;
    b->addtripulante(a.astronautas[nome_escolhido]);
}
