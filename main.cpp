#include <iostream>
#include "BrazoRobotico.h"

int main() {

    BrazoRobotico brazo(0.0, 0.0, 0.0);

    std::cout << "Posicion inicial: (" << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")\n";

    brazo.mover(1.5, 2.0, 3.0);

    std::cout << "Nueva posicion: (" << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")\n";

    brazo.coger();

    if (brazo.estaSujetando()) {
        std::cout << "El brazo esta sujetando un objeto.\n";
    }else{
    	std::cout << "El barzo esta no esta sujetando ningún objeto.\n";
    }

    return 0;
}

