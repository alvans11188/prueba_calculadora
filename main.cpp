#include <iostream>
#include "suma.h"
#include "resta.h"
#include "multiplicacion.h"

using namespace std;

int main() {
	int a,b;
	cout << "Ingrese los valores con los que desea realizar las operaciones" << endl;
	cin >> a;
	cin >> b;
    cout << "Suma: " << suma(a, b) << endl;
    cout << "Resta: " << resta(a, b) << endl;
    cout << "Multiplicacion: " << multiplicacion(a, b) << endl;
    return 0;
}
