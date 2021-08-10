# CPPND: Capstone Snake Game Example

This is my repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

----------------------------------
In this project I've extended this Snake game, following the principles I've throughout this Nanodegree Program.

------------------------
## Changed/Added files and directories.
1. src/sound_effect.h-.cpp -> contains `SoundEffect` Class that manages background music and sound effect for eating food by using SDL2_mixer. 
2. src/helper.h-.cpp -> contains `Helper` namespace as there are paths constants and other helper functions.
3. data/highest_score.txt -> contains highest score the player reached.
4. src/game.h-.cpp -> added features (music, sound effects and storing highest score) to the game. (refer to commit #b7b3269b935700668d22f84a05a96caad81d4ee3)
5. src/renderer.h-.cpp -> updated `UpdateWindowTitle` function to display highest score with current score on window title bar like this `current_score/highest_score`
6. cmake/FindSDL2.cmake and FindSDL2_mixer -> to link SDL_mixer.
7. CMakeLists.txt -> to use SDL2_mixer.


## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  >Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source. 
* SDL2_Mixer(optional if you want the full nostalgia)
  >Note to install for linux use `sudo apt install libsdl2-mixer-dev`
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

----------------------------------

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

-----------------------------

## CC Attribution-ShareAlike 4.0 International


Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a
[Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
