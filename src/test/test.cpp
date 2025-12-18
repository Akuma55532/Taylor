#include <GLFW/glfw3.h>
#include <iostream>

int main() {
    // 初始化 GLFW
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW\n";
        return -1;
    }

    // 设置 OpenGL 版本（可选，这里用默认）
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // 创建窗口
    GLFWwindow* window = glfwCreateWindow(800, 600, "GLFW Demo", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window\n";
        glfwTerminate();
        return -1;
    }

    // 设置当前上下文
    glfwMakeContextCurrent(window);

    // 主循环
    while (!glfwWindowShouldClose(window)) {
        // 清屏为红色
        glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // 交换缓冲区
        glfwSwapBuffers(window);

        // 处理事件
        glfwPollEvents();
    }

    // 清理
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}