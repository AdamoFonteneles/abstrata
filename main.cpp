#include <iostream>
#include <vector>
#include "figurageometrica.h"
#include "retangulo.h"
#include "circulo.h"
#include "reta.h"
#include <fstream>
#include <cstring>
#include <sstream>


using namespace std;

int main(void){

    vector<FiguraGeometrica*> figuras;
    ifstream entrada;
    ofstream saida;

    char codigo[10];

    int a, b, c, d, nlin, ncol;
    char brush;

    entrada.open("C://Users/Adamo/Documents/abstrata/instrucoes.txt");
    if(!entrada.is_open())
        return 0;

    entrada >> codigo;

    while(entrada.good()){
        if(strcmp("dim", codigo)){
            entrada >> ncol >> nlin;
        } else if(strcmp("rectangle", codigo)){
            entrada >> a >> b >> c >> d;
            figuras.push_back(new Retangulo(a, b, c, d));
        } else if(strcmp("line", codigo)){
            entrada >> a >> b >> c >> d;
            figuras.push_back(new Reta(a, b, c, d));
        } else if(strcmp("brush", codigo)){
            entrada >> brush;
            //tela.setBrush(brush);
        } else if(strcmp("circle", codigo)){
            entrada >> a >> b >> c >> d;
            figuras.push_back(new Circulo(a, b, c, d));
        }
        entrada >> codigo;
    }
    entrada.close();

    Screen tela(nlin,ncol);
    for(int i=0; i<figuras.size(); i++){
        tela.setBrush(brush);
        figuras[i]->draw(tela);
    }
    cout << tela;
    saida.open("C://Users/Adamo/Documents/abstrata/desenho.txt");
    if(!saida.is_open()){
        cout << "erro\n";
    }
    if(saida.is_open()){
        saida << tela;
      }
    saida.close();

    return 0;
}
