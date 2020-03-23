#include "Triangle.h"

Triangle::Triangle(const Line& first, const Line& second, const Line& third){
    this->setFirst(first);
    this->setSecond(second);
    this->setThird(third);
}


void Triangle::setFirst(const Line& other) {
    this->first.setP1(other.getP1());
    this->first.setP2(other.getP2());
}
void Triangle::setSecond(const Line& other) {
    this->second.setP1(other.getP1());
    this->second.setP2(other.getP2());
}
void Triangle::setThird(const Line& other) {
    this->third.setP1(other.getP1());
    this->third.setP2(other.getP2());
}


Line& Triangle::getFirst() const{
    return this->first;
}
Line& Triangle::getSecond() const{
    return this->second;
}
Line& Triangle::getThird() const{
    return this->third;
}


void Triangle::findAreaPerimeter() const{
    std::cout<<"The perimeter is "
            <<first.distance() + second.distance() + third.distance()<<"\n";

    double p = (first.distance() + second.distance() + third.distance()) / 2;
    double s = sqrt(p*(p - first.distance())*(p - second.distance())*(p - third.distance()));
    std::cout<<"The area is "<<s;
}
bool Triangle::isTriangle() const{
    if (first.getP1()==second.getP1()){
        if(second.getP2()==third.getP1()){
            if(first.getP2()==third.getP2()){
                return true;
            }
        }
    }
    if (first.getP1()==second.getP2()){
        if(second.getP1()==third.getP2()){
            if(first.getP2()==third.getP1()){
                return true;
            }
        }
    }

    return false;
}
