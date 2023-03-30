//
// Created by coolj on 3/29/2023.
//

#ifndef MOCKEXAM_CARRE_H
#define MOCKEXAM_CARRE_H
using namespace std;
class carre:public forme {
public:
    carre(double=0);
    virtual void disp();
    virtual double perimetre();
    virtual double aire();
    int type();
    virtual ~carre(){};
};
carre::carre(double a):forme(a) {}
double carre::perimetre() {return (4*x);}
double carre::aire() {return (pow(x,2));}
int carre::type() {return 2;}
void carre::disp() {
    line();
    cout<<"It's a square"<<endl;
    line();
    cout<<"The side is : "<<x<<endl;
    cout<<"Perimeter : "<<perimetre()<<endl<<"Area : "<<aire()<<endl<<"Type : "<<type()<<endl;line();
}
#endif //MOCKEXAM_CARRE_H
