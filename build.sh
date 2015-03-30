#!/bin/sh
version=$(grep AC_INIT configure.ac | grep -o "[0-9.]*")
./configure --prefix=$HOME/app/global-$version --with-exuberant-ctags=$(which ctags) || exit
make || exit
make install
