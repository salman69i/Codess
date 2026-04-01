#include<iostream>
#include<conio.h>
using namespace std;

int main()

{

    double cel,far;
                                                              //farenhite to celcious
    cout<<"enter the temperature :";
    cin>>far;

    cel = (far-32)/1.8;
     cout<<"the celcious temperature is = "<<cel;


     getch();




}



#include<iostream>
#include<conio.h>
using namespace std;

int main()

{

    double cel,far;

    cout<<"enter the celcious temperature = ";
    cin>>cel;
                                                           // celcious to farenhite
    far  = 1.8*cel +32;

    cout<< "farenhite temperature is = "<<far;

    getch();





}
