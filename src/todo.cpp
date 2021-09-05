#include "todo.hpp"
todo::Todo::Todo(FileType fileType) {
    switch (fileType)
    {
    case APPEND:
        file.open(FILE_NAME,std::ios_base::app);
        break;

    case READ:
        file.open(FILE_NAME,std::ios_base::in);
        break;

    case WRITE:
        file.open(FILE_NAME,std::ios_base::out);
        break;
    
    default:
        break;
    }
    if(!file){
        printf("failed to open file\n");
        exit(1);
    }
};
todo::Todo::~Todo() {
    file.close();
};

void todo::Todo::saveTodo(const char* value) {
    file << value << "\n";
};

void todo::Todo::listTodo(){
    if (file.is_open()){
        index=0;
        while (std::getline(file,line)){
            ++index;
            printf("%d. %s\n",index, line.c_str());
        }
    }
}

void todo::Todo::deleteTodo(int index){
    std::string line;

    
    int _index = 0;
    while (std::getline(file,line)){
        ++_index;
        if (_index == index){
            line.replace(line.begin(),line.end(), "ok");
            printf("%s\n", line.c_str());
            printf("done\n");

            // file << line << "\n";
        }

    }

}