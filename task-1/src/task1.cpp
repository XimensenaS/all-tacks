#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>
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
    film film;
    film.country = "USA";
    film.datePremiere = "05.04.23";
    film.studio = "Universal Pictures,Illumination,Nintendo";
    film.scriptwriter = "Matthew Vogel";
    film.director = "Aaron Horvath, Michael Jelenic";
    film.producer = "Christopher Meledandri,Shigeru Miyamoto";
    film.actors["Chris Pratt"] = "Mario";
    film.actors["Charlie Day"] = "Luigi";
    film.actors["Anya Taylor-Joy"] = "Princess Peach";
    film.actors["Jack Black"] = "Bowser";
    film.actors["Keegan-Michael Key"] = "Toad";
    ofstream file("C:/Users/User/all-tacks/task-1/src/film1.json");
    nlohmann::json kino = {
        {"country", film.country},
        {"datePremiere", film.datePremiere},
        {"studio", film.studio},
        {"scriptwriter", film.scriptwriter},
        {"director", film.director},
        {"producer", film.producer},
        {"actor", film.actors}};
    file << kino;
}
