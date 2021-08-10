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

---------------------------------------
Criteria      | Meets Specifications, file(line#)
------------- | -------------
The project demonstrates an understanding of C++ functions and control structures.  | A variety of control structures are used in the project.The project code is clearly organized into functions. almost in every file 
The project reads data from a file and process the data, or the program writes data to a file.  | The project reads data from an external file or writes data to a file as part of the necessary operation of the program. helper.cpp(8 , 28)
The project accepts user input and processes the input.  | The project accepts user input and processes the input. controller.cpp(14)
The project uses Object Oriented Programming techniques.  | The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.
Classes use appropriate access specifiers for class members.  |All class data members are explicitly specified as public, protected, or private. game.h , controller.h , sound_effect.h , snake.h , renderer.h
Class constructors utilize member initialization lists.  | All class members that are set to argument values are initialized through member initialization lists.
Classes abstract implementation details from their interfaces.  | All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.
Classes encapsulate behavior. | Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user. State is accessed via member functions. (like sound_effect.h-.cpp)
The project uses destructors appropriately.  | sound_effect.h-.cpp At least one class that uses unmanaged dynamically allocated memory, along with any class that otherwise needs to modify state upon the termination of an object, uses a destructor.



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
* SDL2_Mixer(optional if you want the full nostalgia) installation instructions can be found [here](https://www.libsdl.org/projects/SDL_mixer)
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
