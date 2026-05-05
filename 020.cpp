#include <iostream>
#include <vector>
#include <limits.h>
using namespace std ;

int maxElement(vector<int> &arr,int n ,int i){
    if(i==n-1){
        return arr[i];
}
int possibleMax = maxElement(arr,n,i+1);

return max(arr[i],possibleMax);
}

int main (){
vector<int> arr{7,8,9,2,5};
int n =5;
int i = 0;
int max = maxElement(arr,n,i);
cout<<"Largest element of array is : "<<max;
}