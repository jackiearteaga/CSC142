// InventoryDef.cpp
// Week 6 Task 1
// Name: Jackie Arteaga

#include "Inventory.h"
#include <iostream>

Inventory::Inventory(int size) {
    length = size;
    books = new Book[length];
    nextEntry = 0;
}

Inventory::~Inventory() {
    delete[] books;
}

bool Inventory::addbook(const Book& theBook) {
    if (nextEntry < length) {
        book[nextEntry] = theBook; //add the book to the next free slot
        nextEntry++; //incrementing the index for the following book
        return true;
    }
    return false; //array is full
}

void Inventory::changePrice(const std::string& isbn, double newPrice) {
    for (int i = 0; i < nextEntry; i++) {
        if (books[i].isbn == isbn) {
            books[i].price == newPrice; //change price of book
            return;
        }
    }
    std::cout << "Book with ISBN " << isbn << " not found!" << std::endl;
}

void Inventory::printInventory() const {
    std::cout << "ISBN      AUTHOR      TITLE                               ED  PUB     PRICE\n";
    for (int i = 0; i < nextEntry; i++) {
        books[i].print();
    }
}
