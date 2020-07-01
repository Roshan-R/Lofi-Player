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
    void on_playButton_clicked();

    void on_volumeSlider_sliderMoved(int position);

    void on_pushButton_clicked();

private:
    Ui::lofi *ui;
    QString url = "https://manifest.googlevideo.com/api/manifest/hls_playlist/expire/1593607270/ei/BjD8XofHGrXm4-EPqN2b2Ak/ip/117.213.42.200/id/5qap5aO4i9A.0/itag/96/source/yt_live_broadcast/requiressl/yes/ratebypass/yes/live/1/goi/160/sgoap/gir%3Dyes%3Bitag%3D140/sgovp/gir%3Dyes%3Bitag%3D137/hls_chunk_host/r2---sn-cnoa-jjwe.googlevideo.com/playlist_duration/30/manifest_duration/30/vprv/1/playlist_type/DVR/mh/30/mm/44/mn/sn-cnoa-jjwe/ms/lva/mv/u/mvi/1/pl/21/dover/11/keepalive/yes/mt/1593585391/disable_polymer/true/sparams/expire,ei,ip,id,itag,source,requiressl,ratebypass,live,goi,sgoap,sgovp,playlist_duration,manifest_duration,vprv,playlist_type/sig/AOq0QJ8wRAIgJX8cOEGqK9VppwX0OJWHlUI8reLHJg4IdW_UKAOHavkCIG7ZEEq5uFCoePWiVbbTT23ETahah68GP6ToQubYhc4s/lsparams/hls_chunk_host,mh,mm,mn,ms,mv,mvi,pl/lsig/AG3C_xAwRQIgJcUZiB8PfiigP435p9QrJt2Sc388eJ8B290OK_1cNwoCIQC7f-sej8SQEC9pjHm4VbFj8J5WwFFAkGCsUsKg2w3BBw%3D%3D/playlist/index.m3u8";
    QMediaPlayer player;
};
#endif // LOFI_H
