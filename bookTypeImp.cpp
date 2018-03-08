#include <iostream>
#include "book.hpp"

using namespace std;

  /* Constructors */

book::book(string newTitle, string newAuthor[], string newPublisher, string newISBN,
           string newYear, double newPrice, int newNumOfCopies)
{
    setTitle(newTitle);
    setAuthor(newAuthor);
    setPublisher(newPublisher);
    setISBN(newISBN);
    setYear(newYear);
    setPrice(newPrice);
    setNumCopies(newNumOfCopies);
}

book::book()
{
    title = "";
    author[0] = "";
    author[1] = "";
    author[2] = "";
    author[3] = "";
    publisher = "";
    ISBN= "";
    year = "";
    price = 0.0;
    numOfCopies = 0;
}

/* End constructors. Start title functions */

void book::showTitle() const
{
    cout << getTitle();
}

void book::setTitle(string newerTitle)
{
    if (newerTitle == "")
        title = "[No Title Given]";
    else
        title = newerTitle;
}

string book::getTitle() const
{
    return title;
}

/* End title functions. Start copy functions */

void book::showNumCopies() const
{
    cout << getNumCopies();
}

void book::setNumCopies(int newerCopy)
{
    if (newerCopy == 0)
        numOfCopies = 0;
    else
        numOfCopies = newerCopy;
}

void book::updateNumCopies(int copy)
{
    numOfCopies += copy;
}

int book::getNumCopies() const
{
    return numOfCopies;
}

 /* End copy functions. Start publisher functions */

void book::showPublisher() const
{
    cout << getPublisher();
}

void book::setPublisher(string newerPublisher)
{
    if (newerPublisher == "")
        publisher = "[No Publisher Given]";
    else
        publisher = newerPublisher;
}

string book::getPublisher() const
{
    return publisher;
}

 /* End publisher functions. Start ISBN functions */

void book::showISBN() const
{
    cout << getISBN();
}

void book::setISBN(string newerISBN)
{
    if (newerISBN == "")
        ISBN = "[No ISBN Given]";
    else
        ISBN = newerISBN;
}

string book::getISBN() const
{
    return ISBN;
}

/* End ISBN functions. Start price functions */

void book::showPrice() const
{
    cout << getPrice();
}

void book::setPrice(int newerPrice)
{
    if (newerPrice == 0)
        price = 0;
    else
        price = newerPrice;
}

double book::getPrice() const
{
    return price;
}

/* End price functions. Start author functions */

void book::showAuthor() const
{
    cout << getAuthor();
}

void book::setAuthor(string newerAuthor[])
{
    int i = 0;
    
    if (newerAuthor[0] != "")
    {
        for (i = 0; i < 4; i++)
            author[i] = newerAuthor[i];
    }
    
    else
    {
    
        cout << "It seems like there aren't any authors for this book. If you wish, select up to 4 authors for this book. Press 'quit' to exit anytime." << endl;
   
        int endIndex = -1;

        for (i = 0; i < 4; i++)
        {
                cin >> newerAuthor[i];
                author[i] = newerAuthor[i];
                if (author[i] == "quit")
                {
                    endIndex = i;
                    break;
                }
        }
        
        if (endIndex == 0)
        {
            for (i = 0; i < 4; i++)
                author[i] = "";
        }
        else if (endIndex == 1)
        {
            for (i = 1; i < 4; i++)
                author[i] = "";
        }
        else if (endIndex == 2)
        {
            for (i = 2; i < 4; i++)
                author[i] = "";
        }
        else if (endIndex == 3)
        {
            author[3] = "";
        }
    
    }//end top else
    
}//end function setAuthor

string book::getAuthor() const
{
    int i = 0;
    string output = "";
    for (i = 0; i < 4; i++)
        output += author[i] + " ";
    return output;
}

/* End author functions. Start year functions */

void book::showYear() const
{
    cout << getYear();
}

void book::setYear(string newerYear)
{
    if (newerYear == "")
        year = "[No Year Given]";
    else
        year = newerYear;
}

string book::getYear() const
{
    return year;
}

/* End year function. Start numOfAuthor function */

int book::getNumOfAuthors() const
{
    return numOfAuthors;
}

/* End numOfAuthor function. Start numOfCopies function */

int book::getNumOfCopies() const
{
    return numOfCopies;
}

/* End numOfCopies function. Start toString() */

string book::toString()
{
    string p = ""; 
    string c = "";
    p = getPrice();
    c = getNumCopies();
    return getTitle() + " " + getAuthor() + " " + getPublisher() + " " + getISBN() + " " + getYear();
}

/* End all function definitions */












