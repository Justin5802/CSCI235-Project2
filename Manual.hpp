#include "Book.hpp"
#include <iostream>
#include <string>
//The Manual class. Instruction manuals are those oversized books you get with an elecronic instrument or some house appliance. Each Manual has a device that it belongs to, an optional website associated with it, and optional visual aids (for example, assembly instructions).

//creates class Manual that inherits public members from class Book
class Manual:public Book{
	/**
  Default constructor.
  Default-initializes all private members.
*/
	public:
		Manual();
/**
  Parameterized constructor.
  @param     : The title of the book (a string)
  @param     : The author of the book (a string)
  @param     : The number of pages in the book (a positive integer)
  @param     : The name of the device (a string)
  @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
  @param     : The URL that is in the format
                'https://www.something.something'
                or 'http://www.something.something'
                with the last 'something' being at least 2 characters
                with DEFAULT VALUE empty string (a string)
  @param     : A Boolean indicating the presence of a visual aid
                with DEFAULT VALUE False
  @post      : The private members are set to the values of the
                corresponding parameters.
                If a URL is provided, the website flag is set to True.
                If the URL is ill-formatted, the website is set to
                empty string and the website flag is set to False.
*/
		Manual(std::string title, std::string author, int page_count,  std::string device,  bool is_digital = false, std::string website = "",  bool visual_aid = false);
		void setDevice(const std::string& device);
		std::string getDevice() const;
		bool setWebsite(const std::string& website);
		std::string getWebsite() const;
		void setVisualAid(const bool& visual_aid);
		bool hasVisualAid() const;
		bool hasWebsite() const;

	private:
		std::string URL_;
		std::string device_;
		bool visual_aid_;
		bool website_;

};
