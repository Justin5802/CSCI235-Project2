#include "Book.hpp"
#include <iostream>
#include <vector>
#include <string>
//The Novel class. What we mostly think of when we think of books. Fictional novels come in all sorts of genres (horror, mystery, etc.) and they include a cast of characters. Novels may have film adaptations. Each Novel also has a list of reviews. Each review has a score that is used to calculate the average score of the novel.

//defines structure of type review that takes in score and rating
struct review {
    double score_;
    std::string rating_;
};


class Novel:public Book{
    public:
    /**
  Default constructor.
  Default-initializes all private members.
*/

        Novel();
        Novel(std::string title, std::string author, int page_count, std::string genre, bool is_digital = false, bool is_film = false);
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
        std::string getGenre() const;
        void setGenre (const std::string& genre);
        std::vector<std::string> getCharacterList() const;
        std::string getCharacterListString() const;

        void addCharacter(const std::string& character);
        bool hasFilmAdaptation () const;
        void setFilmAdaptation();

        double getAverageRating() const;
        review createReview(const double& score, const std::string& rating);

        void addReview(const review& new_review);
        void calculateAverageRating();
    
    
    
    private:
        std::string genre_;
        std::vector<std::string> character_list_;
        std::vector<struct review> reviews_;
        double average_rating_;
        bool film_adaptation_;    
};

