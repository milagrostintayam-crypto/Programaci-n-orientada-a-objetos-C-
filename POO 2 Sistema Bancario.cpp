#include <iostream>
#include <string>

using namespace std;
int menu();

class CuentadeBanco { //es una plantilla y/o 
    protected:
    // atributos caraacteristica o propiedad
        float Saldo = 0.00; //el saldo es un dato que no puede ser modificado por el usuario u otro por lo que debe de ser un dato private.
    private:
    // atributos
        string Clave = "1234";//El uso de encapsulamiento; proteger los datos imp.
        //string Titular;
    public:
    // atributos
    string Titular;
    // metodos es una funcion de la clase
        bool Acceso () { // while ; caso mas rappidos
            string Clave_ingresada;
            for (int i = 0; i < 3; i++) {
                cout<<"Ingrese su contraseña: ";
                cin>>Clave_ingresada;
                if (Clave_ingresada == "1234" ) {
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

        virtual float MostrarSaldo () { // ver cual es mas conveniente; una estructura mas funcional; unificar
            cout<<"Saldo actual: "<<Saldo<<endl;
            return Saldo;
        }

        // float getsaldo () { // get devuelve el valor del atributo
        //     return Saldo;
        // }

        virtual  void Depositardinero (float deposito) {// no puedo usar un set debido a que mis datos deben de guardarse con la anterior operacion; saldo != nuevo saldo
            cout<<"Ingrese el monto a depositar: ";
            cin>>deposito;
             if ( deposito > 0) {
                Saldo += deposito;
                cout<<"Monto actual de Cuenta de banco:"<<Saldo<<endl;
            } else {
                cout<<"Monto invalido"<<endl;
            }
        }

        virtual void Retirardinero () {// es un geter //el usuario solo ve el resultado; pero no la funcionalidad.ocultando
            float retiro;

            cout<<"Ingrese el monto: ";//obs: numeros negativos no son validos; realizar una funcion de pedir monto
            cin>>retiro;
            if ( retiro <= Saldo && retiro > 0) {
                Saldo -= retiro;
                cout<<"Monto actual de Cuenta de banco:"<<Saldo<<endl;
            } else {
                cout<<"Monto invalido"<<endl;
            }
        }
         
        

};

class cuentaCredito : public CuentadeBanco { // COMO USAR BIEN EL POLIMORFISMO; 
    private:
    // atributos
         int CreditoMax = 10000;

    public:
    // metodos
        void Retirardinero() override {
            float retiro;
            //CuentadeBanco::Retirardinero();//llamado del metodo del padre con la funcion

            cout<<"Ingrese el monto: ";
            cin>>retiro;

            if (retiro <= CreditoMax && retiro > 0) {
                CreditoMax -= retiro;
                cout<<" El credito restante es: "<<CreditoMax<<endl;
            } else {
                cout<<"Moto invalido, vuelva a intentar"<<endl;
            } 
        }
        float MostrarSaldo () override {
            cout<<" El credito actual es: "<<CreditoMax<<endl;
            return CreditoMax;
        }
        void Depositardinero(float deposito) override {
            cout<<"No se puede depositar en una cuenta de credito"<<endl;
}
};

class cuentaAhorro : public CuentadeBanco { // COMO USAR BIEN EL POLIMORFISMO; 
    public:
    // metodos
        // void Retirardinero() override {
        //     float retiro;

        //     cout<<"Ingrese el monto: ";
        //     cin>>retiro;

        //     if (retiro <= Saldo && retiro > 0) {
        //         Saldo -= retiro;
        //         cout<<" El Saldo restante es: "<<Saldo<<endl;
        //     } else {
        //         cout<<"Moto invalido, vuelva a intentar"<<endl;
        //     } 
        // }
};


int main() {

    bool condicion;
    string Nuevacuenta;
    float Saldo;
    int opciones;
    int tipeaccount;
    int totalaccount = 0;
    int i = 0;
    //int cuentas[2];

    //int* puntero = &cuentas
    //cuentaCredito CuentDiana; // creamos un objeto; es una instancia de una clase; copia la plantilla  al objeto
    CuentadeBanco* cuentas[2] = {nullptr, nullptr}; //usamos mi clase padre para apuntar al arreglo que tiene por capacidad 10 elementos
    //sin embargo aun no se creo ningun objeto; estas "cuentas" estan vacias.

    cout<<"-----------------------------------"<<endl;
    cout<<"            MENU BANCO             "<<endl;
    cout<<"-----------------------------------"<<endl;
    CuentadeBanco* cuentaActual;
    //for (int i=0; i<2; i++) {
        if ( cuentas[i] == nullptr ) { //como se identifica un valor vacio en un arreglo
            //CuentadeBanco* cuentaActual;
            cout<<"Ingrese su opcion de cuenta: ";
            cout<<"\n1: Cuenta de ahorro\n2: Cuenta de Credito"<<endl;
            cin>>tipeaccount;
            if (tipeaccount == 1) {
                i == 2;
                cuentas [i] = new (cuentaAhorro);
                cout<<"Creacion exitosa"<<endl;
                cout<<"-----------------------------------"<<endl;
                cout<<"CUENTA DE AHORRO"<<endl;
            } else {
                i==1;
                cuentas [i] = new (cuentaCredito);
                cout<<"Creacion exitosa"<<endl;
                cout<<"-----------------------------------"<<endl;
                cout<<"CUENTA DE CREDITO"<<endl;
            }
            cout<<"Ingrese su nombre de usuario: ";
            cin>> cuentas [i]-> Titular; // asignamos un valor
            cuentaActual = cuentas[i];
        }
    //}
    condicion = cuentaActual->Acceso();// se guarda lo que va a RETORNAR EL METODO ; LUEGO DE TRES INTENTOS DE EERORES FALLIDOS; EL PROGRAMA NO DEBE CONTINUAR 

    while (condicion) {
        int opc = menu ();
        switch (opc) {
        case 1://DEPOSITAR DINERO
            cuentaActual->Depositardinero(Saldo);
            break; 
        case 2://RETIRAR DINERO LA OPCION DEBE VERIFICAR SI QUIERE RETIRAR DE CUENTACREDITO Y CUENTA PADRE
            cuentaActual->Retirardinero();
            break;; //detener la iteración actual del bucle y volver al inicio
        case 3://MOSTRAR SALDO
            cuentaActual->MostrarSaldo();//TRABAJAR CON GETER
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

int menu() { //menu de banco de ahorro
    int opciones;
    cout<<"-----------------------------------"<<endl;
    cout <<"Ingrese su opcion";
    cout <<"\n1: Depositar dinero\n2: Retirar dinero\n3: Mostar saldo\n4: Salir"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"OPCION: ";
    cin>>opciones;
    return opciones;
}