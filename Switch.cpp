#include <iostream>
using namespace std;

 int menu ();
 int Ingreso_de_Datos ();
 int Indicador_de_variables ();

int main() {

    int Result;
    int Salir;
    int opc;
    int cant = 0;
    int suma = 0;
    int multiplicacion = 1;
    int i;
    int j;
    int valor[cant];

    bool condicion = true;
    int Dat1 ;
    int Dat2 ;
    
    bool valorcorrecto;

    do
    {
        opc = menu();
        
    switch (opc)

    {
        case 1:
            cant = Indicador_de_variables();
            for ( i=0; i < cant; i++) {
                cout <<"Ingrese el "<< i+1 << "valor: "<<endl;
                cin>>valor[i];
            }
            for ( j = 0; j < cant; j++) {
                suma += valor[j];
                if (j == cant - 1) {
                    cout << "La suma es: " << suma << endl;
                }
            }
            break;

        case 2:
            Dat1 = Ingreso_de_Datos();
            Dat2 = Ingreso_de_Datos();
            cout<<" El primer ingresado es: "<<Dat1<<endl;
            cout<<" El segundo ingresado es: "<<Dat2<<endl;
            
            Result = Dat1 - Dat2;
            cout<<"La resta es: "<< Result<<endl;
            break;

        case 3:
            cant = Indicador_de_variables();
            for ( i=0; i < cant; i++) {
                cout <<"Ingrese el "<< i+1 << "valor: "<<endl;
                cin>>valor[i];
            }
            for ( j = 0; j < cant; j++) {
                multiplicacion *= valor[j];
                if (j == cant - 1) {
                    cout << "La multiplicacion es: " << multiplicacion << endl;
                }
            } 
            break;
        
        case 4:
            Dat1 = Ingreso_de_Datos();
            Dat2 = Ingreso_de_Datos();
            cout<<" El primer ingresado es: "<<Dat1<<endl;
            cout<<" El segundo ingresado es: "<<Dat2<<endl;
    
            if (Dat2 != 0) {
                Result = Dat1 / Dat2;
                cout<< "La division es:"<< Result<<endl;
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
        cout<<"Gracias por trabajar con nosotros";

    return 0;
}

int menu () {
    int opciones;
    cout <<"Bienvenido"<< endl;
    cout <<"Ingrese su opcion"<<endl;
    cout <<"\n1: Suma\n2: Resta\n3: Multiplicacion\n4: Division\n5: Salir\n"<<endl;
    cin>>opciones;
    return opciones;
}

int Ingreso_de_Datos () {
    int datUser;
    cout <<"Ingrese su valor"<< endl;
    cin >> datUser;
    return datUser;
}

int Indicador_de_variables () {
    int cantidad;

    cout <<"Ingrese n° de variables que desea ingresar: "<<endl;
    cin >> cantidad;

    return cantidad;
}
