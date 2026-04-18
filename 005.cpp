// total count of element
#include <iostream>
#include <vector>
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
int countOccurrance(vector<int>arr, int target){
    
int last = lastOccurance(arr,target);
int first = firstOccurance(arr,target);

    if (first == -1) {
        return 0;
    }
 int count = last - first +1 ;
 return count;

}

int main(){
    vector<int> arr{1,2,3,3,3,3,3,3,4,5,5,5,5,5,7};
    int target ;
    cout<<"Enter the target element : ";
    cin>>target;

    int count = countOccurrance(arr,target);

 cout<<"Count: "<<count;


}