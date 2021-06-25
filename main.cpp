#include <iostream>
#include "Test.h"

std::string test() {
    std::string string = "haa";
    return string;
}

int main() {
    std::cout << "Hello, World! " << test() << std::endl;
    std::cout << "He" << std::endl;
    std::string input;
    std::cin >> input;

    Test test1;
    std::cout << test1.testchar;
    return 0;
}