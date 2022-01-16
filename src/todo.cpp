#include "todo.hpp"
#include <iostream>
#include <cstdio>


namespace todo {
    Todo::Todo() {
        std::cout << "todo constructor called" << std::endl;
    }
    Todo::~Todo() {
        std::cout << "todo destructor called" << std::endl;
    }
    void Todo::console(void) {
    // while (true) {
        std::cout << "$ " ;
        std::cin >> command;
        if (command == 'a'){
            std::cout << "Enter Task Name: ";
            std::cin >> taskName;
            std::cout << "Enter Task Description: ";
            std::cin >> taskDescription;
            printf("%s", taskDescription.c_str());
            // std::cout << taskName << " : " << taskDescription << std::endl;
            
        }
    // };
}
}