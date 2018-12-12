#include "timer.h"
#include "ui_timer.h"
#include <QDebug>
Timer::Timer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Timer)
{
    ui->setupUi(this);
    count = 0;
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(tick()));
    timer -> start(1000);

}

Timer::~Timer()
{
    delete ui;
}

void Timer::tick(){
    count ++;
    qDebug() << count << "\n";
}
