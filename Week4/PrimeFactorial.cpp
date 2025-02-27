// PrimeFactorial.cpp
// Week 4 Task 2
// Name: Jackie Arteaga
/*

Your task
    0. Rename file to PrimeFactorial.cpp

    Write a program that implements the following pseudocode:
    main():
        - Generate a random integer less than 50.

        - If the number is prime:
            Calculate and display the number and its factorial.
        - Otherwise:
            Display the number with a message that it is not prime.

        - Ask the user if they wish to repeat. If they say yes, the
        entire process is repeated. Otherwise, the program terminates with a
        ‘goodbye’ message.

        -You must define and use the methods isPrime() and factorial() described here:
            isPrime():
                This method takes one integer input argument, and returns true if the number is
                prime, otherwise it returns false.
                Remember that a prime number is a number that is evenly divisible only by itself
                and 1. For example, the number 5 is prime because it can only be evenly divided
                by 1 and 5. The number 6, however, is not prime because it can be evenly
                divided by 1, 2, 3, and 6.
                (Note: By definition, 0 and 1 are not prime. Your code must account for this.)
                Hint: An easy way to determine if a number a is evenly divisible by another
                number b is to use the modulus operator %. This operator performs integer
                division between the two numbers and returns the remainder of the division.
                In an expression such as (a % b), the % operator will return 0 only if a is
                evenly divisible by b. The following pseudocode implements this:
                Use a for loop, starting at b=2, continuing as long as b<a, and at each
                pass increment b by 1.
                If at any time (a % b) is 0, then immediately return false (the number
                is not prime). If the for loop completes without this happening, then
                return true (the number is prime).

            factorial():
                This takes one integer input argument and returns its factorial as a double.
                Note: while a factorial is technically an integer value, the int datatype in C++ is
                limited to a maximum value of about 2×109. (Why? How many bits are used
                to represent an int?) Factorials get very large (factorial(50) ≈ 1065) so this is
                insufficient. The best choice is to use a return value of type double. (What is
                the largest value of a double?)
                Remember that the factorial of a number n (written as n! ) is defined as the
                product of all the integers from 1 to n :

                - In general: factorial(𝑛) = 1 ∗ 2 ∗ 3 ∗ ... ∗ (𝑛 − 1) ∗ 𝑛
                - For example: factorial(7) = 1 ∗ 2 ∗ 3 ∗ 4 ∗ 5 ∗ 6 ∗ 7 = 5,040
                - Special case: factorial(0) = 1
                Since calculating the factorial of a number is a repetitive process it is natural to
                use a looping algorithm. Since we know exactly how many numbers we want to
                multiply (the integers from 1 to n) this is a perfect opportunity to use a for loop.
                Your factorial() method will be almost identical to the summation() method
                we briefly covered in class on Monday. The differences are:
                - Use multiplication instead of addition.
                - Start with an initial value of 1 instead of 0.

Specifications
    For full credit, your program must meet the following specifications:
        - Complete file prolog comments.
        - The program includes appropriate comments for documentation, uses meaningful
        names, prompts, and messages, and follows the naming conventions.
        - The program uses the methods and pseudocode defined above and produces
        correct results.
        - The program runs without error and does not crash.
        - The is formatted appropriately with sufficient and clear explanatory messages. 
            In particular:
                The randomly selected number is displayed.
                If the randomly selected number is prime, the factorial value is displayed on a
                separate line, with all digits and no decimal places.
        - The program repeats as long as the user confirms that they want to repeat.

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isPrime(int number) { //check if number is a prime number
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

double factorial(int number) { //calculate the factorial of a number
    double result = 1;

    for (int i = 1; i <= number; i++) { //use loop to calculate factorial
        result *= i;
    }
    return result;
}

int main() {
    srand(time(0));

    bool repeat = true;

    while (repeat) { //generate random num less than 50
        int randomNum = rand() % 50;

        cout << "Generated random number: " << randomNum << endl;

        if (isPrime(randomNum)) { //check if number is prime
            cout << randomNum << " is prime." << endl; //calculate and show factorial
            cout << "The factorial of " << randomNum << " is: " << factorial(randomNum) << endl;
        } else {
            cout << randomNum << " is not prime." << endl;
        }

        string userChoice;
        cout << "Would you like to try again? Answer yes or no: ";
        cin >> userChoice;

        if (userChoice != "yes" && userChoice != "YES") {
            repeat = false;
            cout << "Goodbye!" << endl;
        }

        cout << endl;
    }

    return 0;
}
