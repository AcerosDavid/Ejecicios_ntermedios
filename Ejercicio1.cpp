#include <iostream>

using namespace std;

int main() {
    int minutosAtleta1, segundosAtleta1, minutosAtleta2, segundosAtleta2;

    cout << "Ingresa los minutos del primer atleta: ";
    cin >> minutosAtleta1;
    cout << "Ingresa los segundos del primer atleta: ";
    cin >> segundosAtleta1;

    cout << "Ingresa los minutos del segundo atleta: ";
    cin >> minutosAtleta2;
    cout << "Ingresa los segundos del segundo atleta: ";
    cin >> segundosAtleta2;

    int totalMinutos = minutosAtleta1 + minutosAtleta2;
    int totalSegundos = segundosAtleta1 + segundosAtleta2;

    if (totalSegundos >= 60) {
        totalMinutos += totalSegundos / 60;
        totalSegundos %= 60;
    }

    int horas = totalMinutos / 60;
    totalMinutos %= 60;
    
    cout << "Tiempo total: " << horas << " horas, " << totalMinutos << " minutos, " << totalSegundos << " segundos" << endl;

    return 0;
}
