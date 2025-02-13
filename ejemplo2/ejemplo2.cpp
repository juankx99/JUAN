#include <iostream>
int main(){
    int a = 42;
    double b = 3.14;
    char c = 'A';
    std :: cout << "Size of int" << sizeof(a) << "bytes" << std :: endl;
    std :: cout << "Size of double" << sizeof(b) << "bytes" << std :: endl;
    std :: cout << "Size of char" << sizeof(c) << "bytes" << std :: endl;
    std :: cout << "Adress of char:" << &c << "bytes" << std :: endl;
    std :: cout << "Adress of double:" << &b << "bytes" << std :: endl;
    std :: cout << "Adress of int:" << &a << "bytes" << std :: endl;
    int d=4,suma;
    suma = a+d;
    std :: cout << "Suma:" << suma << std :: endl;
    std :: cout << "Suma int+double:" << a+b << std :: endl;
    return 0;



}