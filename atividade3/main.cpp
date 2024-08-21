#include <iostream>

using namespace std;

int calcularAnosParaCrescimento(double populacaoA, double taxaA, double populacaoB, double taxaB) {
    int anos = 0;
    while (populacaoA < populacaoB) {
        populacaoA += populacaoA * taxaA / 100;
        populacaoB += populacaoB * taxaB / 100;
        anos++;
    }
    return anos;
}

int main() {
    double populacaoA = 90000000;
    double taxaA = 3;

    double populacaoB = 200000000;
    double taxaB = 1.5; 

    int anos = calcularAnosParaCrescimento(populacaoA, taxaA, populacaoB, taxaB);
    cout << "Numero de anos necessarios para que a populacao do pais A ultrapasse ou iguale a do pais B: " << anos << endl;

    return 0;
}
