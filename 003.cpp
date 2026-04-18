// first firstOccuranceof element
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstOccurance(vector<int> & arr, int target){
    int s = 0;
    int e = arr.size()-1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target){
             ans = mid;
            e = mid -1;
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
 int main () {
    vector<int> arr{1,2,3,3,3,3,4,4,4};
    int target ;
    cin>>target;
    int result = firstOccurance(arr,target);
    cout<<result;
 }