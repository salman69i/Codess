#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;

    cout<<"enter a int number = ";
    cin>>num;

    if(num>0)
    {
        cout<<"positive";

    }
    else if(num<0)
    {
        cout<<"negative";
    }

    else if (num==0)
    {
        cout<<"zero";

    }


    getch();


}
