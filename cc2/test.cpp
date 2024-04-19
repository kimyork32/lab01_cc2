
#include "test.h"

Test::Test(int x) : x(x) {}

void Test::mostrar(){
    std::cout << "numero: " << x << std::endl;
}