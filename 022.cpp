#include <iostream>
#include <vector>
using namespace std ;

bool isSorted(vector<int> arr,int n , int i){
    if(i==n-1){
        return true;
    }
    if(arr[i+1]<arr[i]){
        return false;
    }

    return isSorted(arr,n,i+1);
}

int main (){

    vector<int> arr{2,4,5,6,5};
    int n = arr.size();
    int i = 0;
    bool sorted = isSorted(arr,n,i);
if(sorted){
    cout<<"Array is sorted . ";
}
else{
    cout<<"Array is not sorted";
}
}