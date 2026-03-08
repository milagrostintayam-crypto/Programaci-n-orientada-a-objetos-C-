#include <iostream>
#include <cstring>

using namespace std;

class CuentadeBanco {
    private:
    // atributos
        char Clave [100];
        int Saldo;


    // metodos


    public:
    // atributos
        char IdentUser [50];
        

    // metodos
        void Acceso () {
            for (int i = 0; i < 3; i++) {
                cout<<IdentUser<<" Ingrese su contraseña "<< endl;
                cin>>Clave;
                if ( Clave == "1234") {
                    cout<<Clave<<" Acceso concedido. "<< endl;
                } else if ( Clave != "1234") {
                    if ( i == 2 ) {
                        cout<<"Acceso limite; vuelva mañana" <<endl;
                        continue;
                    } 
                    cout<<" Clave Incorrecta; vuelva a intentarlo. "<< endl;
                } 
            }
            }
};

class cuentaCredito : public CuentadeBanco {
    private:
    // atributos
        int CreditoMax;

    // metodos
        void  () {
            cout<<"El limite de credito es: "<<CreditoMax<<" SOLES."<< endl;
        }
    public:
        // atributos    

};




int main() {

    cuentaCredito CuentDiana; // creamos un objeto
    cuentaCredito CuentMaria; // creamos otro objeto

    //Asinacion de los valores a los atributos del objeto
    cout<<"Bienvenido"<<endl;
    cout<<"Ingrese su nombre de usuario: "<<endl;
    strcpy(CuentDiana.IdentUser, "Diana"); // asignamos un valor
    CuentDiana.Acceso();
    

    return 0;
}