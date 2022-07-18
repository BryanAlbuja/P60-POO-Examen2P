#include "circulo.h"
#include "juego.h"

Circulo::Circulo()
    :QPoint(0,0)
    //, ui(new Ui::Configuracion)
{
    //ui->setupUi(this);
    //lienzo = QPoint(500,500);
    this->dibujar();

    //ui->outCuadro->setPixmap(lienzo);
}


Circulo::Circulo(int xpos, int ypos)
    :QPoint(xpos, ypos)
{
    return;
}

void Circulo::dibujar()
{
    //lienzo.fill(Qt::white);

    //QPainter painter(&lienzo);

    //int xpos = 0;
    //int ypos = 0;

    // Crear un pincel para los bordes
    //QPen pincel;
    //pincel.setWidth(5);
    // Creando los colores de la tercera barra
    //QColor cRellenoBarra0(93, 70, 146);
    //QColor cBordeBarra0(72, 0, 239);
/*
    // Estableciendo colores al puncel y al painter
    pincel.setColor(cBordeBarra0);
    painter.setPen(pincel);
    painter.setBrush(cRellenoBarra0);


    // Establecer el pincel al "pintor"
    painter.setPen(pincel);

    // Dibujar primera barra
    painter.drawRect(xpos+75, ypos+50+xpos,100,ypos);

    // Crear un objeto color para el relleno
    QColor colorRelleno(255, 120, 0);
    // Crear otro objeto color para el borde
    QColor colorBorde(255, 86, 42);

    // Cambiar el color del pincel
    pincel.setColor(colorBorde);

    // Volver a establecer el pincel al "pintor"
    painter.setPen(pincel);

    // Establecer el color al brush (relleno)
    painter.setBrush(colorRelleno);

//Plano cartesiano
    //linea en y
    painter.drawLine(xpos+50,ypos+50,xpos+50,ypos+475);
    //linea en x
    painter.drawLine(xpos+25,ypos+450,xpos+475,ypos+450);
}
*/
}
