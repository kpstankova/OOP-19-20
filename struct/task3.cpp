#include <iostream>
#include <cstring>

using namespace std;

const double sunLightSpeed = 299792;


struct Planet{
    char name[100];
    double distance;
    double diameter;
    double weight;

    void create(){
        cin.ignore();
        cout<<"Enter a name: ";
        cin.getline(name, 100);
        cout<<"Enter distance: ";
        cin>>distance;
        cout<<"Enter diameter: ";
        cin>>diameter;
        cout<<"Enter weigth: ";
        cin>>weight;
    }

    void print(){
        cout<<"The name of the planet: "<<name<<endl;
        cout<<"The distance from the sun is: "<<distance<<endl;
        cout<<"The diameter of the planet is: "<<diameter<<endl;
        cout<<"The weight of the planet is: "<<weight<<endl;
    }

    void time(){
        return distance / sunLightSpeed;
    }
};

int main()
{
    Planet planets[10];
    for(int i=0; i<10; ++i){
        planets[i].create();
    }
    for(int i=0; i<10; ++i){
        planets.print();
    }


    return 0;
}
