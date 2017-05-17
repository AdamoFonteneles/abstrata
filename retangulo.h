#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "screen.h"

class Retangulo : public FiguraGeometrica{
    int x, y, largura, altura;
public:
    Retangulo(int x0, int y0, int larg, int alt);
    void draw(Screen &t);
    void set_Brush(char bru, Screen &t);
    int getAltura(void);
    int getLargura(void);
};

#endif // RETANGULO_H
