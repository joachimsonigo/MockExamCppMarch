#include <iostream>
#include "forme.h"
#include "cercle.h"
#include "carre.h"
#include "rectangle.h"
#include "mes_formes.h"
using namespace std;

void menu(){
    int choice;
    mes_formes mf;
    do {
        do {
            cout<<"-----------------\n\tMenu\n-----------------"<<endl;
            cout<<"1-Add\n2-Show\n3-Delete\n4-Exit"<<endl;
            cout<<"--------------"<<endl;
            cin>>choice;
        }while(choice<1 || choice > 4);
        if (choice ==1){
            mf.add();
        }
        else
        if (choice == 2){
            mf.disp();
            system("pause");
        }
        else
        if (choice == 3){
            mf.disp();
            system("pause");
            mf.pop();
        }
    }while(choice != 4);
    system("color 04");
    cout<<"Goodbye, fenk yu for using this program."<<endl;
}

int main() {
    system("color 0A");
    menu();
    return 0;
}