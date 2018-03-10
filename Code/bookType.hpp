//header file for bookType

#ifndef book_hpp
#define book_hpp

#include <string>

using namespace std;

class book
{
public:
    
    /* Constructors */
    
    book(string newTitle, string newAuthor[], string newPublisher, string newISBN ,
         string newYear, double newPrice, int newNumOfCopies);
    
    book(); //default constructor
    
    /* End constructors. Start title functions */
    
    void showTitle() const;
    
    void setTitle(string newerTitle);
    
    bool checkTitle(bool& title);
    
    string getTitle() const;
    
    /* End title functions. Start copy functions */
    
    void showNumCopies() const;
    
    void setNumCopies(int newerCopy);
    
    void updateNumCopies(int copy);
    
    int getNumCopies() const;
    
    /* End copy functions. Start publisher functions */
    
    void showPublisher() const;
    
    void setPublisher(string newerPublisher);
    
    string getPublisher() const;
    
    /* End publisher functions. Start ISBN functions */
    
    void showISBN() const;
    
    void setISBN(string newerISBN);
    
    string getISBN() const;
    
    /* End ISBN functions. Start price functions */
    
    void showPrice() const;
    
    void setPrice(int newerPrice);
    
    double getPrice() const;
    
    /* End price functions. Start author functions */
    
    void showAuthor() const;
    
    void setAuthor(string newerAuthor[]);
    
    string getAuthor() const;
    
    /* End author functions. Start year functions */
    
    void showYear() const;
    
    void setYear(string newerYear);
    
    string getYear() const;
    
    /* End year function. Start numOfAuthor function */
    
    int getNumOfAuthors() const;
    
    /* End numOfAuthor function. Start numOfCopies function */
    
    int getNumOfCopies() const;
    
    /* End all function prototypes */
    
    string toString();
    
private:
    string title;
    string author[4];
    string publisher;
    string ISBN;
    string year;
    double price;
    int numOfAuthors;
    int numOfCopies;
    
}; //end class book

#endif /* book_hpp */
