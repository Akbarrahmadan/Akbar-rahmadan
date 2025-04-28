#include <iostream>
using namespace std;

int main() {
    int batas;

    // Input
    cout << "Masukkan batas bilangan: ";
    cin >> batas;

    cout << "\nBilangan Genap:\n";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << "\n\nBilangan Ganjil:\n";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

