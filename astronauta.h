#ifndef ASTRONAUTA_H
#define ASTRONAUTA_H

#include <string>
#include <iostream>
#include <list>

class astronauta{
private:
    std::string cpf;
    std::string nome;
    int idade;
    bool esta_vivo;
    bool esta_disponivel;
    int qntd_voos;
    std::list<int> voos;

public:
    astronauta(std::string cpf, std::string nome, int idade);
    ~astronauta();
    void morte();
    void voou(int cod);
    void exibir_nome();
    bool checar_status();
    bool checar_vida();
    
};

#endif