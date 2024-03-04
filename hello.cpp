#include <iostream>
#include "hello.h"

void printHelloWorld() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Second update works!" << std::endl;
}

int main() {
    printHelloWorld();
    return 0;
}