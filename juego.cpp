#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    this->dibujar();
    m_circulo = new Circulo();
   // m_circulo->setX(0,0);
    //m_circulo->setY(0,0;

    ui->setupUi(this);
     // Instanciando la imagen (creando)
     mImagen = new QImage(this->size(),QImage::Format_ARGB32_Premultiplied);
     // Rellenar la imagen de color blanco
     mImagen->fill(Qt::white);
     // Instanciar el Painter a partir de la imagen
     mPainter = new QPainter(mImagen);
     mPainter->setRenderHint(QPainter::Antialiasing);
     // Inicializar otras variables
     mColor = Qt::black;
     mAncho = 5;
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



