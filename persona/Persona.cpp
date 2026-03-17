#include <iostream>
//llamando a la cabecera
#include "Persona.h"
using namespace std;

Persona::Persona (float e, float p, string d, string n) {
    this->estatura = e;
    this->peso = p;
    this->dni = d;
    this->nombre = n;


}

void Persona::trabajar() {
    cout<<nombre<<" esta trabajando"<<endl;
}
 
void 
