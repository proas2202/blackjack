//
// Created by aproemkin on 08.11.2020.
//

#include "consoleModule.h"

void Command::check_message(std::string message){

    message.resize(commandName.size());
    if (message == commandName ) {
        std::cout << "Command is Catched" << std::endl;
        (*handlerPtr)(message);
    }

}

void ConsoleModule::receive_message(){
    char s[80];
    std::cin.getline(s, 80);
    std::string message =  s;

    for(int inc = 0; inc < m_commandSet.size(); inc++){
        m_commandSet.at(inc).check_message(message);
    }

}

void ConsoleModule::add_command(Command new_command){
    m_commandSet.push_back(new_command);
}

void ConsoleModule::send_message(std::string message){
    std::cout << message << std::endl;
}

void CommandLine::hit(std::string message){
    std::cout << "hit command!!!!!!" << std::endl;
}

void CommandLine::pass(std::string message){
    std::cout << "pass command!!!!!!" << std::endl;
}