#include <iostream>
using namespace std;

int fabi(int n){
    if(n==0){
        return 0;

    }
if(n==1||n==2){
    return 1;
}

return fabi(n-1) + fabi (n-2);
    
}

int main (){
    int n ;
    cout<<"Enter the value of n : ";
    cin>>n;
   

    for(int i = 0;
    i<n;
i++){cout<<fabi(i)<< " ";}
    
}