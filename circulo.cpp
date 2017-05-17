#include <iostream>
#include "circulo.h"
#include <cmath>

#define PI 3.141592653

using namespace std;

Circulo::Circulo(int x0, int y0, int raio, int tipo){
    x=x0;
    y=y0;
    this->raio=raio;
    fillmode=tipo;
}

void Circulo::draw(Screen &t){
    if(raio>0){
        if(fillmode){
            for(int i=0;i<t.getLinhas();i++){
                for(int j=0;j<t.getColunas();j++){
                    if(sqrt((i-x)*(i-x)+(j-y)*(j-y))<=raio)
                        t.setPixel(i,j);
                }
            }
        } else{
            for(float teta=0;teta<2*PI;teta+=0.1){
                int x_aux, y_aux;
                x_aux=x+raio*cos(teta);
                y_aux=y+raio*sin(teta);

                t.setPixel(x_aux,y_aux);
            }
        }
    }
}

int Circulo::getRaio(void){
    return raio;
}

void Circulo::set_Brush(char bru, Screen &t){
    t.setBrush(bru);
}

