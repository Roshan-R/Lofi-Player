# Lofi-Player :headphones:
A light weight music player which plays internet radio streams featuring lofi music made using qt5.


## ScreenShots
![Screenshot](https://raw.githubusercontent.com/Roshan-R/Lofi-Player/master/imgs/screenshot.png)

## Installation
### Arch PKGBUILD
For users running Arch linux or any of it's derivatives, use the PKGBUILD for compilation.

`wget https://raw.githubusercontent.com/Roshan-R/Lofi-Player/master/PKGBUILD && makepkg -si`

### Compiling from source
```plaintext
git clone https://github.com/Roshan-R/Lofi-Player
cd Lofi-Player
mkdir build
cd build
qmake ../lofi.pro
make
```

The executable would be called lofi

## How it Works
The player is provided with a list of 10 streaming urls.

The streams used are -

|Station Name            | Streaming Url |
|--------------------|------------------------------|
|Lauft fm            | http://stream.laut.fm/lofi |
|Planet Lofi         | http://198.245.60.88:8080 |
|Chill Cafe          | http://192.99.35.215:5078 |
|Stream Name         | http://192.99.0.170:5038 |
|No Copyright Stream | http://78.129.222.70:33297 |
|Kadio Seguidor      | http://176.9.43.216:8236 |
|Chillsky            | https://lfhh.radioca.st/stream |
|The Augmented Ear   | http://66.228.41.10:8000/http://thirtythree-45.com:8000 |
|Lofi Hip Hop Radio  | https://stream.zeno.fm/0r0xa792kwzuv |
|KauteMusik FM Study | http://de-hz-fal-stream07.rautemusik.fm/study |

## Contributing

Pull requests are more than welcome.
