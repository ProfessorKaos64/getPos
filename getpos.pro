SOURCES += main.cpp
CONFIG += qt



#compile target
TARGET = getpos

# set installation directory
isEmpty(PREFIX) {
 PREFIX = /usr
}

binary.path = $$PREFIX/bin
binary.files = $$TARGET
INSTALLS = binary
