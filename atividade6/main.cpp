#include <iostream>

double calcularPesoIdeal(double altura, char sexo) {
    if (sexo == 'M' || sexo == 'm') {
        return 72.7 * altura - 58.0;
    } else if (sexo == 'F' || sexo == 'f') {
        return 62.1 * altura - 44.7;
    } else {
        std::cout << "Sexo invalido." << std::endl;
        return -1;
    }
}

int main() {
    double altura;
    char sexo;

    std::cout << "Digite a altura (em metros): ";
    std::cin >> altura;

    std::cout << "Digite o sexo (M para masculino, F para feminino): ";
    std::cin >> sexo;

    double pesoIdeal = calcularPesoIdeal(altura, sexo);

    if (pesoIdeal != -1) {
        std::cout << "O peso ideal e: " << pesoIdeal << " kg" << std::endl;
    }

    return 0;
}