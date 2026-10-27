//#include <iostream>
//#include <string> //for the input

//int main() //
//{
    //user inputs name
    //std::cout << "input the name "; //since we dont have std::endl, the program will not go to the next line after the output. it will stay on the same line and wait for the user to input the name


    //program reads the name and stores it in a variable. the variable is name and the type is string
    //std::string name; //only exists as local vairalbe in the main function
    //std::cin >> name; // the >> operator reads a string from the stand input and stores what it read on the object named name.
    //prgram outputs the name
    //std::cout << "Hi " << name << std::endl;  //when we ask a program to read a string, it will discard whitespaces and find the first charaters and read until it finds a whitespace character. so if the user inputs "  John Smith", the program will only read "John" and store it in the variable name. the rest of the input will be ignored.
    //return 0;

//}
#include <iostream>
#include <string> 
int main() //
{
    //user inputs name
    std::cout << "Enter your name "; 
    std::string name;
    std::cin >> name; 
    //building the greeting
    const std::string greeting = "Hello, " +name+"!";
    //the output second and fourth lines
    const std::string spaces(greeting.size(), ' ');
    const std::string second ="*" + spaces + "*"; 
    //firth and fifth lines
    const std::string first(second.size(), '*');
    
    //write it all
    std::cout << std::endl;
    std::cout << first << std::endl; //the size of the greeting is the number of characters in the greeting. the spaces variable is a string that contains the same number of spaces as the greeting. this is used to create the second and fourth lines of the output.
    std::cout << second << std::endl;
    std::cout <<"*"<<greeting<<"*"<< std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
}