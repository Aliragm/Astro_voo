#include "astronauta.h"
#include "voo.h"
#include "cadastraAstro.h"
#include "cadastraVoo.h"
#include "logo.h"
#include "gerenciador.h"
#include "atribuir_astronauta.h"
#include "desatribuir_astronauta.h"
#include "lancar_voo.h"
#include "explodir.h"

int main(){
	gerenciador a;
	logo();
	while(true){
		int escolha = 999;
		std::cout << std::endl;
		std::cout << "Digite o que deseja fazer: " << std::endl;
		std::cout << "0 - fechar o programa" << std::endl;
		std::cout << "1 - cadastro astronauta" << std::endl;
		std::cout << "2 - criar voo" << std::endl;
		std::cout << "3 - atribuir astronauta a voo" << std::endl;
		std::cout << "4 - desatribuir astronauta a voo" << std::endl;
		std::cout << "5 - lancar voo" << std::endl;
		std::cout << "6 - explodir voo" << std::endl;
		std::cin >> escolha;
		std::cout << std::endl;
		switch(escolha){
		case 0: return 0;
		case 1: cadastro_astro(a);std::cin.ignore();break;
		case 2: cadastro_voo(a);std::cin.ignore();break;
		case 3: atribuicao(a);break;
		case 4: desatribuir(a);break;
		case 5: lancar_voo(a);break;
		case 6: explodira(a); break;
		}
	}

	return 0;
}
