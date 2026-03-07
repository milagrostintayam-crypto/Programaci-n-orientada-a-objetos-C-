#include <iostream>
#include <cstring>

using namespace std;

class computer{

    private: 

    public:
    // atributos
        char modelo [20];
        int año;
        char sistemoperativo[20];
        char Almacenamiento[20];

    // metodos
        void Almacenar () {
            cout<<Almacenamiento<<"BYTES"<< endl;
        }
    };

int main() {

    computer miComputadora; // creamos un objeto
    computer ComputadoraY; // creamos otro objeto

    //Asinacion de los valores a los atributos del objeto
    strcpy(miComputadora.sistemoperativo, "Windows");
    strcpy(ComputadoraY.sistemoperativo, "Windows");
    strcpy(miComputadora.modelo, "HP");
    strcpy(ComputadoraY.modelo, "Dell");
    miComputadora.año = 2020; // asignamos un valor
    strcpy(miComputadora.Almacenamiento, "12");

    cout << "Modelo: " << miComputadora.modelo << endl; // accedemos al atributo modelo del objeto miComputadora
    cout <<"Sistema:" << ComputadoraY.sistemoperativo << endl; 
    cout << "Almacenando: "<<endl;
    miComputadora.Almacenar();

    return 0;
}