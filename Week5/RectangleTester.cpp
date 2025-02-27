// RectangleTester.cpp
// Week 5 Task 2
// Name: Jackie Arteaga
/*
Your task is to create the complete Rectangle class and test it in a .cpp file  as specified here:
    0. Rename this file to RectangleTester.cpp

    - Remember that only ONE .cpp file can have a main() method!

    -The Rectangle Class
        This class will either be declared and defined within a single header file or
        declared within a header file and defined in a separate .cpp file
        Your class should have two private fields, length and width of type double
        You will then need to declare/define several public methods that will complete the following:
            - A method to get the width
            - A method to get the length
            - A method to set the width
            - A method to set the length
            - A method to get the area
                ** If you're not sure how to calculate the area of a rectangle, look it up **

    - The RectangleTester file
        Your main() program is in the RectangleTester.cpp file. 
        This program will test the Rectangle class, confirming that it works correctly, by
        creating several Rectangle objects that represent rooms of an apartment. The purpose
        of the tester program is to ensure that all the methods work correctly.
        The main() method will perform the following steps:
            1. Create three Rectangle objects, one for each of three rooms in an apartment
            (the kitchen, a bedroom, and the living room).
            2. Ask the user for the length and width of each of the three rooms. Use the "setter"
            methods to set those values in each of the three Rectangle objects.
            3. Report to the user the size (length x width) and area of each of the three rooms,
            using the "getter" methods.
            4. Also report the total area of the apartment by adding the areas of the rooms.
        
Specifications
    For full credit, your program must meet the following specifications:
        - Complete file prolog comments are included.
        - The filenames correctly match.
        - The Rectangle class has the proper header and is in a file with the correct name.
        - The program includes appropriate comments for documentation, uses meaningful
        names, prompts, and messages, and follows the naming conventions.
        - Numbers are printed with reasonable formatting. This means limiting the number
        of decimal digits when appropriate.
        - The program uses the methods and pseudocode defined above and produces
        correct results. In particular, private fields may only be accessed by using the
        setter and getter methods.
        - The program runs without error and does not crash.
        - The program’s input and output are formatted appropriately with sufficient and
        clear explanatory messages.

Finishing Up
    When you have finished, there are up to three files to submit for this assignment:
        - if you chose to declare and define your class in one header file then you only
        need to submit two files with the following names...
            - Rectangle.h
            - RectangleTester.cpp

        - if you chose to declare your class in a header file and define it within a .cpp
        file, then you need to submit three files in total with the following names...
            - Rectangle.h
            - RectangleDefinitions.cpp
            - RectangleTester.cpp
*/
#include <iostream>
#include <iomanip>
#include "Rectangle.h"

using namespace std;

//function to ensure positive input
double getPositiveInput(const string & prompt) {
    double value;
    cout << prompt;
    while (true) {
        cin >> value;
        if (value > 0) {
            return value;
        } else {
            cout << "Please enter a positive number: ";
        }
    }
}

int main() {
    //the three Rectangle objects for the rooms
    Rectangle kitchen, bedroom, livingRoom;

    //variables
    double length, width;

    //kitchen's dimensions
    length = getPositiveInput("Enter the length of the kitchen: ");
    width = getPositiveInput("Enter the width of the kitchen: ");

    //set kitchen's dimensions using setter methods
    kitchen.setLength(length);
    kitchen.setWidth(width);

    //bedroom's dimensions
    length = getPositiveInput("Enter the length of the bedroom: ");
    width = getPositiveInput("Enter the width of the bedroom: ");

    //set bedroom's dimensions using setter methods
    bedroom.setLength(length);
    bedroom.setWidth(width);

    //living room's dimensions
    length = getPositiveInput("Enter the length of the living room: ");
    width = getPositiveInput("Enter the width of the living room: ");

    //set living room's dimensions using setter methods
    livingRoom.setLength(length);
    livingRoom.setWidth(width);

    //show the dimensions and area for each room
    cout << fixed << setprecision(2);  // Set output precision to 2 decimal places
    cout << "\nKitchen: " << kitchen.getLength() << " x " << kitchen.getWidth() << " with an area of " << kitchen.getArea() << endl;
    cout << "Bedroom: " << bedroom.getLength() << " x " << bedroom.getWidth() << " with an area of " << bedroom.getArea() << endl;
    cout << "Living Room: " << livingRoom.getLength() << " x " << livingRoom.getWidth() << " with an area of " << livingRoom.getArea() << endl;

    //calculate and display the total area of the apartment
    double totalArea = kitchen.getArea() + bedroom.getArea() + livingRoom.getArea();
    cout << "\nTotal area of the apartment: " << totalArea << endl;

    return 0;
}

