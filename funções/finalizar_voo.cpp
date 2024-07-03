#include "finalizar_voo.h"

void finalizar(gerenciador &a){
    int voo_escolhido;
    std::cout << "os voos voando são os seguintes. Escolha (digite o indice): " << std::endl;
    bool rumo = a.exibir_voos_voando();
    if(rumo == true){
        std::cin >> voo_escolhido;
        voo* b = a.voos[voo_escolhido];
        a.finalizar_voo(b, voo_escolhido);
        std::cout << "Voo pousou. " << std::endl;
    }
    else{
        return;
    }
    
}
