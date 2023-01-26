#include<iostream>
using namespace std;
int main(){
       int n,i,j;
       cin>> n;
       for(i=n;i>0;i--){
           for(j=1;j<=n-2;j++){
               cout<<j;
           }
           for(j=n-3;j>0;j--){
               cout<<j;
           }
           cout<<endl;
       }
}