//reverse of an array

#include <iostream>
using namespace std;


int getCharLength(char name []){
    int length = 0 ;
    int i = 0;
     while (name[i] != '\0'){
        length ++;
        i++;
     }
     return length;
}

void reverseArray(char name[]){
    int i = 0;
    int n = getCharLength(name);
    int j = n - 1;
    while ( i<j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}

int main(){
    char name[100];
    cin>>name;

   
    cout<<"Initially : "<<name<<endl;
     reverseArray(name);
    cout<<"After reversal process : "<<name<<endl;
}