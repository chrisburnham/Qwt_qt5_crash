#ifndef QWT_WIDGET_H
#define QWT_WIDGET_H

#include <qwt_plot.h>

class Qwt_widget : public QwtPlot
{
  Q_OBJECT

public:
  /**Constructor*/
  Qwt_widget(QWidget * = 0);

  /**Destructor*/
  ~Qwt_widget();
};

#endif // QWT_WIDGET_H
