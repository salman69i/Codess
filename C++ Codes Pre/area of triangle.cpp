#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
                                 // sequence of work :
    double base,height,area;                          //1.input
                                                      //2.process
    cout<<"enter the base =";                         //3.output
    cin>>base;

    cout <<"enter the Heigth = ";
    cin>>height;

    area = 0.5 * base * height ;
    cout<<"the area is = "<<area;

    getch();
}
