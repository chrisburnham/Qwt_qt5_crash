#ifndef QWT_WIDGET_H
#define QWT_WIDGET_H

#include <qwt_plot.h>

#include <qwt_plot_zoomer.h>
#include <qwt_plot_canvas.h>

class Qwt_widget : public QwtPlot
{
  Q_OBJECT

public:
  /**Constructor*/
  Qwt_widget(QWidget* parent = 0) : QwtPlot(parent)
  {
    QwtPlotCanvas canvas;
    QwtPlotZoomer* zoomer = new QwtPlotZoomer(&canvas);
  }
};

#endif // QWT_WIDGET_H
