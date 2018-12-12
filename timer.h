#ifndef TIMER_H
#define TIMER_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class Timer;
}

class Timer : public QMainWindow
{
    Q_OBJECT

public:
    explicit Timer(QWidget *parent = nullptr);
    ~Timer();

public slots:
    void tick();

private:
    Ui::Timer *ui;
    QTimer *timer;
    int count;
};

#endif // TIMER_H
