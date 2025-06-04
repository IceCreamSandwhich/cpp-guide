// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

// #include <iostream>

// int main(){
//     std::cout << "Hi There!" << std::endl;

//     std::cout << std::endl << std::endl;
//     return 0;
// }

#include <iostream>

int main(){
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "You are " << age << " years old." << std::endl << std::endl;
    return 0;
}