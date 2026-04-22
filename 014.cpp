#include <iostream>
#include <vector>

using namespace std;

vector <int> twoSum(vector<int> &arr,int size,int target){


    for(int i = 0 ;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i] + arr[j] == target){
                return {i, j};
            }
        }
    }
    return {};
}

int main (){

    int  size  ;
    cout<<"Enter the size of array : ";
    cin>>size;

    vector <int> arr(size);
   
    cout<<"Enter the elements : ";
    for(int i = 0;i <size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target sum : ";
    cin>>target;

  vector <int> indicesOfElements = twoSum(arr,size,target);


    if(indicesOfElements.size() == 2) {
        cout << indicesOfElements[0] << " " << indicesOfElements[1];
    } else {
        cout << "No solution found";
    }

}