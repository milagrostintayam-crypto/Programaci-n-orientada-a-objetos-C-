#include <iostream>
using namespace std;

int main() {

    int userDat1;
    int userDat2;
    int Result;
    int opciones;
    int Salir;
    int valor = opciones;

    bool condicion = true;

    //int cont = 3;
    bool valorcorrecto;

    do
    {
        cout <<"Bienvenido"<< endl;
        cout <<"Ingrese su opcion"<<endl;
        cout <<"1: Suma"<<endl;
        cout <<"2: Resta"<<endl;
        cout <<"3: Multiplicacion"<<endl;
        cout <<"4: Division"<<endl;
        cout <<"5: Salir"<<endl;
        cin >> opciones;

        cout <<"Ingrese su primer valor"<< endl;
        cin >> userDat1;
        cout <<"Ingrese su segundo valor"<< endl;
        cin >> userDat2;

        //cont --;
        //if ( cont == 0){ 
        //        condicion = false;
        //}

        //valorcorrecto = userDat1 > userDat2;

        //if ( valorcorrecto) {
        
    switch (opciones)

    {
        case 1:
        Result = userDat1 + userDat2;
        cout<< Result<<endl;
        break;

        case 2:
        Result = userDat1 - userDat2;
        cout<< Result<<endl;
        break;

        case 3:
        Result = userDat1 * userDat2;
        cout<< Result<<endl;

        break;
        
        case 4:
        if (userDat2 != 0) {
        Result = userDat1 / userDat2;
        cout<< Result<<endl;
        }
        else {
            cout <<"Valor incorrecto; el dato debe ser mayor a 0";
        }    
        break;

        case 5: 
            cout<<"Saliendo..."<<endl;
            condicion = false;
        break;

        default:
        cout<<"Operacion errada";
            break;

    }

    } while (condicion);
        cout<<"Gracias por trabajar con nostros";

    return 0;
}