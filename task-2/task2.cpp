#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <ctime>

using namespace std;

enum room_type{
    bedroom, 
    kitchen, 
    bathroom,
    children,
    living
};

enum building_type{
    home,
    garage, 
    shed, 
    sauna
};
struct info{
    int number;
    float square;
    int count_building;
    vector<building_type> building = {home}; 
    vector<float>square_building;
    bool house_furnace_pipe;
    bool sauna_furnace_pipe;
    int count_floor;
    vector<int>count_room_floor;
    vector<room_type>room_floor;
    vector<float>square_room;
    vector<float>heigth_floor;
};

int main()
{
    vector<info>plot_village;
    cout << "Enter number of plots in the village:";
    int count_plots;
    cin >> count_plots;
    for(int i=0;i<count_plots;i++){
        info temp;
        float z;
        string word;
        cout << "Enter number plot:";
        cin >> temp.number;
        cout << "Enter square plot:";
        cin >> temp.square;
        cout << "Enter count  building(with house):";
        cin >> temp.count_building;
        if(temp.count_building < 1 || temp.count_building> 4){
            cout << "Incorrect input. Re-enter.";
            i--;
            continue;
        }
        cout << "Enter square house:";
        cin >> z;
        temp.square_building.push_back(z);
        cout << "Is there a stove with a pipe in the house on the plot?";
        cin >> word;
        temp.house_furnace_pipe = word == "yes";
        for(int j = 1;j<temp.count_building;j++){
            cout << "Enter building in a plot:";
            cin >> word;
            if(word == "garage"){
                temp.building.push_back(building_type::garage);
            }else if(word == "shed"){
                temp.building.push_back(building_type::shed);
            }else if(word == "sauna"){
                temp.building.push_back(building_type::sauna);
                cout << "Is there a stove with a pipe in the sauna?";
                cin >> word;
                temp.sauna_furnace_pipe = word == "yes";
                word = "sauna";
            }else{
                cout << "Incorrect input. Re-enter.";
                j--;
                continue;
            }
            cout << "Enter square "<< word;
            cin >> z;
            temp.square_building.push_back(z);
        }
        cout << "Enter count floor";
        cin >> temp.count_floor;
        if(temp.count_floor <1||temp.count_floor>3){
            cout << "Incorrect input. Re-enter all";
            i--;
            continue;
        }
        for(int q=0;q<temp.count_floor;q++){
            cout << "Enter heigth "<< q+1 << " floor:";
            cin >> z;
            temp.heigth_floor.push_back(z);
            cout << "Enter count rooms in "<< q+1 << " floor:";
            cin >> z;
            if(z<2||z>4){
                cout << "Incorrect input. Re-enter";
                q--;
                continue;
            }
            temp.count_room_floor.push_back(z);
            for (int h = 0; h < z; h++)
            {
                cout << "Enter rooms in "<< q+1 << " floor:";
                string word;
                cin >> word;
                if(word == "living"){
                    temp.room_floor.push_back(room_type::living);
                }else if (word == "bedroom"){
                    temp.room_floor.push_back(room_type::bedroom);
                }else if (word == "kitchen"){
                    temp.room_floor.push_back(room_type::kitchen);
                }else if (word == "bathroom"){
                    temp.room_floor.push_back(room_type::bathroom);
                }else if (word == "children"){
                    temp.room_floor.push_back(room_type::children);
                }else{
                    cout << "Incorrect input. Re-enter";
                    h--;
                }
                float sq;
                cout << "Enter square "<< word;
                cin >> sq;
                temp.square_room.push_back(sq);
            }
        } 
        plot_village.push_back(temp);
    }
}


                    
