include_directories(
        include
        ../../include
)

set(heat-equation-calc-SRC
        src/HeatEquation.cpp
        src/Derivative.cpp
        src/MatUtil.cpp)

add_library(heat-equation-calc ${heat-equation-calc-SRC})
