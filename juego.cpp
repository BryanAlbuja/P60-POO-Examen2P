#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    this->dibujar();
    QPoint centro = ui->label->geometry();
    m_circulo = new Circulo();
    m_circulo->setX(centro.x());
    m_circulo->setY(centro.y());

}

Juego::~Juego()
{
    delete ui;
}

void Juego::dibujar()
{
    QPen pincel;
        pincel.setColor(mColor);
        pincel.setWidth(mAncho);
    // Dibujar una linea
        mPainter->setPen(pincel);
        mPainter->drawEllipse(mInicial.x(),mInicial.y(),mFinal.x()-mInicial.x(),mFinal.y()-mInicial.y());
        update();
}


void Juego::on_btnArriba_released()
{
    //dibujar();
}


void Juego::on_btnAbajo_released()
{
    //dibujar();
}


void Juego::on_btnIzqueirda_released()
{
    //dibujar();
}


void Juego::on_btnDerecha_released()
{
    //dibujar();
}


void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}



