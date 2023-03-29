#include <iostream>
#include "forme.h"
#include "cercle.h"
#include "carre.h"
#include "rectangle.h"
using namespace std;

int main() {
    cout<<"-----------------------"<<endl;
    cout<<"Test avec les pointeurs"<<endl;
    cout<<"-----------------------"<<endl;
    forme *f1= new cercle (17);
    forme *f2 = new carre (18);
    forme *f3 = new rectangle (19, 20);
    f1->disp ();
    f2->disp();
    f3->disp();
    delete f1;
    delete f2;
    delete f3;
}