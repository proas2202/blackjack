//
// Created by aproemkin on 08.11.2020.
//
#include "gtest/gtest.h"
#include "consoleModule.h"

TEST(Console, ConsoleInput){ //
    ConsoleModule console;
    console.add_command(Command("hit", CommandLine::hit));
    console.add_command(Command("pass", CommandLine::pass));
    console.send_message("Enter command");
    console.receive_message();
};

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}