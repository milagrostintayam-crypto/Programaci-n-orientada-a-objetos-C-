#include <iostream>
using namespace std;

void cambio (char* p){ //mi funcion recibe una direccion de memoria, un puntero a char
    *p = 'e'; //a través del puntero p, cambiamos el valor de el caracter al que apunta p a 'e'
}
int main() {
    char userName[50]= "Diana";
    //int z = x; esto es un uso de memoria excesivo
    //char* a = &userName[4]; // a es un puntero a un caracter, que apunta a Username
    //cambio(a);//llamado a la funcion
    for (int i = 0; i < 5; i++) {
        char* a = &userName[i]; // a es un puntero a un caracter, que apunta a Username
        cambio(a);// lafuncion cambio recibe el puntero a, que apunta a cada caracter de userName, y cambia su valor a 'e'
    }
    cout << userName << endl;
    //char*p = "Milagros"; // a través del puntero p, cambiamos el valor de x
    return 0;
}


//for (int i = 0; i < 50; i++) {
//    char* p = &userName[0];
//    cout << userName << endl;
    