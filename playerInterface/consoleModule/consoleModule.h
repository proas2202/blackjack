//
// Created by aproemkin on 08.11.2020.
//

#ifndef TASK_1_CONSOLEMODULE_H
#define TASK_1_CONSOLEMODULE_H

#include <iostream>
#include <vector>


namespace CommandLine{
    void hit(std::string message);
    void pass(std::string message);
}



class Command{
public:
    Command(std::string commandName_i,void (*handlerPtr_i)(std::string)){
        commandName = commandName_i;
        handlerPtr = handlerPtr_i;
    }
    void check_message(std::string message);
private:
    bool catchState;
    std::string commandName;
    void handler(std::string message);
    void (*handlerPtr)(std::string);
};


class ConsoleModule{

public:
    void receive_message();
    void add_command(Command new_command);
    void send_message(std::string message);
private:
    std::vector<Command> m_commandSet;
};






#endif //TASK_1_CONSOLEMODULE_H
