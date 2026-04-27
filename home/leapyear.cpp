#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a year: ";
    cin >> x;
    if ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0))
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "Not a Leap Year" << endl;
    }
    return 0;
}
