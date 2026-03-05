#include <iostream>
using namespace std;

int main() {
    char nombre [7]= "Diana ";
    char nombre2 [9] ={'M','i','l','a','g','r','o','s'};
    int numeros [10] = {1,2,3,4,5,6,7,8,9,10};
    bool verdadero [3];
    float pi [2];



    for (int i = 0; i < 7; i++) {
        cout << nombre[i];
    }
    for (int i = 0; i < 8; i++) {
        cout << nombre2[i]<< " ,";
    }

    for (int i = 9; i >= 0; i--) {
        cout << numeros[i] << " ,";
    }
    
    for (int i = 0; i <= 3; i++) {
        verdadero[i] = true;
        cout << verdadero[i] << " ,";
    } if ( verdadero[3] == true) {
        verdadero[3] = false;
        cout << verdadero[3] << " ";
    }

    for (int i = 2; i > 0; i--) {
        pi[i] = 3.14; 
        cout << pi[i] << " " <<endl;
    } if (pi[1] == 3.1416) {
        cout << pi[1] << " " <<endl;
    }
    return 0;
}   