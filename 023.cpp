#include <iostream>
#include <vector>
using namespace std;

int findElement(vector<int> & arr,int s ,int e ,int key){
if(s>e){
    return -1;
}
int mid = s + (e-s)/2;

if(arr[mid]==key){
    return mid;
}

return (arr[mid]<key) ? findElement(arr,mid +1,e,key): findElement(arr,s,mid -1,key); 


}


int main (){
    vector<int> arr{1,3,5,8,9,11,};
    int s = 0;
    int e = arr.size()-1;
    int key = 1;

    int ans = findElement(arr,s,e,key);
    cout<<ans<<" is index of target element";
}