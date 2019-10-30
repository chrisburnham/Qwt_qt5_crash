#ifndef QWT_WIDGET_H
#define QWT_WIDGET_H

#include <qwt_plot.h>
#include <qwt_plot_zoomer.h>
#include <qwt_plot_canvas.h>

class Qwt_widget : public QwtPlot
{
  Q_OBJECT

public:
  Qwt_widget(QWidget* parent = 0) :
    QwtPlot(parent)
  {
    QwtPlotZoomer zoomer(canvas()); // Crashes here
  }
};

#endif // QWT_WIDGET_H
