#include <iostream>

#include "point.hpp"
#include "line.hpp"

int main(int argc, char const *argv[]) {
  Point p1(5, 5), p2(10, 10);
  Line l(p1, p2);

  std::cout << "Line endpoints: ";
  std::cout << "(" << l.get_p1().get_x() << ", " << l.get_p1().get_y() << "), ";
  std::cout << "(" << l.get_p2().get_x() << ", " << l.get_p2().get_y() << ")";
  std::cout << std::endl;

  /*
   * Why does this not move the line's endpoints?
   */
  std::cout << std::endl << "Trying to move endpoints..." << std::endl;
  l.get_p1().translate(-5, -5);
  l.get_p2().translate(5, 5);

  std::cout << std::endl << "Line endpoints: ";
  std::cout << "(" << l.get_p1().get_x() << ", " << l.get_p1().get_y() << "), ";
  std::cout << "(" << l.get_p2().get_x() << ", " << l.get_p2().get_y() << ")";
  std::cout << std::endl;

  return 0;
}
