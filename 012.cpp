// lower case to upper case 
 
 
 #include <iostream>
#include<cstring>
using namespace std;

void convertToUpperCase(char arr[]){
    int n = strlen(arr) ;

    for (int i = 0 ; i <n ; i++){
        arr[i] = arr[i] - 'a' +'A';
    }
}


int main (){
    char arr[] = "computer";

convertToUpperCase(arr);
    cout<<arr;
}