#include "Movies.hpp"
#include <iostream>

void Movies::display()  const
{
    if(movies.empty())
    {
        std::cout << "Sorry, no movies to display\n";
    }
    else{
        for(const auto& movie: movies)
        {
            movie.display();
        }
    }
    
}

Movies::Movies()
{

}

Movies::~Movies()
{
    movies.clear();
}

bool Movies::add_movie(std::string name, std::string rating, int watched)
{
    for(const auto& movie: movies)
    {
        if(movie.get_name() == name)
            return false;
    }

    movies.push_back(Movie{name, rating, watched});
    return true;
}

bool Movies::increment_watched(std::string name)
{
    for(auto& movie: movies)
    {
        if(movie.get_name() == name)
        {
            int temp{movie.get_watched()};
            movie.set_watched(++temp);
            return true;
        }
    }

    return false;
}