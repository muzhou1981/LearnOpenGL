#ifndef TEXT_RENDERER_H
#define TEXT_RENDERER_H

#include <string>
#include <glm/glm.hpp>

// 初始化 FreeType 和文本渲染
bool initTextRenderer();

// 渲染文本
void renderText(const std::string& text, float x, float y, float scale, glm::vec3 color);

#endif // TEXT_RENDERER_H