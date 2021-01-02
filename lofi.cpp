#include "lofi.h"
#include "ui_lofi.h"
#include <QMediaPlayer>
#include <QFile>
#include <QDebug>
#include <QFontDatabase>
lofi::lofi(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lofi)
{
    ui->setupUi(this);

    int loadedFontID = QFontDatabase::addApplicationFont ( ":/fonts/BebasNeue.ttf" );
    qInfo()<<loadedFontID;
    QFont Bebas("BebasNeue", 40, QFont::Bold);
    ui->Toplabel->setFont(Bebas);

    ui->volumeSlider->setValue(100);
    lofi::setStreams();
    lofi::setAudio();
    QMediaPlayer tmplayer;
    tmplayer.setMedia(QUrl("http://192.99.35.215:5078"));
    tmplayer.play();
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

void lofi::on_pushButton_pressed()
{
   lofi::nextStation();
   ui->FMlabel->setText(lofi::getStationName());
}

void lofi::on_pushButton_2_pressed()
{
   lofi::previousStation();
   ui->FMlabel->setText(lofi::getStationName());
}
