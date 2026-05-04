#include <iostream>
using namespace std;

void printTilN(int   n ){
    if(n==0){
        return;
    }

  printTilN(n-1);
    cout<<n <<" ";
}

int main (){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
  printTilN(n);
    
}