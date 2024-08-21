#include <iostream>
#include <string>

void categorizarNadador(int idade) {
    std::string categoria;

    if (idade >= 5 && idade <= 7) {
        categoria = "Infantil A";
    } else if (idade >= 8 && idade <= 10) {
        categoria = "Infantil B";
    } else if (idade >= 11 && idade <= 13) {
        categoria = "Juvenil A";
    } else if (idade >= 14 && idade <= 17) {
        categoria = "Juvenil B";
    } else if (idade >= 18) {
        categoria = "Adulto";
    } else {
        categoria = "Idade fora da faixa permitida";
    }

    std::cout << "A categoria do nadador e: " << categoria << std::endl;
}

int main() {
    int idade;

    std::cout << "Digite a idade do nadador: ";
    std::cin >> idade;

    categorizarNadador(idade);

    return 0;
}