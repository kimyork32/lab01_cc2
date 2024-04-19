// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     cout << "Cantidad de memoria en bytes" << endl;
//     cout << "int: " << sizeof(int) << endl;
//     cout << "float: " << sizeof(float) << endl;
//     cout << "char: " << sizeof(char) << endl;
//     cout << "bool: " << sizeof(bool) << endl;
//     cout << "string: " << sizeof(string) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b;
    int *pa;
    int c;
    pa = &a;

    cout << a << endl;
    cout << int(&a) << endl;
    cout << int(&b) << endl;
    cout << int(&pa) << endl;
    cout << *pa << endl; 
    cout << int(pa) << endl;
    cout << int(&pa) << endl;
    int *ptr, user;
}
