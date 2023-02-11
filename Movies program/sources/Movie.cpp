#include "Movie.hpp"
#include <iostream>

 Movie::Movie(std::string name_val, std::string rating_val, int watched_val)
 :name{name_val}, rating{rating_val}, watched{watched_val}         {
 }
 Movie::~Movie()
 {

 }

 Movie::Movie(const Movie& source)
 :name{source.name}, rating{source.rating}, watched{source.watched}         {
 }

void Movie::display()   const
{
    std::cout << name << " " << rating << " " << watched << std::endl;
}
