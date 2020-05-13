#ifndef CREARCOMBO_H
#define CREARCOMBO_H

#include <QWidget>

namespace Ui {
class crearcombo;
}

class crearcombo : public QWidget
{
    Q_OBJECT

public:
    explicit crearcombo(QWidget *parent = 0);
    ~crearcombo();

private:
    Ui::crearcombo *ui;
};

#endif // CREARCOMBO_H
