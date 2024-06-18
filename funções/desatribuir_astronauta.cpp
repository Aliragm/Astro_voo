#include "desatribuir_astronauta.h"

void desatribuir(gerenciador &a){
    if(a.checar_voos_com_astronautas() == false){
        std::cout << "não há voos com astronautas" << std::endl;
        return;
    }
	int nome_escolhido;
    int voo_escolhido;
    std::cout << "Estes são os voos que já tem astronautas. Escolha (digite o indice): " << std::endl;
    a.exibir_voos_com_astronautas();
    std::cout << "\n:";
    std::cin >> voo_escolhido;
    voo* b = a.voos[voo_escolhido];
    std::cout << "Estes são os astronautas disponíveis. Escolha (digite o índice): " << std::endl;
    b->listar_tripulantes();
    std::cout << ":";
    std::cin >> nome_escolhido;
    b->tirar_tripulante(nome_escolhido);
}