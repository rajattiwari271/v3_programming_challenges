//Binary search 

#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int target){
    int s = 0;
    int e = arr.size()- 1;
 
     while(s<=e){
       int   mid = s + (e - s)/2;
        if(arr[mid] == target){
            return mid;
        }
        else  if(target <arr [mid]){
            e = mid- 1;

        }
        else {
            s = mid+1;
        }
      
     }
     return -1;
}
int main (){
   
    vector<int> arr{2, 5, 8, 12, 16, 23, 38, 45, 67, 91};

    int target = 12;
    int result = binarySearch(arr , target);

    if(result != -1 ){
        cout<<"Found at :"<<result;
    }
    else {
        cout<<"Not found";
    }
 
}