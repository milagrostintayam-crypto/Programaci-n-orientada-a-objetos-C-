#include <iostream>
using namespace std;

int main() {

    int Multiplicando = 1;
    int Multiplicador = 1;

    cout<<"Bienvenido"<<endl;
    cout<<"Ingrese el numero que desea multiplicar: "<<endl;
    cin >> Multiplicador;

    for (Multiplicando = 1; Multiplicando <= 12; Multiplicando++) {
            cout << Multiplicando * Multiplicador << endl;
            if (Multiplicando >= 12) {
                cout << "Fin de la operacion" << endl;
            }
        }
    
    return 0;
}   