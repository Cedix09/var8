#pragma once

class DistanceCalculator {
public:
    void printDistanceInfo(double x1, double y1, double x2, double y2, double distance);
    double calculateDistance(double x1, double y1, double x2, double y2);
    double calculateManhattanDistance(double x1, double y1, double x2, double y2);
};
