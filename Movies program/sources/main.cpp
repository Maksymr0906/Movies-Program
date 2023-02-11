#include <iostream>
#include "Movies.hpp"


using namespace std;

void add_movie(Movies& movies, std::string name, std::string rating, int watched);
void increment_watched(Movies& movies, std::string name);

int main()
{
    Movies my_movies;
    my_movies.display();
    add_movie(my_movies, "BIG", "PG-13", 1);
    my_movies.display();
    increment_watched(my_movies, "BIG");
    add_movie(my_movies, "Cinderella", "PG-13", 9);
    cout << "==================================\n";
    my_movies.display();
}


void add_movie(Movies& movies, std::string name, std::string rating, int watched)
{
    if(movies.add_movie(name, rating, watched))
    {
        cout << name << " added\n";
    }
    else cout << name << " already exist\n";
}

void increment_watched(Movies& movies, std::string name)
{
    if(movies.increment_watched(name))
    {
        cout << name << " incremented\n";
    }
    else cout << name << "can't incremented\n";
}