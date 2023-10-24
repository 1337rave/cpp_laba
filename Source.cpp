#include <iostream>
using namespace std;

int main() {
    double scale, distance_cm, distance_km;

    cout << "Calculating distance between populated places." << endl;
    cout << "Enter input data:" << endl;

    cout << "Map scale (number of kilometers in one centimeter) -> ";
    cin >> scale;

    cout << "Distance between points representing populated places (cm) -> ";
    cin >> distance_cm;

    distance_km = distance_cm / scale;

    cout << "Distance between populated places: " << distance_km << " km." << endl;

    return 0;
}
