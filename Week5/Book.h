// Book.h
// Week 5 Task 1
// Name: Jackie Arteaga
#ifndef BOOK_H
#define BOOK_H

#include <string>  // For using strings

class Book {
private:
    std::string codeNum;  // ISBN number
    std::string author;   // Author of the book
    std::string title;    // Title of the book
    int edition;          // Edition number of the book
    std::string pubCode;  // Publisher code
    double price;         // Price of the book

public:
    // Constructor to create a new Book
    Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr) {
        codeNum = cn;
        author = au;
        title = ti;
        edition = ed;
        pubCode = pc;
        price = pr;
    }

    // Accessor methods to get book details
    std::string getISBN() {
        return codeNum;
    }

    std::string getAuthor() {
        return author;
    }

    std::string getTitle() {
        return title;
    }

    int getEdition() {
        return edition;
    }

    std::string getPubCode() {
        return pubCode;
    }

    double getPrice() {
        return price;
    }

    // Mutator method to change the price
    void changePrice(double newPrice) {
        price = newPrice;
    }
};

#endif
