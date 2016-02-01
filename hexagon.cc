#include "hexagon.hh"

#include "colorSetter.hh"

void drawHexagon(GLint x, GLint y, GLint w, GLint h, GLint delta,
                 std::array<ColorSetter, 6> colors) {
  // the x value that the diagonals meet up at
  // on the left and right sides of the hexagon
  GLint meetup = y - (h / 2);

  // draw the diagonals
  drawLine(x, meetup, x + delta, 10, colors[0]); // white
  drawLine(x, meetup, x + delta, 190, colors[1]); // green
  drawLine(x + w - delta, y - h, x + w, meetup, colors[2]); // purple
  drawLine(x + w - delta, y, x + w, meetup, colors[3]); // yellow

  // draw the horizontals
  drawLine(x + delta, y - h, x + w - delta, y - h, colors[4]); // orange
  drawLine(x + delta, y, x + w - delta, y, colors[5]); // brown
}

void drawLine(GLint x1, GLint y1, GLint x2, GLint y2, ColorSetter color) {
  color(); // set the color by calling the function object
  glBegin(GL_LINES);
  glVertex2i(x1, y1); // Specify line segment geometry
  glVertex2i(x2, y2);
  glEnd();
}
