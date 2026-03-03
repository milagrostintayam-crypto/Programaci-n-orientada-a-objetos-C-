#include <iostream>
using namespace std;

int main() {
    int NumSerie;
    int Result = 0;
    int Num1 = 0;
    int Num2 = 1; 
    
    
    //
    cout<<"serie de Fibonacci"<<endl;
    cout<<"Ingrese el numero de serie de Finacii:"<<endl;
    cin >> NumSerie;
    cout << endl;

    for ( int i = NumSerie; i > 0; i-- ) {
        Result = Num1 + Num2;

        if(Result >= NumSerie){
            cout << "El numero de fibonacci "<<NumSerie<<"es:"<< Result <<endl;
        }
    }
    return 0;
}