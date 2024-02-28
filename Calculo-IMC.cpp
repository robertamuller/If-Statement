#include <iostream>

using std::cout;
using std::cin;

int main()
{
    float m, a, imc;

    cout << "Digite seu peso (kg): ";
    cin >> m;

    cout << "Digite sua altura (m): ";
    cin >> a;

    imc = m / (a*a);

    cout << "Seu IMC é " << imc << ". Classificação: ";

    if (imc < 17) {
        cout << "Muito abaixo do peso\n";
    }

    else if (imc < 18.5) {
        cout << "Abaixo do peso\n";
    }

    else if (imc < 25) {
        cout << "Peso normal\n";
    }

    else if (imc < 30) {
        cout << "Acima do peso\n";
    }

    else if (imc < 35) {
        cout << "Obesidade\n";
    }

    else if (imc < 40) {
        cout << "Obesidade severa\n";
    }

    else {
        std::cout << "Obesidade mórbida\n";
    }
}