#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <ctime>
#include <algorithm>

using namespace std;

enum direction{
    UP,
    LEFT,
    DOWN,
    RIGHT
};

struct position
{
    int x;
    int y;
};

struct person
{
    string name;
    int health_point=50;
    int armor = 0;
    int damade = 15;
};

void attack(person &a,person &d){
    cout << a.name << "inflicted damage to the character"<< d.name <<"in the amount of" << a.damade<< "."<<endl;
    d.armor -= a.damade;
    if(d.armor < 0){
        d.health_point += d.armor;
        d.armor = 0;
    }
    if(d.health_point < 0){d.health_point=0;}
}

int edge(int c){
    if(c==20){
        return 19;
    }else if(c==-1){
        return 0;
    }else return c;
}

void load(ifstream &file,person &character,position &coor){
    int len;
    file.read((char*)&len,sizeof(len));
    character.name.resize(len);
    file.read((char*)character.name.c_str(),len);
    file.read((char*)&character.health_point,sizeof(character.health_point));
    file.read((char*)&character.armor,sizeof(character.armor));
    file.read((char*)&character.damade,sizeof(character.damade));
    file.read((char*)&coor.x,sizeof(coor.x));
    file.read((char*)&coor.y,sizeof(coor.y));
}

int main(){
    bool starting = true;
    person main_character;
    person enemy[5];
    position coor_main_character;
    position coor_enemy[5];
    string command;
    cout << "Do you want to LOAD a save or START a new game(enter load or start):"<< endl;
    cin >> command;
    if(command == "load"){
        ifstream file(".//save.bin",ios::binary);
        if(!file.is_open()){
            cerr << "Unable to open the file.";
            return 1;
        }
        load(file,main_character,coor_main_character);
        for(int i=0;i<5;i++){
            load(file,enemy[i],coor_enemy[i]);
        }
        file.close();
    }else if(command == "start"){
        cout << "Enter name hero ";
        cin >> main_character.name;
        cout << "Enter name health hero ";
        cin >> main_character.health_point;
        cout << "Enter name armor hero ";
        cin >> main_character.armor;
        cout << "Enter name damade hero ";
        cin >> main_character.damade;
        srand(time(nullptr));
        coor_main_character.x = rand()%20;
        coor_main_character.y = rand()%20;
        for(int i=0;i<5;i++){
            enemy[i].name = "Enemy #" + to_string(i);
            enemy[i].health_point += rand()%101;
            enemy[i].armor = rand()%51;
            enemy[i].damade += rand()%16;
            coor_enemy[i].x = rand()%20;
            coor_enemy[i].y = rand()%20;
        }
    }else{
        starting = false;
        std::cerr << "Invalid operation"<< endl;
        return 1;
    }
    if(starting){
        while(main_character.health_point>0){
            char field[20][20];
            for(int x=0;x<20;x++){
                for(int y=0;y<20;y++){
                    field[x][y] = '.';
                }
            }
            int kills = 0;
            field[coor_main_character.x][coor_main_character.y] = 'P';
            for(int i=0;i<5;i++){
                if(enemy[i].health_point!=0){
                    field[coor_enemy[i].x][coor_enemy[i].y] = 'E';
                }else{kills++;}
            }
            if(kills==5)break;
            for(int x=19;x!=-1;x--){
                for(int y=0;y<20;y++){
                    cout << field[x][y]<< " ";
                }
                cout << endl;
            }
            cout << "Enter direction(up - w,left - a,down - s,rigth - d):";
            string move;
            cin >>  move;
            int future_x = coor_main_character.x;
            int future_y = coor_main_character.y;
            if(move == "w"){
                future_x++;
            }
            else if(move == "a"){
                future_y--;
            }
            else if(move == "s"){
                future_x--;
            }
            else if(move == "d"){
                future_y++;
            }
            else if (move == "save"){
                ofstream file("./save.bin",ios::binary);
                if(!file){
                    cerr << "Unable to open the file.";
                    return 1;
                }
                int len = main_character.name.length();
                file.write((char*)&len,sizeof(len));
                file.write(main_character.name.c_str(),len);
                file.write((char*)&main_character.health_point,sizeof(main_character.health_point));
                file.write((char*)&main_character.armor,sizeof(main_character.armor));
                file.write((char*)&main_character.damade,sizeof(main_character.damade));
                file.write((char*)&coor_main_character.x,sizeof(coor_main_character.x));
                file.write((char*)&coor_main_character.y,sizeof(coor_main_character.y));
                for(int e=0;e<5;e++){
                    len = enemy[e].name.length();
                    file.write((char*)&len,sizeof(len));
                    file.write(enemy[e].name.c_str(),len);
                    file.write((char*)&enemy[e].health_point,sizeof(enemy[e].health_point));
                    file.write((char*)&enemy[e].armor,sizeof(enemy[e].armor));
                    file.write((char*)&enemy[e].damade,sizeof(enemy[e].damade));
                    file.write((char*)&coor_enemy[e].x,sizeof(coor_enemy[e].x));
                    file.write((char*)&coor_enemy[e].y,sizeof(coor_enemy[e].y));
                }
                file.close();
                continue;
            }else if(move == "load"){
                ifstream file("./sive.bin",ios::binary);
                if(!file.is_open()){
                    cerr << "Unable to open the file.";
                    return 1;
                }
                load(file,main_character,coor_main_character);
                for(int i=0;i<5;i++){
                    load(file,enemy[i],coor_enemy[i]);
                }
                file.close();
                continue;
            }
            else{
                cerr << "Invalid operation"<< endl;
                continue;
            }
            for(int i =0;i<5;i++){
                if(future_x == coor_enemy[i].x &&
                future_y == coor_enemy[i].y && enemy[i].health_point!=0){
                    attack(main_character,enemy[i]);
                    future_x = coor_main_character.x;
                    future_y = coor_main_character.y;
                    break;
                }
            }
            coor_main_character.x=edge(future_x);
            coor_main_character.y=edge(future_y);
            for(int i=0;i<5;i++){
                if(enemy[i].health_point == 0)continue;
                future_x = coor_enemy[i].x;
                future_y = coor_enemy[i].y;
                int dir_enemy = rand()%4;
                if(dir_enemy == direction::UP){
                    future_x++;
                }
                else if(dir_enemy == direction::LEFT){
                    future_y--;
                }
                else if(dir_enemy == direction::DOWN){
                    future_x--;
                }
                else if(dir_enemy == direction::RIGHT){
                    future_y++;
                }
                for(int j =0;j<5;j++){
                    if(future_x == coor_enemy[j].x &&
                            future_y == coor_enemy[j].y && enemy[j].health_point!=0){
                        future_x = coor_enemy[i].x;
                        future_y = coor_enemy[i].y;
                    }
                }
                if(coor_main_character.x == future_x && coor_main_character.y == future_y){
                    attack(enemy[i],main_character);
                    future_x = coor_enemy[i].x;
                    future_y = coor_enemy[i].y;
                }
                coor_enemy[i].x = edge(future_x);
                coor_enemy[i].y = edge(future_y);
            }
        }
    }
    if(main_character.health_point <= 0){
        cout << "You dead.";
    }else{
        cout << "You win.";
    }
}
