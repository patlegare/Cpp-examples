// hello world program                     
#include <iostream> //standard header. Must appear on a line by itself.

int main() //every C++ program must have a main function that returns an integer
{
    
    std::cout << "Hello, World!" << std::endl; //the name cout that is in the scope of the std namespace is used to print the string "Hello, World!" to the console. The std::endl is used to insert a newline character and flush the output buffer.
    std::cout << "This (\") is a quote, and this (\\) is a backslash." << std::endl;
    std::cout << "\t test" << std::endl; //testing the tab character
    /* comment onver
       multiple lines but what if i want to string /* and as its */
    std::cout << "test of comment " << std::endl;
    
    //try doing multiple
    // lines by implementing // and testing what happens when i introduce /*
    // or */
    return 0; //a zero return indicates a success
}

//The shortest valid program is main(){} which is a function that returns an integer and has no statements in its body. The return value of main is used to indicate the success or failure of the program. A return value of 0 indicates success, while a non-zero value indicates failure.