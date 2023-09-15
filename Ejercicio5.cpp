#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> distancias = {50, 55, 57, 58, 60};
    int t = 174;
    int maxSum = 0;
    vector<int> pueblosElegidos;

    sort(distancias.begin(), distancias.end(), greater<int>());

    for (int i = 0; i < distancias.size() - 2; ++i) {
        for (int j = i + 1; j < distancias.size() - 1; ++j) {
            for (int k = j + 1; k < distancias.size(); ++k) {
                int suma = distancias[i] + distancias[j] + distancias[k];
                if (suma <= t && suma > maxSum) {
                    maxSum = suma;
                    pueblosElegidos = {distancias[i], distancias[j], distancias[k]};
                }
            }
        }
    }

    if (pueblosElegidos.size() == 3) {
        cout << "Las distancias elegidas son: " << pueblosElegidos[0] << ", " << pueblosElegidos[1] << ", " << pueblosElegidos[2] << endl;
        cout << "La suma de las distancias es: " << maxSum << " millas" << endl;
    } else {
        cout << "No se encontraron tres distancias que cumplan con las condiciones." << endl;
    }

    return 0;
}
