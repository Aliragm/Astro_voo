#include "cadastraVoo.h"

void cadastro_voo(gerenciador a){
	int codigo;
	std::cout << "Digite o codigo do voo: " << std::endl;
	std::cout << ":";
	std::cin >> codigo;
	voo b(codigo);
	a.voo_criado(&b);
}
