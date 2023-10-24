#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

int main() {
    double radius, volume;

    cout << "Sphere Volume Calculation." << endl;
    cout << "Enter the radius of the sphere (in centimeters): ";
    cin >> radius;

    if (radius < 0) {
        cout << "The radius cannot be negative. Please enter a non-negative value." << endl;
        return 1;
    }

    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    cout << "The volume of the sphere is " << volume << " cubic centimeters." << endl;

    return 0;
}
