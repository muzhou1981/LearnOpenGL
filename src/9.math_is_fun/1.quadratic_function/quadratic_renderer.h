#ifndef QUADRATIC_RENDERER_H
#define QUADRATIC_RENDERER_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <vector>

// 初始化 OpenGL 和 GLFW
bool initOpenGL(GLFWwindow*& window, int width, int height, const char* title);

// 渲染二次函数
void renderQuadraticFunction(const std::vector<float>& vertices);

#endif // QUADRATIC_RENDERER_H