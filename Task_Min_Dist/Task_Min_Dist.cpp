#include "point.h"
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int amount;
    cout << "Введите количество точек:\t";
    cin >> amount;
    point* points = new point[amount];
    for (int i = 0; i < amount; i++) {
        double x, y;
        cin >> x >> y;
        points[i] = point(x, y);
    }
    for (int i = 0; i < amount; i++) {
        cout << points[i].get_point_as_string() << " ";
    }
    cout << endl;
    int min_f = 0, min_s = 1;
    for (int i = 0; i < amount; i++)
    {
        for (int j = i + 1; j < amount; j++)
        {
            double dist = points[i].distance_to_point(points[j]);
            double old_dist = points[min_f].distance_to_point(points[min_s]);
            if (dist < old_dist) {
                min_f = i;
                min_s = j;
            }
        }
    }
    cout << "Minimal distance: " << points[min_f].get_point_as_string() <<
        " " << points[min_s].get_point_as_string() << endl;
    delete[] points;
    return 0;
}