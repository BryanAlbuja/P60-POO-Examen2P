#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{


    ui->setupUi(this);
     mImagen = new QImage(this->size(),QImage::Format_ARGB32_Premultiplied);
     mImagen->fill(Qt::white);
     mPainter = new QPainter(mImagen);
     mPainter->setRenderHint(QPainter::Antialiasing);
     mColor = Qt::black;
     mAncho = 5;
     this->dibujar();

     QPainter painter();
     int x = 0;
     int y = 0;

     QPen pincel;

         dibujar();
}

Juego::~Juego()
{
    delete ui;
}

void Juego::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    // Dibujar la imagen
    painter.drawImage(100, 50, *mImagen);
}
void Juego::dibujar()
{
    QPen pincel;
        pincel.setColor(mColor);
        pincel.setWidth(mAncho);
        mPainter->setPen(pincel);
        mPainter->drawEllipse(mInicial.x(),mInicial.y(),mFinal.x()-mInicial.x(),mFinal.y()-mInicial.y());
        update();
}




void Juego::on_btnArriba_released()
{

}


void Juego::on_btnAbajo_released()
{

}


void Juego::on_btnIzqueirda_released()
{

}


void Juego::on_btnDerecha_released()
{

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



