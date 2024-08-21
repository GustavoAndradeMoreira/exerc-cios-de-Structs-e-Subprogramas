#include <iostream>

using namespace std;

int idadeEmDias(int anos, int meses, int dias) {
    const double DIAS_POR_MES = 30.44;

    int totalDias = anos * 365 + meses * DIAS_POR_MES + dias;

    return static_cast<int>(totalDias);
}

int main() {
    int anos, meses, dias;

    cout << "Digite a idade em anos: ";
    cin >> anos;
    cout << "Digite a idade em meses: ";
    cin >> meses;
    cout << "Digite a idade em dias: ";
    cin >> dias;

    int totalDias = idadeEmDias(anos, meses, dias);

    cout << "A idade total em dias e: " << totalDias << " dias" << endl;

    return 0;
}
