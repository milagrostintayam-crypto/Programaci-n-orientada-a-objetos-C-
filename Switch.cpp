#include <iostream>
using namespace std;

 int menu ();
 int Ingreso_Datos ();

int main() {

    int Result;
    int Salir;
    int opc;

    bool condicion = true;
    int Dat1;
    int Dat2;
    
    bool valorcorrecto;

    do
    {
        opc = menu();
        Dat1 = Ingreso_Datos();
        Dat1 = userDat1;
        Dat2 = userDat2;

        //cont --;
        //if ( cont == 0){ 
        //        condicion = false;
        //}
        //valorcorrecto = userDat1 > userDat2;
        //if ( valorcorrecto) {
        
    switch (opc)

    {
        case 1:
        Ingreso_Datos(Dat1, Dat2);
        Result = Dat1 + Dat2;
        cout<< Result<<endl;
        break;

        case 2:
        Ingreso_Datos(Dat1, Dat2);
        Result = Dat1 - Dat2;
        cout<< Result<<endl;
        break;

        case 3:
        Ingreso_Datos(Dat1, Dat2);
        Result = Dat1 * Dat2;
        cout<< Result<<endl;

        break;
        
        case 4:
        Ingreso_Datos(Dat1, Dat2);
        if (Dat2 != 0) {
        Result = Dat1 / Dat2;
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

int menu () {
    int opciones;

    cout <<"Bienvenido"<< endl;
        cout <<"Ingrese su opcion"<<endl;
        cout <<"1: Suma"<<endl;
        cout <<"2: Resta"<<endl;
        cout <<"3: Multiplicacion"<<endl;
        cout <<"4: Division"<<endl;
        cout <<"5: Salir"<<endl;
        cin>>opciones;
        return opciones;
}

int Ingreso_Datos () {
    int userDat1;
    int userDat2;

    cout <<"Ingrese su primer valor"<< endl;
        cin >> userDat1;
        cout <<"Ingrese su segundo valor"<< endl;
        cin >> userDat2;
        return userDat1;
}
