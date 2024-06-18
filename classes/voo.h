#ifndef VOO_H
#define VOO_H

#include "astronauta.h"
#include <list>

class voo {
private:
    bool voando;
    bool explodiu;
    int codigo;
    int qntd_tripulantes;
    std::list<astronauta*> tripulantes;

public:
    voo(int codigo);
    ~voo();
    void explodir();
    void addtripulante(astronauta *tripulante);
    void get_codigo();
    int get_trip_qntd();
    void listar_tripulantes();
    void tirar_tripulante(int num);
};

#endif
