#include "todo.hpp"
#include <iostream>
#include <string>

using namespace todo;

std::string helpCommands = "Todo App\n a to add task \n d to delete task";



int main(int argc, char const *argv[])
{
    std::cout << helpCommands << std::endl;
    Todo todoObj;
    todoObj.console();
    return 0;
}
