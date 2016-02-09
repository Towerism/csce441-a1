//  Copyright 2016 Martin Fracker, Jr.
//  All Rights Reserved.
// 
//  This project is free software, released under the terms
//  of the GNU General Public License v3. Please see the
//  file LICENSE in the root directory or visit
//  www.gnu.org/licenses/gpl-3.0.en.html for license terms.

#pragma once

#include <GL/glut.h>

class ColorSetter {
public:
  ColorSetter(GLfloat red, GLfloat green, GLfloat blue)
    : red(red), green(green), blue(blue) { }

  void operator()() { glColor3f(red, green, blue); }

private:
  GLfloat red, green, blue;
};
