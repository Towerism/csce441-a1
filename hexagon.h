#include <GL/glut.h>

void drawHexagon(GLint x, GLint y, GLint w, GLint h, GLint delta, bool isRainbow = false);
void maybeColor(GLfloat red, GLfloat green, GLfloat blue, bool pred);
void drawLine(GLint x1, GLint y1, GLint x2, GLint y2);