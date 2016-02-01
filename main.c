#include <GL/glut.h>

void init () {
  glClearColor(0.0, 0.0, 0.0, 0.0); // Set display-window color to white

  glMatrixMode(GL_PROJECTION); //Set projection parameters
  gluOrtho2D(0.0, 400.0, 0.0, 200.0);
}

void drawLine(GLint x1, GLint y1, GLint x2, GLint y2) {
  glBegin(GL_LINES);
  glVertex2i(x1, y1); // Specify line segment geometry
  glVertex2i(x2, y2);
  glEnd();
}

void lineSegments() {
  glClear(GL_COLOR_BUFFER_BIT); // Clear display window

  glColor3f(0.0, 0.4, 0.2); // Set line segment color to green

  drawLine(0, 0, 400, 200); // Draw line from bottom left to top right
  drawLine(0, 200, 400, 0); // Draw line from top left to bottom right
  drawLine(0, 100, 400, 100); // Draw a middle horizontal line
  drawLine(200, 0, 200, 200); // Draw a middle vertical line

  glFlush(); // Process all OpenGL routines as quickly as possible
}

void main(int argc, char** argv) {
  glutInit(&argc, argv); // Initialize glut
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode
  glutInitWindowPosition(50, 100); // Set top left display window position
  glutInitWindowSize(400, 200); // Set display window width and height
  glutCreateWindow("An Example OpenGL Program"); // Create display window

  init(); // Execute init function
  glutDisplayFunc(lineSegments); // Send graphics to display window
  glutMainLoop(); // Display everything and wait.
}
