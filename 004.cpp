// last lastOccurrance
#include <iostream>
#include <vector>
using namespace std;

int lastOccurance(vector<int> &arr , int target){
   int s = 0 ;
   int e = arr.size()-1;
    int ans = -1;
    while(s <=e){
        int mid = s + (e -s)/2;
         
        if (arr[mid ] == target){
            ans = mid;
            s = mid +1 ;
        }
        else if(arr[mid] < target){
            s = mid +1;
        }
        else {
            e = mid -1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr{1,2,3,4,4,4,4,5,5,5,6};
    int target;
    cout<<"Enter the element : ";
    cin>>target;
    int result = lastOccurance(arr,target);
    cout<<"Index of last occrance : "<<result;
}