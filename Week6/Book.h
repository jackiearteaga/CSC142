// Book.h
// Week 6 Task 1
// Name: Jackie Arteaga

#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <iostream>

class Book {
public:
    std::string isbn;
    std::string author;
    std::string title;
    int edition;
    std::string publisher;
    double price;

    //default constructor
    Book() : isbn(""), author(""), title(""), edition(0), publisher(""), price(0.0) {}

    //parameter
    Book(std:: string isbn, std::string author, std::string title, int edition, std::string publisher, double price)
        : isbn(isbn), author(author), title(title), edition(edition), publisher(publisher), price(price) {}

    //book details
    void print() const {
        std::cout << isbn << " " << author << " " << title << " " << edition << " " << publisher << " $ " << price << std::endl;
    }
};
#endif
