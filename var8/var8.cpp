#include <iostream>
#include <cmath>
using namespace std;

class DistanceCalculator {
public:
    double calculateDistance(double x1, double y1, double x2, double y2) {
        double dx = x2 - x1;
        double dy = y2 - y1;
        double distance = sqrt(dx * dx + dy * dy);

        cout << "Точка 1: (" << x1 << ", " << y1 << ")" << endl;
        cout << "Точка 2: (" << x2 << ", " << y2 << ")" << endl;
        cout << "Расстояние: " << distance << endl;

        return distance;
    }

    double calculateManhattanDistance(double x1, double y1, double x2, double y2) {
        double dx = abs(x2 - x1);
        double dy = abs(y2 - y1);
        double distance = dx + dy;

        cout << "Манхэттенское расстояние: " << distance << endl;

        return distance;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    DistanceCalculator calc;

    calc.calculateDistance(0, 0, 3, 4);
    calc.calculateManhattanDistance(0, 0, 3, 4);

    return 0;
}
