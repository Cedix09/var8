#pragma once

class DistanceCalculator {
public:
    void printDistanceInfo(double x1, double y1, double x2, double y2, double distance);
    double getDeltaX(double x2, double x1);
    double getDeltaY(double y2, double y1);
    double calculateDistance(double x1, double y1, double x2, double y2);
    double calculateManhattanDistance(double x1, double y1, double x2, double y2);
};
