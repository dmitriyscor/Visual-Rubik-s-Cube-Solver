# Visual-Rubik-s-Cube-Solver


This project uses **OpenCV 4.2** for computer vision to process and solve a Rubik’s Cube visually.  
If you want to build and run this project on your own machine, you need to set up OpenCV properly in Visual Studio.

## Requirements
- Visual Studio (tested on VS 2019 or later)  
- OpenCV 4.2 (download from the official OpenCV release page)

## Setup Instructions
After installing OpenCV 4.2, make sure to update your project settings in Visual Studio:

### C/C++ Configuration
- **General → Additional Include Directories**  
C:\user_data\Visual Rubik's Cube Solver\OpenCV\opencv\build\include


### Linker Configuration
- **General → Additional Library Directories**  
C:\user_data\Visual Rubik's Cube Solver\OpenCV\opencv\build\include

- **Input → Additional Dependencies**  
opencv_world4120.lib

undefined