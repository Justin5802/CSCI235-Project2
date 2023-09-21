//Name: Justin Bret Chu
//Email: JUSTIN.CHU73@myhunter.cuny.edu
//Date: February 24th, 2023
//This program implements three inherited classes: Manual, Textbook, and Novel that inherits from the base Book class
//This main.cpp file tests all functions to ensure that it works correctly.
#include "Book.hpp"
#include "Manual.hpp"
#include "Textbook.hpp"
#include "Novel.hpp"
#include <iostream>
using namespace std;


int main() {
    // Test default constructor
     Manual manual1;

    // Test parameterized constructor
    Manual manual2("iPhone User Manual", "Apple Inc.", 350, "iPhone 13", true,
                   "https://www.apple.com/iphone/user-guide/", true);
    cout << "Manual 2: " << manual2.getTitle() << " by " << manual2.getAuthor()
         << ", " << manual2.getPageCount() << " pages. Device: " << manual2.getDevice()
         << ", Has website: " << manual2.hasWebsite() << ", Visual aid: "
         << manual2.hasVisualAid() << endl;

    // Test setters and getters
    manual1.setTitle("Samsung Galaxy User Manual");
    manual1.setAuthor("Samsung Electronics Co., Ltd.");
    manual1.setPageCount(450);
    manual1.setDevice("Samsung Galaxy S21");
    manual1.setWebsite("https://www.samsung.com/us/support/owners/app/galaxy-s21-5g-manual/");
    manual1.setVisualAid(false);

    cout << "Manual 1 updated: " << manual1.getTitle() << " by " << manual1.getAuthor()
         << ", " << manual1.getPageCount() << " pages. Device: " << manual1.getDevice()
         << ", Has website: " << manual1.hasWebsite() << ", Visual aid: " 
         << manual1.hasVisualAid() <<  ", Get Website: " << manual1.getWebsite() << endl;


 
  // Test parameterized constructor
  Textbook t2("Calculus: Early Transcendentals", "James Stewart", 1368, "Mathematics", true, NONE, false);
  cout << "Title: " << t2.getTitle() << endl;
  cout << "Author: " << t2.getAuthor() << endl;
  cout << "Pages: " << t2.getPageCount() << endl;
  cout << "Subject: " << t2.getSubject() << endl;
  cout << "Digital: " << t2.isDigital() << endl;
  cout << "Grade Level: " << t2.getGradeLevel() << endl;
  cout << "Has Review Questions: " << t2.checkReviewQuestions() << endl;

 // Create a new textbook object using the default constructor
    Textbook textbook;

    // Test the getters
    std::cout << "Title: " << textbook.getTitle() << std::endl;
    std::cout << "Author: " << textbook.getAuthor() << std::endl;
    std::cout << "Num Pages: " << textbook.getPageCount() << std::endl;
    std::cout << "Subject: " << textbook.getSubject() << std::endl;
    std::cout << "Is Digital: " << textbook.isDigital() << std::endl;
    std::cout << "Grade Level: " << textbook.getGradeLevel() << std::endl;
    std::cout << "Has Review Questions: " << textbook.checkReviewQuestions() << std::endl;
 
     Textbook textbook1;
    textbook1.setTitle("Calculus: Early Transcendentals");
    textbook1.setAuthor("James Stewart");
    textbook1.setPageCount(2000);
    textbook1.setSubject("Meth");//I meant math, but I'll just keep it like this for now :)
    textbook1.setGradeLevel(HIGH_SCHOOL);
    textbook1.setReviewQuestions();

    cout << "Textbook 1 updated: " << textbook1.getTitle() << " by " << textbook1.getAuthor()
        << ", " << textbook1.getPageCount() << " pages. Subject: " << textbook1.getSubject()
         << ", Grade Level: " << textbook1.getGradeLevel() << ", Review Quesions: " 
         << textbook1.checkReviewQuestions();
  
  //Create a new novel object using the default constructor
  Novel my_novel("The Great Gatsby", "F. Scott Fitzgerald", 218, "Literary Fiction");
    
    //Tests getters
    std::cout << "My novel's genre is " << my_novel.getGenre() << std::endl;
    
    //Tests setters
    my_novel.setGenre("Romance");
    
   std::cout << "My novel's genre is now " << my_novel.getGenre() << std::endl;
    
    //Tests addCharacter function which adds characters to vector
    my_novel.addCharacter("Jay Gatsby");
    my_novel.addCharacter("Daisy Buchanan");
    my_novel.addCharacter("Tom Buchanan");
    
    //returns all strings stored inside vector containing characters of novel
   std::cout << "My novel's characters are: " << my_novel.getCharacterListString() << std::endl;
    
    //tests the setFilmAdaptation to see if it returns true
    my_novel.setFilmAdaptation();
    std::cout << "My novel has a film adaptation: " << std::boolalpha << my_novel.hasFilmAdaptation() << std::endl;
    
    //Tests the createReview function which contains a double score and string rating
    review r1 = my_novel.createReview(2.5, "Epic");
    review r2 = my_novel.createReview(1.0, "Sucks");
    review r3 = my_novel.createReview(3.0, "Terrible");
    
    //Adds review to the vector
    my_novel.addReview(r1);
    my_novel.addReview(r2);
    my_novel.addReview(r3);
    
   
    //Tests the getAverageRating which takes the results from the calculateAverageRating and returns the average rating based on scores from review vector
    std::cout << "My novel's average rating is: " << my_novel.getAverageRating() << std::endl;


  return 0;
}