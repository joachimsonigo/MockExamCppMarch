//
// Created by Joachim Sonigo on 3/29/2023.
//

#ifndef MOCKEXAM_CERCLE_H
#define MOCKEXAM_CERCLE_H
#include <iostream>
#include <cmath>
using namespace std;
class cercle:public forme {
public:
    cercle(double=0);
    virtual void disp();
    virtual double perimetre();
    virtual double aire();
    int type();
    virtual ~cercle(){};
};
cercle::cercle(double a):forme(a) {}
double cercle::perimetre() {return (2*M_PI*x);}
double cercle::aire() {return (M_PI*pow(x,2));}
int cercle::type() {return 1;}
void cercle::disp() {
    line();
    cout<<"It's a circle"<<endl;
    line();
    cout<<"The radius is : "<<x<<endl;
    cout<<"Perimeter : "<<perimetre()<<endl<<"Area : "<<aire()<<endl<<"Type : "<<type()<<endl;line();
}
#endif //MOCKEXAM_CERCLE_H
