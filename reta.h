#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

class Reta : public FiguraGeometrica{
    int x, y, xf, yf;
public:
    Reta(int x1, int y1, int x2, int y2);
    void draw(Screen &tela);
    void set_Brush(char bru, Screen &t);
};

#endif // RETA_H
