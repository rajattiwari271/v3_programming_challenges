#include <iostream>
#include <vector>
using namespace std;

int rotatedArray(vector<int> arr, int target){
    int s = 0;
    int e = arr.size()-1;
    while(s<=e){
        int mid = s + ( e-s)/2;

        if( target ==arr [mid]){
            return mid;
        }

        if(arr[s] <= arr[mid]){
       if (arr[s]<=target && target<arr[mid]){
        
                e = mid -1;
            }
            else {
                s = mid +1;
            }
        }
        
        else{
            if(arr[mid]<=arr[e]){
            if(arr[mid]<target && target <=arr[e]){
             s = mid +1;
                    
            }
                else 
                {
                  
                e = mid -1;
            }
        }
    }
   
}
 return -1;
}

int main(){
    vector<int> arr{ 4,5,6,7,0,1,2 };
    int target;
    cin>>target;
    int index = rotatedArray(arr,target);
    cout<<index;

}