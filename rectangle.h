//
// Created by Joachim Sonigo on 3/29/2023.
//

#ifndef MOCKEXAM_RECTANGLE_H
#define MOCKEXAM_RECTANGLE_H
using namespace std;
class rectangle:public carre {
protected:
    double y;
public:
    rectangle(double=0,double=0);
    virtual void disp();
    virtual double perimetre();
    virtual double aire();
    int type();
    virtual ~rectangle(){};
};
rectangle::rectangle(double a,double b): carre(a),y(b) {}
double rectangle::perimetre() {return (2*(x+y));}
double rectangle::aire() {return (x*y);}
int rectangle::type() {return 3;}
void rectangle::disp() {
    line();
    cout<<"It's a rectangle"<<endl;
    line();
    cout<<"The length is : "<<x<<" and the width is : "<<y<<endl;
    cout<<"Perimeter : "<<perimetre()<<endl<<"Area : "<<aire()<<endl<<"Type : "<<type()<<endl;line();
}
#endif //MOCKEXAM_RECTANGLE_H
