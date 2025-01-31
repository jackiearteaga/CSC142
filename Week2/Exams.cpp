// Exams.cpp
// Week 2 Task
// Name: Jackie Arteaga
// Date: 1/29/25
/*
    0. Rename this file to Exams.cpp

    1. In this file, and every file created for this class, add comments at the top of the file that include:
        - The name of the file
        - A brief description of the program (or class) that’s in the file
        - Your name
        - Today’s date
    
    2. In this file, create a single function called main() that performs the following steps 
    (if you are unsure how to do any of these things, consult with last weeks lab to find suggestions):

        - Prompt the user to input a String that is their name.

        - Prompt the user to input three integers, representing exam scores. Each
        integer should be stored in a separate variable of type int.

        - Calculate the average of the three exam scores and store the result in a
        variable of type double. Note: be careful about integer division! For full
        credit the average you calculate must be numerically correct.

        - Display the input data (the user’s name and three exam scores). Also
        display the calculated result (the exam average), formatted to two digits
        to the right of the decimal point.

        - For full credit, your program must print all the input data as well as the
        results, in a clearly understandable manner, with appropriate descriptive
        labels and formatting.

    4. A successful run should have output that looks something like the output that is provided in the Lab3 folder:

*/

#include <iostream>
#include <format>
#include <string>


int main() {
    std::string name;
    int score1, score2, score3;
    float average; // variables

    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    std::cout << "Enter the first exam score: ";
    std::cin >> score1;
    std::cout << "Enter the second exam score: ";
    std::cin >> score2;
    std::cout << "Enter the third exam score: ";
    std::cin >> score3;

    average = (score1 + score2 + score3) / 3.0; // average

    std::cout << "Hello, " << name << "." << std::endl;
    std::cout << "Your three exam score are " << score1 << ", " << score2 << ", and " << score3 << "." << std::endl;

    std::cout << std::format("Your average exam score is {:.2f} points.", average);

    return 0;
}
