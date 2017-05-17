#include "retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo(int x0, int y0, int larg, int alt){
    x=x0;
    y=y0;
    largura=larg;
    altura=alt;
}

void Retangulo::draw(Screen &t){
    for(int i=x;i<x+largura;i++){
        for(int j=y;j<y+altura;j++)
            t.setPixel(i,j);
    }
}

void Retangulo::set_Brush(char bru, Screen &t){
    t.setBrush(bru);
}

int Retangulo::getAltura(void){
    return altura;
}

int Retangulo::getLargura(void){
    return largura;
}
