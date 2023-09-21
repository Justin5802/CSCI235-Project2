#include "Book.hpp"
#include <iostream>
#include <string>
//The Textbook class. Every Textbook has a subject (e.g., math, computer science, politics, etc.) and a "grade level" difficulty to determine what type of students the textbook is meant for (college or high school). Textbooks may or may not have practice review questions in them.

//- An enum named `grade_level` with values `{NONE,  ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE}`in that order.
enum grade_level{NONE, ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE};

class Textbook:public Book{//creates class Textbook and inherits public members from class Book
	/**
  Default constructor.
  Default-initializes all private members.
*/
	public:
		Textbook();
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
		Textbook(std::string title, std::string author, int page_count, std::string subject, bool is_digital = false, grade_level grade = NONE, bool review_questions = false);
		void setSubject(const std::string& subject);
		std::string getSubject() const;
		
		void setGradeLevel (const grade_level &grade);
		std::string getGradeLevel() const;
		
		void setReviewQuestions();
		bool checkReviewQuestions() const;



	private:
		std::string subject_;
		grade_level grade_level_;
		bool review_questions_;


};
