# Qt5 and CMake Practise

This repository contains the exercises of popular Qt5 Gui tutorials but instead of using the build system shown in the tutorials it's using CMake as a build system. 

Currently this repository contains:

* [Qtwiki](https://wiki.qt.io/Qt_for_Beginners) Qt Beginner exercises (not organized at all | don't look at this :))
* [zetcode.com](http://zetcode.com/gui/qt5/) Qt5 Tutorial exercises (zet_# folders)
* [bogotobogo.com](https://www.bogotobogo.com/Qt/Qt5_Creating_QtQuick2_QML_Application_Animation_A.php) Qt5 Tutorials (bogo)

## Building with CMake

Each of the exercises can be built by issuing these commands on the commandline from the source directory

``` bash
# create the build directory
mkdir build && cd build

# create buildfiles with cmake by pointing to source directory
cmake ../

# using gnu make to build the executables with the generated MakeFile
make
```
