#include <iostream>

using namespace std;

double converterFahrenheitParaCelsius(double fahrenheit) {
    return 5.0 / 9.0 * (fahrenheit - 32);
}

int main() {
    cout << "Conversao de Fahrenheit para Celsius:\n";
    for (double fahrenheit = 0; fahrenheit <= 100; fahrenheit += 10) {
        double celsius = converterFahrenheitParaCelsius(fahrenheit);
        cout << fahrenheit << " F = " << celsius << " C\n";
    }

    return 0;
}
