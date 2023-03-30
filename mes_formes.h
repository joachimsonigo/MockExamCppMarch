//
// Created by Joachim Sonigo on 3/29/2023.
//

#ifndef MOCKEXAM_MES_FORMES_H
#define MOCKEXAM_MES_FORMES_H
#include <vector>
#include "forme.h"

class mes_formes {
protected:
    vector<forme*> m_formes;
public:
    mes_formes(){};
    ~mes_formes(){};
    void add();
    void disp();
    void pop();
};

void mes_formes::add() {
    int type;
    cout<<"What shape type are you trying to add?(1 for circle 2 for square and 3 for rectangle)"<<endl;
    cin>>type;
    if (type == 1){
        double x;
        cout<<"What is the radius of your circle?"<<endl;
        cin>>x;
        m_formes.push_back(new cercle(x));
    }
    else if (type == 2){
        double x;
        cout<<"What's the length of your square?"<<endl;
        cin>>x;
        m_formes.push_back(new carre(x));
    }
    else if (type ==3){
        double x,y;
        cout<<"Whats the length of you rectangle?"<<endl;
        cin>>x;
        cout<<"What's your rectangle's width?"<<endl;
        cin>>y;
        m_formes.push_back(new rectangle(x,y));
    }
    else cout<<"You can't have this shape"<<endl;
}
void mes_formes::pop() {
    int index;
    cout<<"What's the index of the vehicle you want to remove from your garage?"<<endl;
    cin>>index;
    m_formes.erase(m_formes.begin() + index-1);
}
void mes_formes::disp() {
    for (int i = 0; i < size(m_formes); ++i) {
        m_formes[i]->disp();
    }
}
#endif //MOCKEXAM_MES_FORMES_H
