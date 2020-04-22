// conWorkingWithStrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//function declaration
void greeting();
void FramedGreeting();
void variableCout13();
void variableCout14();
void concatExample15();
void multipleGreeting16();

int main()
{
    multipleGreeting16();
    concatExample15();
    variableCout14();
    variableCout13();
    greeting();
    FramedGreeting();
    return 0;
}

void multipleGreeting16()
{
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name
        << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name
        << "; nice to meet you too!" << std::endl;

}

void concatExample15()
{
    { std::string s = "a string";
    { std::string x = s + ", really";
    std::cout << s << std::endl; 
    //x was orignally not in scope
    std::cout << x << std::endl; }
    }

}
void variableCout14()
{
    { const std::string s = "a string";
    std::cout << s << std::endl;
    { const std::string s = "another string";
    std::cout << s << std::endl; }}

}
void variableCout13()
{
    { const std::string s = "a string";
    std::cout << s << std::endl; }

    { const std::string s = "another string";
    std::cout << s << std::endl; }

}


void greeting()
{
    // ask for the person's name
    std::cout << "Please enter your first name: ";
    // read the name
    std::string name; // define name
    std::cin >> name; // read into
    // write a greeting
    std::cout << "Hello, " << name << "!" << std::endl;
  
}

void FramedGreeting()
{
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;
    // build the message that we intend to write
    const std::string greeting = "Hello, " + name + "!";

    // build the second and fourth lines of the output
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";
    // build the first and fifth lines of the output
    const std::string first(second.size(), '*');
    // write it all
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    

}


