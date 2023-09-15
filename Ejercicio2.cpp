#include <iostream>

using namespace std;

int main() {
    double cantidadp, cantidadm;

    cout << "Ingresa la cantidad en pies: ";
    cin >> cantidadp;

    cout << "Ingresa la cantidad en metros: ";
    cin >> cantidadm;

    double sumaPulgadas = (cantidadp * 12) + (cantidadm / 0.0254);
    double sumaYardas = (cantidadp / 3) + (cantidadm / 0.9144);
    double sumaMetros = cantidadp * 0.3048 + cantidadm;
    double sumaMillas = (cantidadm / 1609) + (cantidadp / (12 * 5280.0));

    cout << "Suma en pulgadas: " << sumaPulgadas << " pulgadas" << endl;
    cout << "Suma en yardas: " << sumaYardas << " yardas" << endl;
    cout << "Suma en metros: " << sumaMetros << " metros" << endl;
    cout << "Suma en millas: " << sumaMillas << " millas" << endl;

    return 0;
}
