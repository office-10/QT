#make clean
#make confclean

./configure \
-prefix /usr/local/Qt-4.8.6 \
-opensource \
-confirm-license \
-embedded arm \
-xplatform qws/linux-hisi3516-g++ \
-platform qws/linux-x86-g++ \
-little-endian \
-release \
-no-largefile \
-no-accessibility \
-no-stl \
-no-sql-ibase -no-sql-mysql -no-sql-odbc -no-sql-psql -no-sql-sqlite -no-sql-sqlite2 \
-no-qt3support \
-no-xmlpatterns \
-no-multimedia \
-no-audio-backend \
-no-phonon \
-no-phonon-backend \
-no-svg \
-no-javascript-jit \
-no-script \
-no-scripttools \
-no-declarative-debug \
-no-mmx -no-3dnow \
-no-sse -no-sse2 -no-sse3 -no-ssse3 -no-sse4.1 -no-sse4.2 \
-no-libtiff -qt-libpng -no-libmng -qt-libjpeg \
-no-openssl \
-no-nis -no-cups -no-iconv -no-pch -no-dbus \
-no-separate-debug-info \
-no-gtkstyle -no-nas-sound -no-opengl -no-openvg -no-sm -no-xvideo -no-xshape -no-xsync -no-xinerama -no-xcursor -no-xfixes \
-no-xrandr -no-xrender -no-mitshm -no-fontconfig -no-xinput -no-xkb -no-glib \
-qt-mouse-linuxinput -no-mouse-tslib -no-mouse-linuxtp \
-qt-mouse-pc -no-mouse-qvfb -no-mouse-qnx \
-qt-gfx-transformed \
-nomake tools \
-nomake examples \
