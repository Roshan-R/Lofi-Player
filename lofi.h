#ifndef LOFI_H
#define LOFI_H

#include <QMainWindow>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class lofi; }
QT_END_NAMESPACE

class lofi : public QMainWindow
{
    Q_OBJECT

public:

    int playStatus(){
        return this->isPlaying;
    }

    void setPlaying(){
        this ->isPlaying = 1;
    }

    void setPause(){
        this ->isPlaying = 0;
    }

    void setAudio(){
      this->player.setMedia(QUrl(this->url));
    }

    void playAudio() {
      this->player.play();
    }

    void changeVolume(int val) {
        this->player.setVolume(val);
    }

    void pauseAudio() {
      this->player.pause();
    }

    lofi(QWidget *parent = nullptr);
    ~lofi();

private slots:
    void on_Button_clicked();

    void on_volumeSlider_sliderMoved(int position);


    void on_Button_pressed();

private:
    int isPlaying = 0;
    Ui::lofi *ui;
    QString url = "http://stream.laut.fm/lofi";
    QMediaPlayer player;
};
#endif // LOFI_H
