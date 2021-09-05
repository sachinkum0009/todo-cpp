#pragma once


#include <iostream>
#include <fstream>

#define FILE_NAME "/home/hunter/zzzzz/cpp/learn/applications/todo/todo.txt"

namespace todo {
    enum FileType {READ, WRITE, APPEND};
    class Todo {
        public:
            Todo(FileType fileType);
            ~Todo();
            void saveTodo(const char* value);
            void listTodo();
            void deleteTodo(int index);
        private:
            std::fstream file;
            std::string line;
            int index;



            
    };
}