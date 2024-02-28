#include <iostream>

using std::cout;
using std::cin;

int main() {

    int year;

    cout << "Digite um ano: ";
    cin >> year;

    if (year % 400 == 0) {
        cout << "O ano " << year << " é bissexto.";
    }

    else if (year % 100 == 0) {
        cout << "O ano " << year << " é bissexto.";
    }

    else if (year % 4 == 0) {
        cout << "O ano " << year << " é bissexto.";
    }

    else {
        cout << "O ano " << year << " não é bissexto.";
    }
}