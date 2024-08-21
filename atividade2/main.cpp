#include <iostream>

using namespace std;

int encontrarMaior(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int main() {
    int a, b, c;

    cout << "Digite o primeiro valor: ";
    cin >> a;
    cout << "Digite o segundo valor: ";
    cin >> b;
    cout << "Digite o terceiro valor: ";
    cin >> c;

    int maior = encontrarMaior(a, b, c);
    cout << "O maior valor e: " << maior << endl;

    return 0;
}
