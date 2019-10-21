#include "qwt_widget.h"

#include <qwt_plot_zoomer.h>
#include <qwt_plot_canvas.h>

////////////////////////////////////////////////////////////////////////////////


Qwt_widget::Qwt_widget(QWidget *parent)
  :
    QwtPlot(parent)
{
  QwtPlotCanvas canvas;
  QwtPlotZoomer* zoomer(new QwtPlotZoomer(&canvas));
}

////////////////////////////////////////////////////////////////////////////////

Qwt_widget::~Qwt_widget() {}

////////////////////////////////////////////////////////////////////////////////
