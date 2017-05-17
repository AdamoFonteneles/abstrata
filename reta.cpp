#include "reta.h"
#include <iostream>
#include "screen.h"

using namespace std;

Reta::Reta(int x1, int y1, int x2, int y2){
    x=x1;
    y=y1;
    xf=x2;
    yf=y2;
}

void Reta::draw(Screen &tela){
    int x_aux, y_aux;

    for(float t=x;t<1;t+=0.1){
        x_aux=x+t*(xf-x);
        y_aux=y+t*(yf-y);
        tela.setPixel(x_aux,y_aux);
    }
}

void Reta::set_Brush(char bru, Screen &t){
    t.setBrush(bru);
}
