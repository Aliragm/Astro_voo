#include "cadastraAstro.h"

void cadastro_astro(){
	std::string cpf;
	std::string nome;
	int idade;
	std::cout << "Digite o CPF: ";
	std::cin >> cpf;
	std::cout << "Digite o nome: ";
	std::cin >> nome;
	std::cout << "Digite a idade: ";
	std::cin >> idade;
	astronauta a(cpf, nome, idade);
}