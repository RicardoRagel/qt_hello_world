# Qt Hello World

A Hello World example using default Qt installation and CMake on Linux.

## Prerequisites

* Debian-based system (tested on Ubuntu 20.04)

Other OS could differ in the dependencies installation.

## Dependencies

* GCC and CMake
```
sudo apt install build-essential cmake
```
* Qt5
```
sudo apt install qt5-default
```

## Build

As any other CMake project:
```
mkdir build
cd build
cmake ..
make
```

## Run

```
./qt_hello_world
```