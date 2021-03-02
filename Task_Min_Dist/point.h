#pragma once
#include <cmath>
#include <string>
using std::string;

class point
{
private:
    double _x;
    double _y;
public:
    point();
    point(double value);
    point(double x, double y);
    double distance_to_point(point _point);
    string get_point_as_string() const;
};

//point(const point& p) : point(p._x, p._y) {}
//^это конструктор копировани€, его объ€вление необ€зательно, так как компил€тор сам создает его