#include "line.hpp"
#include "point.hpp"

Line::Line(Point p1, Point p2) : p1(p1), p2(p2) {}

Point Line::get_p1() {
  return this->p1;
}

Point Line::get_p2() {
  return this->p2;
}
