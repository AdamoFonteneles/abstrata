#include "screen.h"
#include <fstream>

Screen::Screen(int nlin, int ncol){
    this->nlin=nlin;
    this->ncol=ncol;
}

void Screen::setPixel(int x, int y){
    if(x>=0 && x<ncol && y>=0 && y<nlin)
        tela[x][y]=brush;
}

void Screen::clear(void){
    for(int i=0;i<nlin;i++){
        for(int j=0;j<ncol;j++)
            tela[i][j]=' ';
    }
}

void Screen::setBrush(char brush){
    this->brush=brush;
}

int Screen::getLinhas(void){
    return nlin;
}

int Screen::getColunas(void){
    return ncol;
}

ostream &operator<<(ostream &os, Screen &t){
    for(int i=0;i<t.nlin;i++){
        for(int j=0;j<t.ncol;j++){
            os << t.tela[i][j];
        }
        os << "\n";
    }
}

