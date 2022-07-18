#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include <QDebug>
#include "configuracion.h"
#include "circulo.h"
#include <QImage>

QT_BEGIN_NAMESPACE
namespace Ui { class Juego; }
QT_END_NAMESPACE

class Juego : public QMainWindow
{
    Q_OBJECT

public:
    Juego(QWidget *parent = nullptr);
    ~Juego();
protected:
    void paintEvent(QPaintEvent *event) override;


private slots:
    void on_btnArriba_released();

    void on_btnAbajo_released();

    void on_btnIzqueirda_released();

    void on_btnDerecha_released();

    void on_actionConfigraci0n_triggered();

    void on_actionSalir_triggered();

private:
    Ui::Juego *ui;
    Circulo *m_circulo;
    void dibujar();
       QImage *mImagen;        // Imagen sobre la que se va a dibujar
       QPainter *mPainter;     // Painter de la imagen
       QPoint mInicial;        // Punto incial para dibujar la línea
       QPoint mFinal;          // Punto final para dibujar la líne
       QPoint mTempInic;
       QPoint mtempFinal;
       QColor mColor;
       int mAncho;
};
#endif // JUEGO_H
