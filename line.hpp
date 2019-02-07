#ifndef __LINE_HPP
#define __LINE_HPP

#include "point.hpp"

class Line {
private:
  Point p1;
  Point p2;
public:
  Line(Point p1, Point p2);
  Point get_p1();
  Point get_p2();
};

#endif
