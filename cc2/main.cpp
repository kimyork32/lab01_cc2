// main.cpp
#include <iostream>
#include "funciones.h"

using namespace std;

int main() {
    int n;
    numeros.push_back(6);    
    numeros.push_back(3);
    numeros.push_back(7);    
    numeros.push_back(2);    
    numeros.push_back(9);    
    numeros.push_back(1);    

    cout << "Min: " << obtener_minimo() << endl;
    mostrar_arr();
    cout << "ingresar: "; cin>> n; ingresar_numero(n);
    cout << "Min: " << obtener_minimo() << endl;
    mostrar_arr();
    cout << "Min: " << obtener_minimo() << endl;
    mostrar_arr();

    return 0;
}
