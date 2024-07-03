#include "finalizar_voo.h"

void finalizar(gerenciador &a){
    a.exibir_voos_voando();
    int voo_escolhido;
    std::cout << "Escolha um voo para finalizar com sucesso: ";
    std::cin >> voo_escolhido;
    voo* b = a.voos[voo_escolhido];
    a.finalizar_voo(b, voo_escolhido);
    std::cout << "Voo pousou. " << std::endl;
}