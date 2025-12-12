#include <iostream>
#include<ctime>
#include "Funciones.h"
#include "rlutil.h"
#include"dados.h"

using namespace std;


int main()
{
    srand(time(0));
    rlutil::hidecursor();
    rlutil::saveDefaultColor();

    for (int i =1; i<=6; i++){                             //funcion for que dibuja nuestros dados//
        dibujarDado(i, i*10, rand()%10 + 1);
    }

    rlutil::anykey();
    rlutil::resetColor();
    return 0;
}

