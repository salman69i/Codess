#include<iostream>
using namespace std;
int main(){
    int n,i,a,b,c,ans=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c;
        int sum = a+b+c;
        if(sum>=2){
            ans++;

        }
    }
    cout << ans << "\n";
    return 0;

}