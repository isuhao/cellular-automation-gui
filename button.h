#ifndef BUTTON_H
#define BUTTON_H

#include <QPushButton>

class Button : public QPushButton
{
    Q_OBJECT
public:
    explicit Button(QWidget *parent = 0);
    void setColor(int);

private:
    int mycolor;
    void paintEvent(QPaintEvent *);
};

#endif // BUTTON_H
