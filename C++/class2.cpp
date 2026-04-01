#include<bits/stdc++.h>
using namespace std;
int main()
{
  float Teaprice,Biscuitprice,Waterprice,Totalincome;
  int teasold,biscuitsold,watersold;

    cout << "Number of tea sold: " ;
    cin>>teasold;
    cout << "Number of biscuit sold: ";
    cin>>biscuitsold;
    cout << "Number of water sold: ";
    cin>>watersold;
    cout << "Price of per tea : ";
    cin>>Teaprice;
    cout << "Price of per Biscuit: ";
    cin>>Biscuitprice;
    cout << "Price of per water: ";
    cin>>Waterprice;

    Totalincome = (Teaprice*teasold)+(Biscuitprice*biscuitsold)+(Waterprice*watersold);

    cout << "Total income: " <<Totalincome;

    return 0;

}