#include "cadastraVoo.h"

void cadastra_voo(){
	int codigo;
	std::cout << "Digite o codigo do voo: " << std::endl;
	std::cout << ":";
	std::cin >> codigo;
	voo a(codigo);
}