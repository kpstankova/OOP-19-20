#pragma once
#include <iostream>
#include <cmath>

class Point{
    double x;
    double y;
public:
    void create(double x, double y){
        this->x = x;
        this->y = y;
    }
    void print() const{
        std::cout<<"("<<x<<","<<y<<")"<<"\n";
    }

    double getX() const{
        return this->x;
    }
    double getY() const{
        return this->y;
    }

    void setX(double x){
        this->x = x;
    }
    void setY(double y){
        this->y = y;
    }

    int where() const{
        if(x>0 && y>0)
            return 1;
        if(x<0 && y>0)
            return 2;
        if(x<0 && y<0)
            return 3;
        if(x>0 && y<0)
            return 4;

        return 0;
    }

    bool operator==(const Point& other){
        return (this->x == other.x && this->y == other.y);
    }
};

class Line{
private:
    Point p1;
    Point p2;

public:
    Line(){
        p1.create(0, 0);
        p2.create(0, 0);
    }
    Line(const Point& p1, const Point& p2){
        this->p1.setX(p1.getX());
        this->p1.setY(p1.getY());
        this->p2.setX(p2.getX());
        this->p2.setY(p2.getY());
    }

    void setP1(const Point& other){
        this->p1.setX(other.getX());
        this->p1.setY(other.getY());
    }
    Point& getP1() const{
        return p1;
    }
    void setP2(const Point& other){
        this->p2.setX(other.getX());
        this->p2.setY(other.getY());
    }
    Point& getP2() const{
        return p2;
    }

    double distance() const{
        return sqrt((p1.getX() - p2.getX())*(p1.getX() - p2.getX()) +
                    (p1.getY() - p2.getY())*(p1.getY() - p2.getY()));
    }

    bool check(){
        return p1.where() == p2.where();
    }

};

class Triangle{
private:
    Line first;
    Line second;
    Line third;

public:
    Triangle(const Line& first, const Line& second, const Line& third);
    void setFirst(const Line& other);
    void setSecond(const Line& other);
    void setThird(const Line& other);
    Line& getFirst() const;
    Line& getSecond() const;
    Line& getThird() const;
    bool isTriangle() const;
    void findAreaPerimeter() const;
};
