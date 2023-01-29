#include <iostream>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        ans^=x[i];
    }
    cout<<ans;
}