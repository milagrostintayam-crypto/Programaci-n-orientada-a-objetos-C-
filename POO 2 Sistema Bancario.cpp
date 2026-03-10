#include <iostream>
#include <string>

using namespace std;
int menu ();

class CuentadeBanco {
    private:
    // atributos
        string Clave = "1234";//El uso de encapsulamiento; proteger los datos imp.
        //string Titular;
        float Saldo = 0.00;//el saldo es un dato que no puede ser modificado por el usuario u otro por lo que debe de ser un dato private.

    public:
    // atributos
    string Titular;
    // metodos
        bool Acceso () { // while ; caso mas rappidos
            for (int i = 0; i < 3; i++) {
                cout<<Titular<<" ingrese su contraseña: "<< endl;
                cin>>Clave;
                if ( Clave == "1234" ) {
                    i = 3;
                    cout<<"Acceso concedido. "<< endl;
                    return true;
                } else {
                    if ( i == 2 ) {
                        cout<<"Acceso limite; vuelva mañana " <<endl;
                        continue;
                    } 
                    cout<<"Clave Incorrecta; vuelva a intentarlo. "<< endl;
                } 
            }
            return false;
        }

        void MostarSaldo () {
            cout<<Saldo<<endl;
        }

        void Depositardinero (float deposito) {// es un seter
            float setdinero = 0.00;
            
            Saldo += deposito; 
            cout<<Saldo<<" Saldo actual "<<endl;
        }

        void Retirardinero () {// es un geter
            float retiro;

            cout<<"Ingrese el monto"<<endl;//obs: numeros negativos no son validos; realizar una funcion de pedir monto
            cin>>retiro;
            if ( retiro <= Saldo) {
                Saldo -= retiro;
            } else {
                cout<<"Monto invalido"<<endl;
            }
        }
         
        void setSaldo (float Saldonuevo) {
            Saldo = Saldonuevo;
        }
        
        float getSaldo () {
            cout<<"Su saldo es: "<<Saldo<<endl;
            return Saldo;
        }

};

class cuentaCredito : public CuentadeBanco { // COMO USAR BIEN EL POLIMORFISMO; 
    private:
    // atributos
         int CreditoMax = 10000;

    public:
    // metodos
        virtual void Retirardinero() {
            float retiro;
            float Saldo = getSaldo();

            cout<<"Ingrese el monto"<<endl;
            cin>>retiro;

            if (retiro <= CreditoMax) {
                CreditoMax -= retiro;
            }
            cout<<CreditoMax<<endl;
        }
};



int main() {

    bool condicion;
    float Saldo;

    cuentaCredito CuentDiana; // creamos un objeto
    cuentaCredito CuentMaria; // creamos otro objeto

    cout<<" MENU BANCO"<<endl;
    cout<<" Ingrese su nombre de usuario: "<<endl;
    CuentDiana.Titular = "Diana"; // asignamos un valor
    cin>>CuentDiana.Titular;
    condicion = CuentDiana.Acceso();// se guarda lo que va a RETORNAR EL METODO ; LUEGO DE TRES INTENTOS DE EERORES FALLIDOS; EL PROGRAMA NO DEBE CONTINUAR 

    while (condicion) {
        int opc = menu ();
        switch (opc)
        {
        case 1://DEPOSITAR DINERO
            cout<<"Ingrese monto:"<<endl;//condicional
            cin>>Saldo;
            CuentDiana.setSaldo(Saldo);
            break;
        case 2://RETIRAR DINERO
            CuentDiana.Retirardinero(); //COMO LLAMAR LA FUNCION RETIRAR DINERO DE LA CLASE HIJO Y CLASE PADRE?
            break;
        case 3://MOSTRAR SALDO
            CuentDiana.MostarSaldo();//TRABAJAR CON GETER
            break;
        case 4:
            cout<<"Saliendo del programa"<<endl;
            condicion = false;
            break;
        default:
            cout<<"Opcion invalida"<<endl;
            break;
        }
    } 
}

int menu () {
    int opciones;
    cout <<"Ingrese su opcion"<<endl;
    cout <<"\n1: Depositardinero();\n2: Retirardinero();\n3: MostarSaldo();\n4: Salir\n"<<endl;
    cin>>opciones;
    return opciones;
}