#include<iostream>
#include "rlutil.h"
#include "dados.h"

using namespace std;

void tirarDados(int posx, int posy){
int dado = rand()%6+1;


}
void dibujarDado(int numero, int posx , int posy){
    dibujarCuadrado(posx, posy);
    dibujarPuntos(numero, posx, posy);
    dibujarSombra(posx,posy);                                                           // funcion para dibujar la sombra de mis dados.
    }

void dibujarPuntos(int numero, int posx, int posy){
    rlutil::setColor(rlutil::WHITE);
    rlutil::setBackgroundColor(rlutil::RED);

        switch(numero){                                        //a continuacion utilizamos el switch para dibujar los numeros en cada dado, cada caso corresponde a un nuero de puntos dibujados.
        case 1:
        rlutil::locate(posx+3, posy+1);
        cout<<(char) 254;
        break;

        case 2:
            rlutil::locate(posx+1,posy);
            cout<<(char)220;
            rlutil::locate(posx+5,posy+2);
            cout<<(char)223;
            break;

        case 3 :
             rlutil::locate(posx+3, posy+1);
            cout<<(char) 254;
            rlutil::locate(posx+1,posy);
            cout<<(char)220;
            rlutil::locate(posx+5,posy+2);
            cout<<(char)223;
            break;
        case 4 :
            rlutil::locate(posx+1,posy);
            cout<<(char)220;
            rlutil::locate(posx+5,posy);
            cout<<(char)220;
            rlutil::locate(posx+1,posy+2);
            cout<<(char) 223;
            rlutil::locate(posx+5,posy+2);
            cout<< (char)223;
            break;
        case 5:
             rlutil::locate(posx+3, posy+1);
            cout<<(char) 254;
            rlutil::locate(posx+1,posy);
            cout<<(char)220;
            rlutil::locate(posx+5,posy);
            cout<<(char)220;
            rlutil::locate(posx+1,posy+2);
            cout<<(char) 223;
            rlutil::locate(posx+5,posy+2);
            cout<< (char)223;
            break;
        case 6 :
              rlutil::locate(posx+1,posy);
            cout<<(char)220;
              rlutil::locate(posx+3,posy);
            cout<<(char)220;
            rlutil::locate(posx+5,posy);
            cout<<(char)220;
            rlutil::locate(posx+1,posy+2);
            cout<<(char) 223;
            rlutil::locate(posx+3,posy+2);
            cout<<(char) 223;
            rlutil::locate(posx+5,posy+2);
            cout<< (char)223;
            break;
}
}


void dibujarSombra(int posx, int posy){

    rlutil::setColor(rlutil::LIGHTRED);
    rlutil::setBackgroundColor(rlutil::BLACK);

    for(int y=posy; y<=posy+2; y++){
        rlutil::locate(posx+7,y);
        if(y==posy){
            cout << (char) 220;
        }
        else{
            cout << (char) 219;
        }

    }

    for (int x=posx+1; x<=posx+7; x++){
        rlutil::locate(x, posy + 3);
         cout << (char) 223;
    }


}

void dibujarCuadrado(int posx, int posy){
    rlutil::setColor(rlutil::RED);
    for(int x=posx; x<= posx+6; x++){
        for (int y = posy; y <= posy+2;y++){
            rlutil::locate(x,y);
            cout <<(char) 219;        }
    }
}

