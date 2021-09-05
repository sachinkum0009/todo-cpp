#include <cstdio>
#include <string>
#include "todo.hpp"
#include <cstring>

#define HELP_MSG "press -a to add the task\npress -d to delete the task\npress -l for list of tasks\npress -h for help\n"

int main(int argc, char const *argv[])
{   
    // printf("You entered %d arguments\n", argc -1);
    

    if (argc < 2) {
        printf(HELP_MSG);
            //   exit(1);
    }
    else {
    for (int i = 1; i < argc; ++i){
        if (strcmp(argv[i],"-h")==0){
            
            printf(HELP_MSG);
        }
        else if (strcmp(argv[i],"-a")==0){
            todo::Todo obj(todo::FileType::APPEND);

            
            printf("adding the todo to file\n");
            obj.saveTodo(argv[i+1]);
        }
        else if (strcmp(argv[i],"-l")==0){
            todo::Todo obj(todo::FileType::READ);
            printf("list of todos\n");
            obj.listTodo();
        }
        
        else if (strcmp(argv[i],"-d")==0){

            int index = static_cast<int>(*argv[i+1] - '0');
            
            printf("todo removed\n");
            todo::Todo obj(todo::FileType::WRITE);
            obj.deleteTodo(index);
        }
        
    }
}    
    return 0;
}
