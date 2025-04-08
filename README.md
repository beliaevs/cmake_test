# Testing CMake Capabilities

## HOWTO build this project (Windows, msvc)

* Create directory "build", generate build configuration
  > cmake -B build .
* Run build
  > cmake --build build --config=release

## HOWTO build this project under linux

> cmake -B build -G "Ninja Multi-Config" .
> cmake --build build --config=Release
