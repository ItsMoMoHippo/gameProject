# GameProject

Its me using [raylib](https://github.com/raysan5/raylib) as a graphic library to make a simple game. This repo will include all source files and dependencies I will be using in `src`, `lib` and `include`. For the minimum starting point, I would suggets to copy the `raylib.h`,`raymath.h` and `rlgl.h` from the `include` folder, the `libraylib.a` in the `lib` ffolder and copying the first [example](https://www.raylib.com/examples.html) in the raylib website and use that as a `main.c` or `main.cpp` file. 

__________________________________________________________________

## Compiling and running the game

I will be using cmake using the [`CMakeLists.txt`](https://github.com/ItsMoMoHippo/gameProject/blob/main/README.md) file
to compile the game;

> - first `cd` into the gameproject folder
> - `mkdir build && cd build`
> - `cmake ..`
> - `cmake --build .`
> - `game.exe`

This should make the build folder, use cmake to make the makefiles, then using the makefiles build and compile the game and then run it.

Alternactively, you could use zig build system to make everything instead.

__________________________________________________________________

## Special thanks

I'd like to give special thanks to the peaple behind [raylib](https://github.com/raysan5/raylib)
