// insertionSearch

#include <iostream>
#include <vector>
using namespace std;

int insertionSearch(vector<int> arr  , int target){
   int s = 0 ; 
   int e= arr.size() - 1;
    while(s<=e){
        int mid = s + (e - s)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid]< target ){
            s = mid +1;
        }
        else if(  arr[mid] > target){
            e = mid -1 ;

        }
    }
    return s;
   
}
int main (){
    vector<int> arr{1 ,3 ,4,5,7};
    int target ;
    cin>>target;
    int ans = insertionSearch(arr , target);
    cout<<ans;

}