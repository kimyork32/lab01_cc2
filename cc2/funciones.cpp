#include "funciones.h"
#include <algorithm>

std::vector<int> numeros;

void ingresar_numero(int numero) {
    numeros.push_back(numero);
    std::sort(numeros.begin(), numeros.end());
}

void borrar_elemento(){
    numeros.erase(numeros.begin() + 0);
}
int obtener_minimo() {
    if(numeros.size()>0)
        borrar_elemento();
    return numeros[0];
}

void mostrar_arr(){
    for(int i : numeros){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
