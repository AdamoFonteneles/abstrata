#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "screen.h"

class Circulo : public FiguraGeometrica{
    int x, y, raio, fillmode;
public:
    Circulo(int x0, int y0, int raio, int tipo);
    void draw(Screen &t);
    int getRaio(void);
    void set_Brush(char bru, Screen &t);
};

#endif // CIRCULO_H
