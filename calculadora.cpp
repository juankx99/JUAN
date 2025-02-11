#include <iostream>

using namespace std;

void mostrarMenu() {
    cout << "Calculadora en C++" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicación" << endl;
    cout << "4. División" << endl;
    cout << "5. Salir" << endl;
    cout << "Seleccione una opción: ";
}

int main() {
    int opcion;
    double num1, num2, resultado;
    
    do {
        mostrarMenu();
        cin >> opcion;
        
        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el primer número: ";
            cin >> num1;
            cout << "Ingrese el segundo número: ";
            cin >> num2;
        }

        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case 2:
                resultado = num1 - num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case 3:
                resultado = num1 * num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "Resultado: " << resultado << endl;
                } else {
                    cout << "Error: No se puede dividir por cero." << endl;
                }
                break;
            case 5:
                cout << "Saliendo de la calculadora..." << endl;
                break;
            default:
                cout << "Opción no válida, intente de nuevo." << endl;
        }
        cout << endl;
    } while (opcion != 5);
    
    return 0;
}