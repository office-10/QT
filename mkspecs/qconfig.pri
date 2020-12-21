#configuration
CONFIG +=  cross_compile shared def_files_disabled no_mocdepend release qt_no_framework
QT_ARCH = arm
QT_EDITION = OpenSource
QT_CONFIG +=  minimal-config small-config medium-config large-config full-config no-pkg-config shared embedded reduce_exports ipv6 clock-gettime clock-monotonic mremap getaddrinfo ipv6ifname getifaddrs inotify no-mng png no-tiff freetype zlib concurrent release

#versioning
QT_VERSION = 4.8.6
QT_MAJOR_VERSION = 4
QT_MINOR_VERSION = 8
QT_PATCH_VERSION = 6

#namespaces
QT_LIBINFIX = 
QT_NAMESPACE = 
QT_NAMESPACE_MAC_CRC = 

QMAKE_RPATHDIR += "/usr/local/Qt-4.8.6/lib"
QT_GCC_MAJOR_VERSION = 6
QT_GCC_MINOR_VERSION = 3
QT_GCC_PATCH_VERSION = 0
