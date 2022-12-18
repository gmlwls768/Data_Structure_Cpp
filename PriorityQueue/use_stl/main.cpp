#include "header.h"
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    Point2D point2D;
    priority_queue<Point2D, vector<Point2D>, LeftRight> p;
    p.push(Point2D(8.5, 4.6));
    p.push(Point2D(1.3, 5.7));
    p.push(Point2D(2.5, 0.6));

    point2D = p.top();
    cout << point2D.getX() << " " << point2D.getY() << endl;
    p.pop();

    point2D = p.top();
    cout << point2D.getX() << " " << point2D.getY() << endl;
    p.pop();

    point2D = p.top();
    cout << point2D.getX() << " " << point2D.getY() << endl;
    p.pop();
}