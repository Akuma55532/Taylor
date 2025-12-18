include(FetchContent)

FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG        10.2.1
)

FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG        3.4
)

FetchContent_MakeAvailable(fmt glfw)

find_package(OpenGL REQUIRED)

add_executable(${PROJECT_NAME} Taylor.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt glfw opengl32)

add_executable(tesa test/test.cpp)
target_link_libraries(tesa PRIVATE fmt::fmt glfw opengl32)