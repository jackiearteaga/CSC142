// Inventory.h
// Week 6 Task 1
// Name: Jackie Arteaga

#ifndef INVENTORY_H
#define INVENTORY_H
#include "Book.h"

class Inventory {
private:
    Book* books; //an array of Book objects
    int nextEntry; //the next index where a book will be added
    int length; //the length/size of the book array

public:
    Inventory(int size); //constrtuctor will take size as an argument
    ~Inventory(); //decontructor

    bool addBook(const Book& theBook); //add book
    void changePrice(const std::string& isbn, double newPrice); //change price of book by ISBN
    void printInventory() const;
};
#endif
