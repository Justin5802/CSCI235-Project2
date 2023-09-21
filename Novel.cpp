#include "Novel.hpp"
#include <iostream>
#include <vector>
#include <string>

Novel::Novel(){
    /**
  Default constructor.
  Default-initializes all private members.
*/
    std::string genre_ = "";
    std::vector<std::string> character_list_;
    std::vector<struct review> reviews_;
    double average_rating_ = 0.0;
    bool film_adaptation_= false;    
}

Novel::Novel(std::string title, std::string author, int page_count, std::string genre, bool is_digital, bool is_film) : Book(title, author, page_count, is_digital){
    /**
  Parameterized constructor.
  @param     : The title of the book (a string)
  @param     : The author of the book (a string)
  @param     : The number of pages in the book (a positive integer)
  @param     : The genre of the novel (a string)
  @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
  @param     : A flag indicating whether there is a film adaptation
                for this novel with DEFAULT VALUE False (a Boolean)
*/
    genre_ = genre;
    film_adaptation_ = is_film;
}

std::string Novel::getGenre() const{
    /**
  @return   : the value of the genre private member
**/
    return genre_;
}

void Novel::setGenre(const std::string& genre){
    /**
  @param  : a reference to string indicating the genre of the book
  @post   : sets genre_ private member to the
              value of the parameter
**/
    genre_ = genre;
}

std::vector<std::string> Novel::getCharacterList() const{
    /**
  @return   : the vector containing the list of characters for this novel
**/
    return character_list_;
}

std::string Novel::getCharacterListString()const{
   /**
  @return    : a string of all the characters in the
              character_list_ private member, concatenated
              and separated by a space " " .
              For example: "character1 character2 character3"
**/
      std::string characters;
        for (std::string character : character_list_) {
            characters += character + " ";
        }
        return characters;
    }



void Novel::addCharacter(const std::string& character){
    /**
  @param  : a reference to string indicating a character
  @post   : inserts the character into the character_list_ vector
**/
    character_list_.push_back(character);
         
}

bool Novel::hasFilmAdaptation() const{
    /**
  @return   : the value of the film_adaptation_ private member
**/
    return film_adaptation_;
}

void Novel::setFilmAdaptation(){
    /**
  @post   : sets has_film_adaptation_ private member to true
**/
    film_adaptation_ = true;
}

double Novel::getAverageRating() const{
    /**
  @return   : the value of the average rating private member
**/
    return average_rating_;
}

review Novel::createReview(const double& score, const std::string& rating){
    /**
  @param    : a reference to floating point number (double) indicating
              the score of the  review
  @param    : a reference to string indicating the rating of the review
  @return   : creates and returns a review data type with
              score and rating as indicated by the parameters
*/
    return {score, rating};
    
    
}

void Novel::addReview(const review& new_review){
    /**
  @param  : a reference to review object
  @post   : inserts the review argument into the reviews_ vector
**/
    reviews_.push_back(new_review);
}

void Novel::calculateAverageRating(){
    /**
  @post   : retrieves all scores from the reviews_ vector and
            computes the average to set value of the average_rating_
            private member
**/  
    double total_score = 0.0;
            for (const auto &review : reviews_) {
                total_score += review.score_;
            }
            average_rating_ = total_score/reviews_.size();
}
