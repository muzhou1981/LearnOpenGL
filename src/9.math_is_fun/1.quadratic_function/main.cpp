#include "quadratic_renderer.h"
#include "quadratic_function.h"
#include "text_renderer.h"
#include <iostream>

void processInput(GLFWwindow* window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

int main() {
    GLFWwindow* window;
    if (!initOpenGL(window, 800, 600, "Quadratic Function with Axes and Labels")) {
        return -1;
    }

    if (!initTextRenderer()) {
        return -1;
    }

    // 生成二次函数顶点数据
    float a = 1.0f, b = 0.5f, c = 0.0f;
    auto quadraticVertices = generateQuadraticVertices(a, b, c, -1.0f, 1.0f, 0.01f);

    // 生成 x 轴和 y 轴顶点数据（包含坐标点）
    auto axesVertices = generateAxesVerticesWithPoints(-1.0f, 1.0f, -1.0f, 1.0f, 0.2f);

    while (!glfwWindowShouldClose(window)) {
        processInput(window);

        glClearColor(0.9f, 0.9f, 0.9f, 1.0f); // 浅灰色背景
        glClear(GL_COLOR_BUFFER_BIT);

        // 绘制 x 轴和 y 轴（包含坐标点）
        renderQuadraticFunction(axesVertices);

        // 绘制二次函数
        renderQuadraticFunction(quadraticVertices);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}