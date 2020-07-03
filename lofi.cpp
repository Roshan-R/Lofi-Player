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


void lofi::on_Button_clicked()
{
}

void lofi::on_volumeSlider_sliderMoved(int position)
{
   lofi::changeVolume(ui->volumeSlider->value());
}


void lofi::on_Button_pressed()
{

    if(!lofi::playStatus()) {
        lofi::setPlaying();
        lofi::playAudio();
    }
    else{
       lofi::setPause();
       lofi::pauseAudio();
    }
}
