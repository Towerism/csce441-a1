#include "hexagon.h"

// draw a w by h octogon with x, y coordinates being the top left
// corner of an imaginary encompassing square
// delta is the distance from any vertex to the nearest corner of an
// imaginary encompassing square
void drawHexagon(GLint x, GLint y, GLint w, GLint h, GLint delta, bool isRainbow) {
  // the x value that the diagonals meet up at
  GLint meetup = y - (h / 2);

  // draw the diagonals, possibly coloring each line a different color
  maybeColor(1.0, 1.0, 1.0, isRainbow); // white
  drawLine(x, meetup, x + delta, 10);

  maybeColor(0.0, 1.0, 0.0, isRainbow); // green
  drawLine(x, meetup, x + delta, 190);

  maybeColor(0.4, 0.1, 0.8, isRainbow); // purple
  drawLine(x + w - delta, y - h, x + w, meetup); 

  maybeColor(1.0, 1.0, 0.0, isRainbow); // yellow
  drawLine(x + w - delta, y, x + w, meetup); 

  // connect the horizontals, possibly coloring each line a different color
  maybeColor(1.0, 0.5, 0.1, isRainbow); // orange
  drawLine(x + delta, y - h, x + w - delta, y - h); 

  maybeColor(0.4, 0.2, 0.05, isRainbow); // brown
  drawLine(x + delta, y, x + w - delta, y); 
}

void maybeColor(GLfloat red, GLfloat green, GLfloat blue, bool pred) {
  if (pred)
    glColor3f(red, green, blue);
}

void drawLine(GLint x1, GLint y1, GLint x2, GLint y2) {
  glBegin(GL_LINES);
  glVertex2i(x1, y1); // Specify line segment geometry
  glVertex2i(x2, y2);
  glEnd();
}
