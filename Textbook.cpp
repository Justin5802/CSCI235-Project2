#include "Textbook.hpp"
#include <iostream>
#include <string>
//The Textbook class. Every Textbook has a subject (e.g., math, computer science, politics, etc.) and a "grade level" difficulty to determine what type of students the textbook is meant for (college or high school). Textbooks may or may not have practice review questions in them.


Textbook::Textbook(){
    /**
  Default constructor.
  Default-initializes all private members.
*/
    std::string subject_ = "";
    grade_level grade_level_ = NONE;
    bool review_questions_ = false;
}

Textbook::Textbook(std::string title, std::string author, int page_count, std::string subject, bool is_digital, grade_level grade, bool review_questions) : Book(title, author, page_count, is_digital){
    /**
  Parameterized constructor.
  @param     : The title of the book (a string)
  @param     : The author of the book (a string)
  @param     : The number of pages in the book (a positive integer)
  @param     : The subject of the book (a string)
  @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
  @param     : The grade level of the book (of type grade_level)
                with DEFAULT VALUE NONE
  @param     : A boolean to indicate whether the book has review
                questions with DEFAULT VALUE False
  @post      : The private members are set to the values of the
                corresponding parameters.
*/
    subject_ = subject;
    review_questions_ = review_questions;
    grade_level_ = grade;
}

void Textbook::setSubject(const std::string& subject){
    /**
  @param  : a reference to a string representing the the subject of the book
  @post   : sets the private member variable to the value of the parameter
**/
    subject_ = subject;
}

std::string Textbook::getSubject() const{
    /**
  @return  : the subject of the textbook
**/
    return subject_;
}

void Textbook::setGradeLevel(const grade_level &grade){
    /**
  @param  : a reference to a grade_level
  @post   : sets the private member variable to the value of the parameter
**/
    grade_level_ = grade;
}

std::string Textbook::getGradeLevel() const{
    /**
  @return  : a string representative of the grade_level
            (e.g. if the grade level is JUNIOR_HIGH,
            it returns "JUNIOR HIGH")
**/
    std::string gradeLevelString;
    //uses if else statement such that if enum grade_level is equal to specific value, it returns a string representative without the underscore
    if (grade_level_ == NONE){
        return "NONE";
    }
    else if (grade_level_ == ELEMENTARY){
        return "ELEMENTARY";
    }
    else if (grade_level_ == JUNIOR_HIGH){
        return "JUNIOR HIGH";
    }
    else if (grade_level_ == HIGH_SCHOOL){
        return "HIGH SCHOOL";
    }
    else if (grade_level_ == COLLEGE){
        return "COLLEGE";
    }
    else{
        return "NONE";
    }
}
    
void Textbook::setReviewQuestions(){
    /**
  @post   : sets the review question flag to True
**/
    review_questions_ = true;
}
   


bool Textbook::checkReviewQuestions() const{
/**
  @return  : the flag indicating if the texbook has review questions
**/
    return review_questions_;
}
