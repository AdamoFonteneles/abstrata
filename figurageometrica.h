#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"

class FiguraGeometrica{
public:
    FiguraGeometrica();

    // a função virtual draw() é uma função virtual pura
    virtual void draw(Screen &t)=0;
    void set_Brush(char bru, Screen &t);
};

#endif // FIGURAGEOMETRICA_H
