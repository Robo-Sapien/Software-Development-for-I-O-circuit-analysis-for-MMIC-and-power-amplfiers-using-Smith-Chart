#include <iostream>
#include "renderarea.h"
#include <QPaintEvent>
#include <QPainter>
#include "global.h"
#include <QMessageBox>

RenderArea::RenderArea( QWidget *parent) :
    QWidget(parent),
    mBackGroundColor (255, 255, 255),
    mShapeColor (0, 0, 0),
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
     center = this->rect().center();
     QPainter painter(this);
     painter.setRenderHint(QPainter::Antialiasing, true);


     painter.setBrush(mBackGroundColor);
     painter.setPen(mShapeColor);
     painter.drawRect(this->rect());
     painter.drawLine(QPointF (center.x(), -1000+center.y()), QPointF(center.x(), 1000+center.y()) );
     painter.drawLine(QPointF (-1000+center.x(), center.y()), QPointF(1000+center.x(), center.y()) );
     painter.setPen(Qt::blue);


     float intervalLength = 2*M_PI;
     int stepCount = 2000;

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

                     painter.setPen(Qt::blue);
                     if(pow(point.x(),2)+pow(point.y(),2)<1)      //Restricting the domain of Smith Chart
                     {
                     painter.drawLine(iPixel, pixel);
                     }
                    iPixel = pixel;
                    //painter.drawPoint(pixel);
                }
         }
         painter.setPen(Qt::black);
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

                     painter.setPen(Qt::blue);
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
         for (RenderArea::r = -2; RenderArea::r <=2 ; RenderArea::r+=0.3) {

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

                     painter.setPen(Qt::blue);
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
         for (RenderArea::r = -2; RenderArea::r <=2 ; RenderArea::r+=0.3) {

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

                     painter.setPen(Qt::blue);
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


                    double x = points[i].x();
                    double y = points[i].y();
                    if (x == -1 && y == 0) continue;
                    pixel_array[i].setX((((x-1)*(x+1) + pow(y,2))/((pow(x+1,2)+pow(y,2)))) * scale + center.x());
                    pixel_array[i].setY(-((2*y)/((pow(x+1,2)+pow(y,2))))* scale + center.y());
                    painter.drawPoint(pixel_array[i]);


            }
        }

     if(flag[4]) {
          painter.setPen(QPen(Qt::green, 5));
          if(!flag[5]) {
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

    if(flag[6] && flag[7]) {

        painter.setPen(QPen(Qt::red, 5));
        double x = impedence_admittance(Zin2.x(), Zin2.y()).x();
        double y = impedence_admittance(Zin2.x(), Zin2.y()).y();
        // TODO: create a function to convert Impedence to Admittance
        Yin.setX(x);
        Yin.setY(y);
        painter.drawPoint(Y_to_Gamma(x, y));
        // TODO: create a function to convert Admittance to Gamma values and replace the above expression inside QPointF

        double a = Yin.x()/50;
        double b = Yin.y()/50;

        L = pow(((50-(2500*a))/(a*w*w)), 0.5);
        C = (1/w)*(((w*L)/(2500+w*w*L*L))+b);

    }

    if(flag[8] && ( flag [7] && flag[6])) {

        painter.setPen(QPen(Qt::green,5));
        double x = impedence_admittance( Ztemp.x(), Ztemp.y()).x();
        double y;
        if(flag[10]) y = Ytemp.y();
        else y = impedence_admittance( Ztemp.x(), Ztemp.y()).y();
        Ytemp.setX(x);
        painter.drawPoint(Y_to_Gamma(x, y));
    }

    if (flag[12]) {

        if(!flag[11]) Lin = 0;
    for(; Lin <= L; Lin+=(L/100) ) {

        double x = 1;
        double y = (w*Lin)/50;
        painter.setPen(QPen(Qt::black, 2));
        painter.drawPoint(Z_to_Gamma(x, y));

    }
    if (!flag[10]) Cin = 0;

    for(; Cin <= C; Cin+=(C/100)) {

         painter.setPen(QPen(Qt::black, 2));
       double  x = 2500/(2500 + w*w*L*L);
        double y = 50*(((-w*L)/(2500 + w*w*L*L)) + w*Cin);
        painter.drawPoint(Y_to_Gamma(x, y));
    }
}


if(flag[13]) {

        painter.setPen(QPen(Qt::red, 2));

        double initial_y;
        double initial_x;

        if (!flag[14]) {
            initial_point = QPointF(1, 0);
            ABCD.val[0][0]=1;ABCD.val[1][0]=0;ABCD.val[0][1]=0;ABCD.val[1][1]=1;
        }
        flag[14] = true;
        if ( flag[14]) {
             initial_x = initial_point.x();
             initial_y = initial_point.y();
         }


        switch(mTopology) {

            case Series_Inductance:
        {
            double L = 0;

            for(; L <= Val; L += Val/1000 )
            {

                initial_point.setY(initial_y + ((w*L)/50));
                painter.drawPoint(Z_to_Gamma(initial_point.x(), initial_point.y()));
            }
            complex z(initial_point.x(),initial_point.y());
            matrix abcd=setSeries(z);
            ABCD=ABCD*abcd;

            break;
         }

            case Shunt_Capacitance:

        {
            double C = 0;

                initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                initial_y = initial_point.y();


                for(; C <= Val; C+=(Val/1000)) {

                    initial_point.setY( initial_y + ((w*C)*50));
                    painter.drawPoint(Y_to_Gamma(initial_point.x(), initial_point.y()));
                }

                initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                complex z(initial_point.x(),initial_point.y());
                matrix abcd=setShunt(z);
                ABCD=ABCD*abcd;

            break;
          }

            //Same AS ABOVE

        case Series_Capacitance:
    {
        double C = 0;


        for(; C<= Val; C += Val/1000 )
        {

            if(C == 0) initial_point.setY(0);
            else initial_point.setY( initial_y - (50/(w*C)));
            painter.drawPoint(Z_to_Gamma(initial_point.x(), initial_point.y()));
        }
        complex z(initial_point.x(),initial_point.y());
        matrix abcd=setSeries(z);
        ABCD=ABCD*abcd;

        break;
     }

        case Shunt_Inductance:

    {
        double L = 0;

            initial_point = impedence_admittance(initial_point.x(), initial_point.y());
            initial_y = initial_point.y();


            for(; L <= Val; L+=(Val/100000)) {

                if(L == 0) initial_point.setY(0);
                else initial_point.setY( initial_y - (50/(w*L)));

                painter.drawPoint(Y_to_Gamma(initial_point.x(), initial_point.y()));
            }

            initial_point = impedence_admittance(initial_point.x(), initial_point.y());
            complex z(initial_point.x(),initial_point.y());
            matrix abcd=setShunt(z);
            ABCD=ABCD*abcd;

        break;
      }

        }
    }

    if(flag[19]) {

           painter.setPen(QPen(Qt::red, 2));

           double initial_y;
           double initial_x;

           initial_point = QPointF(1, 0);

           initial_x = initial_point.x();
           initial_y = initial_point.y();


           for(int i = 0; i <= step_count-1; i++) {

               initial_x = initial_point.x();
               initial_y = initial_point.y();


               switch(step_array[i].topology) {

                   case Series_Inductance:
               {
                   double L = 0;

                   for(; L <= step_array[i].Val; L +=  step_array[i].Val/1000 )
                   {

                       initial_point.setY(initial_y + ((w*L)/50));
                       if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                       painter.drawPoint(Z_to_Gamma(initial_point.x(), initial_point.y()));


                   }
                   //complex z(initial_point.x(),initial_point.y());
                   //matrix abcd=setSeries(z);
                   //ABCD=ABCD*abcd;

                   break;
                }

                   case Shunt_Capacitance:

               {
                   double C = 0;

                       initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                       initial_y = initial_point.y();


                       for(; C <=  step_array[i].Val; C+=( step_array[i].Val/1000)) {

                           initial_point.setY( initial_y + ((w*C)*50));
                            if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 10));
                           painter.drawPoint(Y_to_Gamma(initial_point.x(), initial_point.y()));
                       }

                       initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                       //complex z(initial_point.x(),initial_point.y());
                       //matrix abcd=setShunt(z);
                       //ABCD=ABCD*abcd;


                   break;
                 }

                   //Same AS ABOVE

               case Series_Capacitance:
           {
               double C = 0;


               for(; C<=  step_array[i].Val; C +=  step_array[i].Val/1000 )
               {

                   if(C == 0) initial_point.setY(0);
                   else initial_point.setY( initial_y - (50/(w*C)));
                   if((i == (step_count-1)) && (C == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                   painter.drawPoint(Z_to_Gamma(initial_point.x(), initial_point.y()));
               }
               //complex z(initial_point.x(),initial_point.y());
               //matrix abcd=setSeries(z);
               //ABCD=ABCD*abcd;

               break;
            }

               case Shunt_Inductance:

           {
               double L = 0;

                   initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                   initial_y = initial_point.y();


                   for(; L <=  step_array[i].Val; L+=( step_array[i].Val/100000)) {

                       if(L == 0) initial_point.setY(0);
                       else initial_point.setY( initial_y - (50/(w*L)));

                       if((i == (step_count-1)) && (L == step_array[i].Val)) painter.setPen(QPen(Qt::green, 4));
                       painter.drawPoint(Y_to_Gamma(initial_point.x(), initial_point.y()));
                   }

                   initial_point = impedence_admittance(initial_point.x(), initial_point.y());
                   //complex z(initial_point.x(),initial_point.y());
                   //matrix abcd=setShunt(z);
                   //ABCD=ABCD*abcd;

               break;
             }
               }


           }

       }



 }

