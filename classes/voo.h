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
};

#endif
