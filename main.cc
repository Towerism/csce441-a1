//  Copyright 2016 Martin Fracker, Jr.
//  All Rights Reserved.
// 
//  This project is free software, released under the terms
//  of the GNU General Public License v3. Please see the
//  file LICENSE in the root directory or visit
//  www.gnu.org/licenses/gpl-3.0.en.html for license terms.

#include <GL/glut.h>

#include "hexagon.hh"

void init () {
  glClearColor(0.0, 0.0, 0.0, 0.0); // Set display-window color to white

  glMatrixMode(GL_PROJECTION); //Set projection parameters
  gluOrtho2D(0.0, 400.0, 0.0, 200.0);
}

void lineSegments() {
  glClear(GL_COLOR_BUFFER_BIT); // Clear display window

  // draw a rainbow colored 190x180 octogon at coordinates (110, 190)
  // with a delta of 45 
  std::array<ColorSetter, 6> colors = {
    ColorSetter(1.0, 1.0, 1.0), // white
    ColorSetter(0.0, 1.0, 0.0), // green
    ColorSetter(0.4, 0.1, 0.8), // purple
    ColorSetter(1.0, 1.0, 0.0), // yellow
    ColorSetter(1.0, 0.5, 0.1), // orange
    ColorSetter(0.4, 0.2, 0.05) // brown
  };
  drawHexagon(110, 185, 190, 170, 48, colors);

  glFlush(); // Process all OpenGL routines as quickly as possible
}

int main(int argc, char** argv) {
  glutInit(&argc, argv); // Initialize glut
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode
  glutInitWindowPosition(50, 100); // Set top left display window position
  glutInitWindowSize(400, 200); // Set display window width and height
  glutCreateWindow("Martin Fracker - Assignment 1"); // Create display window

  init(); // Execute init function
  glutDisplayFunc(lineSegments); // Send graphics to display window
  glutMainLoop(); // Display everything and wait.
}
