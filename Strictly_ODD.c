#include<iostream>
using namespace std;
int main(){
    int i,count=0,n,c=0;
        cin>>n;
        int x[n];
        for(i=0;i<n;i++)
        {
            cin>>x[i];
        }
        
        for(i=0;i<n;i++)
        {
            if(x[i]%2!=0 && i%2!=0)
            {
                count++;
            }
            if(x[i]%2!=0)
            {
                c++;
            }
        }
        if(c==count)
            cout<<"True";
        else
            cout<<"False";
}