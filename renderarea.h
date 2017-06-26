#ifndef RENDERAREA_H
#define RENDERAREA_H
#include <QWidget>
#include <QColor>
#include <QVector>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    RenderArea( QWidget *parent = nullptr);
    bool flag[16] = {false};
    double f, Rs, Rp;
    double X1L,X2L,Zin,L_l,C_l;
    double Zn = 50;
    double w;
    QPointF Zin2, Yin, Ztemp, Ytemp;
    double Cin, Lin,L, C;




    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;


    enum Mode { Impedence, Admittance,Superimpose, Hide};

    void setBackgroundColor(QColor color) { mBackGroundColor = color; } //setter
    QColor backgroundColor() { return mBackGroundColor; } //getter

    void setShape( Mode mode ) { mMode = mode; } //setter
    Mode getShape() const { return mMode; }  //getter




protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

signals:

public slots:

private:


    float r;
    QColor mBackGroundColor;
    QColor mShapeColor;
    Mode mMode;
    float mScale;
    QPointF compute_real(float t);
    QPointF compute_imaginary(float r);
    QPointF compute(float t);


};

#endif // RENDERAREA_H
