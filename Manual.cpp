#include "Manual.hpp"
#include <iostream>
#include <string>
#include <regex>

Manual::Manual(){
  /**
  Default constructor.
  Default-initializes all private members.
*/
    std::string URL_ = "";
    std::string device_ = "";
    bool visual_aid_ = false;
    bool website_ = false;
}

Manual::Manual(std::string title, std::string author, int page_count, std::string device, bool is_digital, std::string website, bool visual_aid) : Book(title, author, page_count, is_digital){
  /**
  Default constructor.
  Default-initializes all private members.
*/

    device_ = device;
    visual_aid_ = visual_aid;
    
    //uses an if-else statement using regex library to check if website matches characters and format of a regular website link
    // If a URL is provided, the website flag is set to True.If the URL is ill-formatted, the website is set to empty string and the website flag is set to False.
    if (std::regex_match(website, std::regex("(https?://)([\\w\\d-]+\\.?)+[A-Za-z]{2,}(/[\\w\\d-]*)*")))
    {
        URL_ = website;
        website_ = true;
    }
    //if it does not, it sets private URL member to empty string and website flag to false
    else
    {
        URL_ = "";
        website_ = false;
    }
} 

void Manual::setDevice(const std::string& device){
  /**
  @param  : a reference to a string representing the device
  @post   : sets the private member variable to the value of the parameter
**/
  device_ = device;
}

std::string Manual::getDevice() const{
  /**
  @return  : the variable indicating the device the manual is for
**/
  return device_;
}

bool Manual::setWebsite(const std::string& website){
  /**
  @param   : a reference to a website link (string) that is in the format
             'https://www.something.something'
             or 'http://www.something.something'
             with the last 'something' being at least 2 characters
  @return  : has_website_ flag (a boolean)
  @post    : If the link is not correctly formatted,
             store "Broken Link" in the link member variable (see <regex>)
             and either way set the has website flag to True
**/
   if (std::regex_match(website, std::regex("(https?://)([\\w\\d-]+\\.?)+[A-Za-z]{2,}(/[\\w\\d-]*)*")))
    {
        URL_ = website;
    }
    else
    {
        URL_ = "Broken Link";
    }
    website_ = true;
    return website_;
}
    
std::string Manual::getWebsite() const{
  /**
  @return  : the url for the website
**/
  return URL_;
}

void Manual::setVisualAid(const bool& visual_aid){
  /**
  @param  : a reference to boolean
  @post   : sets the private member variable indicating the presence
            of a visual aid to the value of the parameter
**/
  visual_aid_ = visual_aid;
}

bool Manual::hasVisualAid() const{
  /**
  @return  : the visual aid flag
**/
  return visual_aid_;
}

bool Manual::hasWebsite() const{
  /**
  @return  : the has website flag
**/
  return website_;
}