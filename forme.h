//
// Created by Joachim Sonigo on 3/29/2023.
//

#ifndef MOCKEXAM_FORME_H
#define MOCKEXAM_FORME_H
#include <iostream>
using namespace std;

class forme{
protected:
    double x;
public:
    forme(double=0);
    forme(forme &);
    virtual void disp()=0;
    virtual ~forme(){}
    virtual double perimetre(){return 0;};
    virtual double aire(){return 0;};
};

forme::forme(double a) {x=a;}
forme::forme(forme &f) { f.x=x;}
void forme::disp() {cout<<"It's a shape of value : "<<x<<endl;}
void line(){cout<<"-------------------"<<endl;}

#endif //MOCKEXAM_FORME_H
