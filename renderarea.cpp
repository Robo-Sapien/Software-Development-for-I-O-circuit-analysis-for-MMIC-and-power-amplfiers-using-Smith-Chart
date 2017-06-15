#include <iostream>
#include "renderarea.h"
#include <QPaintEvent>
#include <QPainter>
#include "global.h"

RenderArea::RenderArea( QWidget *parent) :
    QWidget(parent),
    mBackGroundColor (0, 0, 0),
    mShapeColor (255, 255, 255),
    mMode(Impedence)
{

}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(100, 100);
}

QSize RenderArea::sizeHint() const
{
    return QSize(400, 100);
}

QPointF RenderArea::compute_real(float t)
{

    //std::cout << r;
    float cos_t = cos(t);
    float sin_t = sin(t);
    float x = (r/(1+r)) + (1/(r+1))*pow(cos_t, 1);
    float y = (1/(r+1))*pow(sin_t, 1);


    return QPointF (x, y);

}

QPointF RenderArea::compute_imaginary(float t)
{
    float cos_t = cos(t);
    float sin_t = sin(t);
    float x = 1 + (1/r)*cos_t;
    float y = (1/r) + (1/r)*sin_t;

    return QPointF (x, y);

}


 void RenderArea::paintEvent(QPaintEvent *event)
 {
     QPoint center = this->rect().center();
     QPainter painter(this);
     painter.setRenderHint(QPainter::Antialiasing, true);


     painter.setBrush(mBackGroundColor);
     painter.setPen(mShapeColor);
     painter.drawRect(this->rect());
     painter.drawLine(QPointF (center.x(), -1000+center.y()), QPointF(center.x(), 1000+center.y()) );
     painter.drawLine(QPointF (-1000+center.x(), center.y()), QPointF(1000+center.x(), center.y()) );
     painter.setPen(Qt::white);


     float intervalLength = 2*M_PI;
     int stepCount = 2000;
     float scale = 200;
     float step = intervalLength/stepCount;
     QPointF iPoint;
     QPointF iPixel;

     switch(mMode) {

     case Superimpose:
         for (RenderArea::r = -2; RenderArea::r <=2 ; RenderArea::r+=0.2) {

             iPoint = compute_imaginary(0);
             iPixel.setX// mBackGroundColor = Qt::green;
                     (-iPoint.x() * scale + center.x());
             iPixel.setY(iPoint.y() * scale + center.y());

                 for (float t = step; t < intervalLength; t += step) {

                    QPointF point = compute_imaginary(t);
                    //if(pow((pow(point.x(),2) + pow(point.y(),2)),0.5) > 1) continue;
                    QPointF pixel;
                    pixel.setX(-point.x() * scale + center.x());
                    pixel.setY(point.y() * scale + center.y());

                     painter.setPen(Qt::white);
                     if(pow(point.x(),2)+pow(point.y(),2)<1)      //Restricting the domain of Smith Chart
                     {
                     painter.drawLine(iPixel, pixel);
                     }
                    iPixel = pixel;
                    //painter.drawPoint(pixel);
                }
         }
         for (RenderArea::r = 0; RenderArea::r < 10 ; RenderArea::r+=0.2) {

             iPoint = compute_real(0);
             iPixel.setX(-iPoint.x() * scale + center.x());
             iPixel.setY(iPoint.y() * scale + center.y());

                 for (float t = 0; t < intervalLength; t += step) {

                    QPointF point = compute_real(t);
                    QPointF pixel;
                    pixel.setX(-point.x() * scale + center.x());
                    pixel.setY(point.y() * scale + center.y());
                    painter.drawLine(iPixel, pixel);
                    iPixel = pixel;

                    //painter.drawPoint(pixel);

                }
         }

         for (RenderArea::r = -2; RenderArea::r <=2 ; RenderArea::r+=0.2) {

             iPoint = compute_imaginary(0);
             iPixel.setX// mBackGroundColor = Qt::green;
                     (iPoint.x() * scale + center.x());
             iPixel.setY(-iPoint.y() * scale + center.y());

                 for (float t = step; t < intervalLength; t += step) {

                    QPointF point = compute_imaginary(t);
                    //if(pow((pow(point.x(),2) + pow(point.y(),2)),0.5) > 1) continue;
                    QPointF pixel;
                    pixel.setX(point.x() * scale + center.x());
                    pixel.setY(-point.y() * scale + center.y());

                     painter.setPen(Qt::white);
                     if(pow(point.x(),2)+pow(point.y(),2)<1)      //Restricting the domain of Smith Chart
                     {
                     painter.drawLine(iPixel, pixel);
                     }
                    iPixel = pixel;
                    //painter.drawPoint(pixel);
                }
         }
         for (RenderArea::r = 0; RenderArea::r < 10 ; RenderArea::r+=0.2) {

             iPoint = compute_real(0);
             iPixel.setX(iPoint.x() * scale + center.x());
             iPixel.setY(-iPoint.y() * scale + center.y());

                 for (float t = 0; t < intervalLength; t += step) {

                    QPointF point = compute_real(t);
                    QPointF pixel;
                    pixel.setX(point.x() * scale + center.x());
                    pixel.setY(point.y() * scale + center.y());
                    painter.drawLine(iPixel, pixel);
                    iPixel = pixel;

                    //painter.drawPoint(pixel);

                }
         }

         break;

     case Admittance:
         for (RenderArea::r = -2; RenderArea::r <=2 ; RenderArea::r+=0.25) {

             iPoint = compute_imaginary(0);
             iPixel.setX// mBackGroundColor = Qt::green;
                     (-iPoint.x() * scale + center.x());
             iPixel.setY(iPoint.y() * scale + center.y());

                 for (float t = step; t < intervalLength; t += step) {

                    QPointF point = compute_imaginary(t);
                    //if(pow((pow(point.x(),2) + pow(point.y(),2)),0.5) > 1) continue;
                    QPointF pixel;
                    pixel.setX(-point.x() * scale + center.x());
                    pixel.setY(point.y() * scale + center.y());

                     painter.setPen(Qt::white);
                     if(pow(point.x(),2)+pow(point.y(),2)<1)      //Restricting the domain of Smith Chart
                     {
                     painter.drawLine(iPixel, pixel);
                     }
                    iPixel = pixel;
                    //painter.drawPoint(pixel);
                }
         }
         for (RenderArea::r = 0; RenderArea::r < 10 ; RenderArea::r+=0.5) {

             iPoint = compute_real(0);
             iPixel.setX(-iPoint.x() * scale + center.x());
             iPixel.setY(iPoint.y() * scale + center.y());

                 for (float t = 0; t < intervalLength; t += step) {

                    QPointF point = compute_real(t);
                    QPointF pixel;
                    pixel.setX(-point.x() * scale + center.x());
                    pixel.setY(point.y() * scale + center.y());
                    painter.drawLine(iPixel, pixel);
                    iPixel = pixel;

                    //painter.drawPoint(pixel);

                }
         }

         break;

     case Impedence:
         for (RenderArea::r = -2; RenderArea::r <=2 ; RenderArea::r+=0.25) {

             iPoint = compute_imaginary(0);
             iPixel.setX// mBackGroundColor = Qt::green;
                     (iPoint.x() * scale + center.x());
             iPixel.setY(-iPoint.y() * scale + center.y());

                 for (float t = step; t < intervalLength; t += step) {

                    QPointF point = compute_imaginary(t);
                    //if(pow((pow(point.x(),2) + pow(point.y(),2)),0.5) > 1) continue;
                    QPointF pixel;
                    pixel.setX(point.x() * scale + center.x());
                    pixel.setY(-point.y() * scale + center.y());

                     painter.setPen(Qt::white);
                     if(pow(point.x(),2)+pow(point.y(),2)<1)      //Restricting the domain of Smith Chart
                     {
                     painter.drawLine(iPixel, pixel);
                     }
                    iPixel = pixel;
                    //painter.drawPoint(pixel);
                }
         }
         for (RenderArea::r = 0; RenderArea::r < 10 ; RenderArea::r+=0.5) {

             iPoint = compute_real(0);
             iPixel.setX(iPoint.x() * scale + center.x());
             iPixel.setY(-iPoint.y() * scale + center.y());

                 for (float t = 0; t < intervalLength; t += step) {

                    QPointF point = compute_real(t);
                    QPointF pixel;
                    pixel.setX(point.x() * scale + center.x());
                    pixel.setY(point.y() * scale + center.y());
                    painter.drawLine(iPixel, pixel);
                    iPixel = pixel;

                    //painter.drawPoint(pixel);

                }
         }

         break;
     case Hide:
         break;

     }


     for(int i = 0; i < 5; i++) {

            if(flag[i]) {

            painter.setPen(QPen(Qt::red, 5));
            QVector<QPointF> pixel_array(4);


                    float x = points[i].x();
                    float y = points[i].y();
                    if (x == -1 && y == 0) continue;
                    pixel_array[i].setX(((x-1)*(x+1) + pow(y,2))/((pow(x+1,2)+pow(y,2))) * scale + center.x());
                    pixel_array[i].setY(-((2*y)/((pow(x+1,2)+pow(y,2))))* scale + center.y());
                    painter.drawPoint(pixel_array[i]);


            }
        }

     if(iFlag) {
          painter.setPen(QPen(Qt::green, 5));
          if(!tFlag) {
          X1L= pow((Rs*Rp-Rp*Rp),2);      //tuning
          X2L= Rs*Rp/X1L;
          }//tuning
          if(Rs+X2L != 0) {
          Zin=(Rs*X2L/(Rs+X2L)) + X1L;   //plot Zin and Rp
          L_l=X1L/(2*M_PI*f) *pow(10,6);      //display and tuning
          C_l= 1/(X2L*2*M_PI*f)  *pow(10,9); //display and tuning
          painter.drawPoint(QPointF(((Zin-1)/(Zin+1))*scale + center.x(), center.y()));
          painter.drawPoint(QPointF(((Rp-1)/(Rp+1))*scale + center.x(), center.y()));
          }

     }

 }

