#include<iostream>
#include<cmath>
using namespace std;
struct Rectangle{
    double height;
    double width;

    void create(double h, double w){
        if(h<=0 || w<=0){
            cout<<"Invalid height and width!";
            return;
        }
        height = h;
        width = w;
    }

    void print(){
        cout<<"Height: "<<height<<endl;
        cout<<"Width: "<<width<<endl;
    }

    double radius(){
        return sqrt(height*height + width*width) / 2;
    }

    double area(){
        return height*width;
    }

    double perimeter(){
        return 2*(height + width);
    }
};
