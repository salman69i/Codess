#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int nmb1,nmb2;

   cout << "Enter two numbers = ";     // to show the line before giving any input
   cin >> nmb1 >>nmb2;

    int sum = nmb1 + nmb2;
    cout << "Sum is = " <<sum ;
    cout<<endl;

   int sub = nmb1-nmb2;
    cout << "subtraction is = " <<sub ;
    cout<<endl;

    double mul = nmb1*nmb2;
    cout << "multiplication is = " << mul ;
    cout<<endl;

    double div = (float) nmb1/nmb2;  //type casting (same numbers can't be divided )
    cout << "division is = " <<div ;
    cout <<endl;

    int rem = nmb1 % nmb2;
    cout << "remaining is = " <<rem ;

    getch();






}

