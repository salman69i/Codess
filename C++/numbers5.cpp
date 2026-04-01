#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >>a>>b>>c>>d;

    long long x = a*b*c*d;

    int i,j;
    i= x%10;
    x=x/10;
    j=x%10;

    cout <<j <<i;



    return 0;
}
