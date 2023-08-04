#include <iostream>
#include <vector>
#include <memory>
#include <fstream>
#include <string>
#include <map>
#include "nlohmann\json.hpp"

using namespace std;

struct film
{
    string country;
    string datePremiere;
    string studio;
    string scriptwriter;
    string director;
    string producer;
    map<string, string> actors;
};

int main()
{
    int count = 5;
    film movie[5];
    string names[count] = {
        "The Super Mario Bros. Movie",
        "Guardians of the Galaxy Vol. 3",
        "Spider-Man: Across the Spider-Verse",
        "Dungeons & Dragons: Honor Among Thieves",
        "Oppenheimer"};
    ifstream file("C:/Users/User/all-tacks/task-2/src/film2.json");
    nlohmann::json movi[5];
    for (int i = 0; i < 5; i++)
    {
        file >> movi[i];
        movie[i].country = movi[i][names[i]]["country"];
        movie[i].datePremiere = movi[i][names[i]]["datePremiere"];
        movie[i].studio = movi[i][names[i]]["studio"];
        movie[i].scriptwriter = movi[i][names[i]]["scriptwriter"];
        movie[i].director = movi[i][names[i]]["director"];
        movie[i].producer = movi[i][names[i]]["producer"];
        movie[i].actors = movi[i][names[i]]["actor"];
    }
    cout << "Enter actors: ";
    string actor;
    cin >> actor;
    for (int i = 0; i < count; i++)
    {
        if (movie[i].actors.find(actor) != movie[i].actors.end())
        {
            cout <<  "movie: " << names[i] << endl << "pole: " << movie[i].actors.at(actor) << endl;
        }
    }
    file.close();
}
