# MovieTerminal

MovieTerminal is a C++ application that lets you watch videos as ASCII art directly in your terminal. It uses OpenCV to process video frames and render them as ASCII characters, creating a retro, text-based movie experience. Download it [here](build/MovieTerminal). Currently only tested in Linux, so try testing it on another OS.

## Features
- Converts video frames to ASCII art in real time
- Adjustable ASCII resolution (default: 80x40)
- Runs in any terminal that supports ANSI escape codes

## Prerequisites for compiling it yourself
- C++17 compatible compiler
- [OpenCV](https://opencv.org/) library
- CMake (version 3.10 or higher)

## Build Instructions
1. **Install OpenCV** (if not already installed):
   ```bash
   sudo apt-get update
   sudo apt-get install libopencv-dev
   ```
2. **Clone the repository and build:**
   ```bash
   cd /path/to/MovieTerminal
   mkdir -p build
   cd build
   cmake ..
   make
   ```
   The executable `MovieTerminal` will be created in the `build/` directory.

## Usage
1. Run the program from the build directory:
   ```bash
   ./MovieTerminal
   ```
2. When prompted, enter the path to a video file.
3. Watch your video play as ASCII art in the terminal!

Caution: You have to enter the full file path for it to work!


## License
This project is licensed under the Apache License 2.0. See the [LICENSE](LICENSE) file for details.

## Acknowledgements
- [OpenCV](https://opencv.org/) for video processing
- Inspired by the idea of retro terminal entertainment
