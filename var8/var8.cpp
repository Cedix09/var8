#include <iostream>
#include <cmath>
#include "var8.h"

using namespace std;


void DistanceCalculator::printDistanceInfo(double x1, double y1, double x2, double y2, double distance)
{
    cout << "Точка 1: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Точка 2: (" << x2 << ", " << y2 << ")" << endl;
    cout << "Расстояние: " << distance << endl;
}

double DistanceCalculator::calculateDistance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = sqrt(dx * dx + dy * dy);

    printDistanceInfo(x1, y1, x2, y2, distance);

    return distance;
}

double DistanceCalculator::calculateManhattanDistance(double x1, double y1, double x2, double y2) {
    double dx = abs(x2 - x1);
    double dy = abs(y2 - y1);
    double distance = dx + dy;

    cout << "Манхэттенское расстояние: " << distance << endl;

    return distance;
}

int main() {
    setlocale(LC_ALL, "Russian");
    DistanceCalculator calc;

    calc.calculateDistance(0, 0, 3, 4);
    calc.calculateManhattanDistance(0, 0, 3, 4);

    return 0;
}
