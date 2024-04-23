#include "astronauta.h"
#include "voo.h"
#include "cadastraAstro.h"
#include "cadastraVoo.h"
#include "logo.h"

int main(){
	logo();
	while(true){
		int escolha = 0;
		std::cout << "Digite o que deseja fazer: " << std::endl;
		std::cout << "0 - fechar o programa" << std::endl;
		std::cout << "1 - cadastro astronauta" << std::endl;
		std::cout << "2 - criar voo" << std::endl;
		std::cout << ":" << std::endl;
		std::cin >> escolha;
		switch(escolha){
		case 0: return 0;
		case 1: cadastro_astro();
		case 2: cadastra_voo();
		}
	}

	return 0;
}