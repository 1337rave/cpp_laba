#include <iostream>
using namespace std;

int main() {
    int grivnas, kopiykas;

    cout << "Enter the amount of grivnas: ";
    cin >> grivnas;
    cout << "Enter the amount of kopiykas: ";
    cin >> kopiykas;

    if (kopiykas >= 100) {
        grivnas += kopiykas / 100;
        kopiykas %= 100;
    }

    cout << "Corrected amount: " << grivnas << " hryvnas " << kopiykas << " kopecks." << endl;

    return 0;
}
