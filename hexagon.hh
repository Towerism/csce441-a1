#pragma once  

#include <array>
#include <GL/glut.h>

#include "colorSetter.hh"

void drawHexagon(GLint x, GLint y, GLint w, GLint h, GLint delta,
                 std::array<ColorSetter, 6> colors);
void drawLine(GLint x1, GLint y1, GLint x2, GLint y2, ColorSetter color);
