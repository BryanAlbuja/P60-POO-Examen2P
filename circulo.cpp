#include "circulo.h"

Circulo::Circulo()
    :QPoint(0,0)
{

}


Circulo::Circulo(int xpos, int ypos)
    :QPoint(xpos, ypos)
{
    return;
}

int Circulo::getX()
{
    this->getX();
    getX() = x;
    x = 0;
}

int Circulo::getY()
{
    this->getY();
    getY() = y;
    y = 0;
}

void Circulo::dibujar()
{
    painter.drawLine(x+50,y+50,x+450,y+50);

}
