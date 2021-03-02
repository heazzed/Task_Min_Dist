#include "point.h"

point::point(double x, double y) : _x(x), _y(y) {}
point::point(double value) : point(value, value) {}
point::point() : point(0) {}

double point::distance_to_point(point _point) {
    double dx = _x - _point._x;
    double dy = _y - _point._y;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

string point::get_point_as_string() const {
    string result = "(";
    result += std::to_string(_x) + ", " + std::to_string(_y) + ")";
    return result;
}