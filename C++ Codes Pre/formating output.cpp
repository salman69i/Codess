#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{

      float nmb1,nmb2;

   cout << "Enter two numbers = ";
   cin >> nmb1 >>nmb2;

    cout<<showpoint;          //to show numbers after point
    cout<<fixed;                //to show numbers specifically after point
    cout<<setprecision(7);   //must use a header file

    float sum = nmb1 + nmb2;
    cout <<setw(20) <<"Sum is = " <<sum ;    //the aim to use setw(set with) is to enrich beauty in output
    cout<<endl;

     float sub = nmb1-nmb2;
    cout <<setw(20) << "subtraction is = " <<sub ;
    cout<<endl;


      float mul = nmb1*nmb2;
    cout <<setw(20) << "multiplication is = " << mul ;
    cout<<endl;

    double div = (float) nmb1/nmb2;  //type casting
    cout << setw(20) <<"division is = " <<div ;
    cout <<endl;

    //int rem = nmb1 % nmb2;
    //cout << "remaining is = " <<rem ;

    getch();






}

