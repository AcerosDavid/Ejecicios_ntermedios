#include <iostream>

using namespace std;

int main() {
    int numHijos, numHijosEscolar, estadoCivil;
    double montoSubsidio = 0.0;

    cout << "Ingresa el número de hijos: ";
    cin >> numHijos;

    cout << "Ingresa el número de hijos en edad escolar entre 6 y 18 años: ";
    cin >> numHijosEscolar;

    cout << "Ingresa el estado civil de la madre (0) si escasada  (1) si es viuda";
    cin >> estadoCivil;

    if (numHijos <= 2) {
        montoSubsidio = 70.00;
    } else if (numHijos >= 3 && numHijos <= 5) {
        montoSubsidio = 90.00;
    } else if (numHijos >= 6) {
        montoSubsidio = 120.00;
    }

    montoSubsidio += numHijosEscolar * 10.00;

    if (estadoCivil == 1) {
        montoSubsidio += 20.00;
    }
    cout << "El monto mensual del subsidio es: S/. " << montoSubsidio << endl;

    return 0;
}
