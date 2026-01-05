#ifndef QUADRATIC_FUNCTION_H
#define QUADRATIC_FUNCTION_H

#include <vector>

// 生成二次函数的顶点数据
std::vector<float> generateQuadraticVertices(float a, float b, float c, float minX, float maxX, float step);

// 生成 x 轴和 y 轴的顶点数据
std::vector<float> generateAxesVerticesWithPoints(float minX, float maxX, float minY, float maxY, float step);

#endif // QUADRATIC_FUNCTION_H