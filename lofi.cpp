#include "lofi.h"
#include "ui_lofi.h"
#include <QMediaPlayer>

lofi::lofi(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lofi)
{
    ui->setupUi(this);
    ui->volumeSlider->setValue(100);
    lofi::setAudio();
}

lofi::~lofi()
{
    delete ui;
}


void lofi::on_playButton_clicked()
{
    lofi::playAudio();
}

void lofi::on_volumeSlider_sliderMoved(int position)
{
   lofi::changeVolume(ui->volumeSlider->value());
}

void lofi::on_pushButton_clicked()
{
    lofi::pauseAudio();
}
