# CMakeWxWidgets
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

CMakeWxWidgets is a template wxWidgets C++ application for building with CMake. This repository is also featured on the PragmaticLinux blog in the article about [how to get started with wxWidgets on Linux](https://www.pragmaticlinux.com/2021/08/getting-started-with-wxwidgets-on-linux/).

## What you need

To obtain and build the CMakeWxWidgets template application, make sure that your Linux system has C++ development and Git related packages installed:

* Debian/Ubuntu: `sudo apt install git gcc g++ gdb make cmake libwxgtk3.0-gtk3-dev`
* Fedora: `sudo dnf install git gcc g++ gdb make cmake wxGTK3-devel`
* openSUSE: `sudo zypper install git gcc gcc-c++ gdb make cmake wxGTK3-devel`

## Getting the code

To get the code, clone the Git repository to a subdirectory, for example inside your own home directory:

* `git clone https://github.com/pragmaticlinuxblog/cmake_wxwidgets.git ~/myapp`

## Building the application

After cloning the Git repository, you can prepare the build environment with the help of CMake:

* `cd ~/myapp/build`
* `cmake ..`

Note that this only has to be done once. From now on you can build the application by running this command from inside the `build` subdirectory:

* `make all`

## Installing the application

The *CMakeLists.txt* contains details on how to install the application as well. To install the application on your Linux system, run this command from the `build` subdirectory:

* `sudo make install`

