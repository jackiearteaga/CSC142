// Even.cpp
// Week 4 Task 1
// Name: Jackie Arteaga
/*

This program will make use of randomly generated integers. The way to use random
    numbers in C++ was shown in today's class, and is summarized here:

    0. Rename this file to Even.cpp
    
    - Detecting Odd and Even Numbers
        Remember: any number 𝑛 is an even number if 𝑛 is evenly divisible by two. In other
        words, integer division of 𝑛 by 2 will leave a remainder of 0 if 𝑛 is even, and 1 if 𝑛 is odd.
        You can test for this by using the modulus operator, as shown in this pseudocode:
        If ( (𝑛 % 2) is 0 ) :
            𝑛 is even;
        otherwise:
            𝑛 is odd
        For this lab you must create a separate method named isEven() as described here:
            isEven():
                This method takes one integer argument as input
                This method returns the Boolean value true if the number is even,
                otherwise it returns false.

Your Task
    Your program will consist of two methods: the main()
    method, and the isEven() method described above.
    The main() method will use a for loop to generate 1,000 random integers in the range
    [0,100] inclusive. It should use the isEven() method to determine whether each random number
    is even or odd.
    When the loop is finished, the program should display, in a "creative" format, the number of
    random numbers, even numbers, and odd numbers that were generated.
    (your exact numbers will be different, and you may use your own specific wording):

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isEven(int number) { //will return true if number is even, false if odd number
    return (number % 2 == 0); //return true if number is divisible by 2
}

int main() {
    srand(time(0));

    int totalNumbers = 1000;
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < totalNumbers; i++) { //generate 1000 random numbers in the range [0, 100] and check if even or odd
        int randomNumber = rand() % 101; //generate random number 0-100
    
        if (isEven(randomNumber)) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    //results
    cout << "Results:\n";
    cout << "Total numbers generated: " << totalNumbers << "\n";
    cout << "Total even numbers: " << evenCount << "\n";
    cout << "Total odd numbers: " << oddCount << "\n";
    cout << "You're awesome! \n";

    return 0;
}
