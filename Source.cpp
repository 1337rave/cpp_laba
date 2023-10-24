#include <iostream>
using namespace std;

int main() {
    double length, width, height, volume;

    cout << "Volume calculation for a parallelepiped." << endl;
    cout << "Enter input data:" << endl;

    cout << "Length (cm) -> ";
    cin >> length;

    cout << "Width (cm) -> ";
    cin >> width;

    cout << "Height (cm) -> ";
    cin >> height;

    volume = length * width * height;

    cout << "Volume: " << volume << " cubic cm." << endl;

    return 0;
}
