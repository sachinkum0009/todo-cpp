#pragma once

#include <string>

namespace todo
{
    class Todo {
public:
        Todo();
        ~Todo();
        void console(void);
private:
        bool addTask(const std::string& _taskName);
        char command;
        std::string taskName;
        std::string taskDescription;
    };
} // namespace todo
