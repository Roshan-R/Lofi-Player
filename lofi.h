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
    QString url = "https://manifest.googlevideo.com/api/manifest/hls_playlist/expire/1593629198/ei/roX8Xte3HpKovQSTjILYBw/ip/61.3.176.109/id/5qap5aO4i9A.0/itag/96/source/yt_live_broadcast/requiressl/yes/ratebypass/yes/live/1/goi/160/sgoap/gir%3Dyes%3Bitag%3D140/sgovp/gir%3Dyes%3Bitag%3D137/hls_chunk_host/r2---sn-cnoa-jjwe.googlevideo.com/playlist_duration/30/manifest_duration/30/vprv/1/playlist_type/DVR/initcwndbps/1620/mh/30/mm/44/mn/sn-cnoa-jjwe/ms/lva/mv/m/mvi/1/pl/21/dover/11/keepalive/yes/fexp/23883098/mt/1593607517/disable_polymer/true/sparams/expire,ei,ip,id,itag,source,requiressl,ratebypass,live,goi,sgoap,sgovp,playlist_duration,manifest_duration,vprv,playlist_type/sig/AOq0QJ8wRQIgIc_9TKOg3BLU6HLK81rChiQKbluM3BxX3RzbzOi6Cz4CIQCotzVo1p5V_4lqFz7mIoRgA3OO3BnY4c1FWWTd-pa6Rg%3D%3D/lsparams/hls_chunk_host,initcwndbps,mh,mm,mn,ms,mv,mvi,pl/lsig/AG3C_xAwRgIhANYa-UUlHAcvasC3qVZ7jfoScR91a1tLNCBiUJnFpPXdAiEAts73a9SSZVU-ZjP_2NTiXS7vdRI9hrLyWw8sct7jZUE%3D/playlist/index.m3u8";
    QMediaPlayer player;
};
#endif // LOFI_H
