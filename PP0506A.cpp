#include <math.h>
#include <string>
#include <iostream>

using namespace std;

struct Point {
    string name;
    short x, y;

    float getDistanceFromOrigin() {
        return sqrt(x * x + y * y);
    }
};

void sortPoints(Point *points, int numberOfPints) {
    Point tmpPoint;
    int lowestDistanceIndex;
    int greatestDistanceIndex;
    float lowestDistanceValue;
    float greatestDistanceValue;
    for (int i = 0; i < numberOfPints; ++i) {
        for (int j = 0; j < numberOfPints - 1; ++j) {
            if(points[j].getDistanceFromOrigin() > points[j+1].getDistanceFromOrigin())
                swap(points[j], points[j+1]);
        }
    }
}

int main() {
    string temp;
    int numberOfTests;
    int numberOfPoints;
    Point *points;

    cin >> numberOfTests;
    for (int i = 0; i < numberOfTests; ++i) {
        cin >> numberOfPoints;
        points = new Point[numberOfPoints];
        for (int j = 0; j < numberOfPoints; ++j) {
            cin >> points[j].name;
            cin >> points[j].x;
            cin >> points[j].y;
        }
        sortPoints(points, numberOfPoints);
        for (int k = 0; k < numberOfPoints; ++k) {
            cout << points[k].name << " "
                              << points[k].x << " " << points[k].y << endl;
        }
        getline(cin, temp);
    }
    cin >> temp;
    return 0;
}