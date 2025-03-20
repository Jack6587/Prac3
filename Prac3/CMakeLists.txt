# CMakeList.txt : CMake project for Prac3, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Prac3 "Prac3.cpp" "Prac3.h" "Pie.h" "ApricotPie.h"  "ApplePie.h" "ApplePie.cpp" "RaspberryPie.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Prac3 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
