#include <GL/glut.h>

#include "hexagon.h"

void init () {
  glClearColor(0.0, 0.0, 0.0, 0.0); // Set display-window color to white

  glMatrixMode(GL_PROJECTION); //Set projection parameters
  gluOrtho2D(0.0, 400.0, 0.0, 200.0);
}

void lineSegments() {
  glClear(GL_COLOR_BUFFER_BIT); // Clear display window
  glColor3f(0.0, 0.4, 0.2); // Set line segment color to green

  // draw a rainbow colored 190x180 octogon at coordinates (110, 190)
  // with a delta of 45 
  drawHexagon(110, 190, 190, 180, 48, true);

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
