# Maintainer: Roshan R Chandar <roshan@cet.ac.in>
pkgname=Lofi-Player
pkgver=1.0
pkgrel=1
pkgdesc="A simple lofi radio player made using qt"
arch=('x86_64')
url="https://github.com/Roshan-R/Lofi-Player/"
license=('GPL')
depends=('qt5-base' 'qt5-multimedia')
makedepends=()
checkdepends=()
optdepends=()
source=("Lofi-Player::git://github.com/Roshan-R/Lofi-Player")
md5sums=('SKIP')

build() {
	cd "$pkgname"
    qmake lofi.pro
	make
}

package() {
	cd "$pkgname"
    install -Dm755 ./lofi "$pkgdir/usr/bin/Lofi-Player"
    install -Dm644 "$pkgname.desktop" "$pkgdir/usr/share/applications/$pkgname.desktop"
    install -Dm644 "$pkgname.png" "$pkgdir/usr/share/pixmaps/$pkgname.png"
}
