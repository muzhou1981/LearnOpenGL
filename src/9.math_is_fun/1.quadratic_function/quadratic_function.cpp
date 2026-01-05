#include "quadratic_function.h"

// 生成二次函数的顶点数据
std::vector<float> generateQuadraticVertices(float a, float b, float c, float minX, float maxX, float step) {
    std::vector<float> vertices;
    for (float x = minX; x <= maxX; x += step) {
        float y = a * x * x + b * x + c;
        vertices.push_back(x);
        vertices.push_back(y);
        vertices.push_back(0.0f); // z 坐标为 0
    }
    return vertices;
}

// 生成 x 轴和 y 轴的顶点数据（包含坐标点）
std::vector<float> generateAxesVerticesWithPoints(float minX, float maxX, float minY, float maxY, float step) {
    std::vector<float> vertices;

    // x 轴顶点数据
    vertices.push_back(minX); vertices.push_back(0.0f); vertices.push_back(0.0f); // 起点
    vertices.push_back(maxX); vertices.push_back(0.0f); vertices.push_back(0.0f); // 终点

    // y 轴顶点数据
    vertices.push_back(0.0f); vertices.push_back(minY); vertices.push_back(0.0f); // 起点
    vertices.push_back(0.0f); vertices.push_back(maxY); vertices.push_back(0.0f); // 终点

    // 添加 x 轴上的坐标点
    for (float x = minX; x <= maxX; x += step) {
        vertices.push_back(x); vertices.push_back(-0.02f); vertices.push_back(0.0f); // 坐标点下方
        vertices.push_back(x); vertices.push_back(0.02f); vertices.push_back(0.0f);  // 坐标点上方
    }

    // 添加 y 轴上的坐标点
    for (float y = minY; y <= maxY; y += step) {
        vertices.push_back(-0.02f); vertices.push_back(y); vertices.push_back(0.0f); // 坐标点左侧
        vertices.push_back(0.02f); vertices.push_back(y); vertices.push_back(0.0f);  // 坐标点右侧
    }

    return vertices;
}