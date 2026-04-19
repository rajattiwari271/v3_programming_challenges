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

void replacelement(char name[]){
    int s = 0;
    int n = getCharLength(name);


    while(s<n){
        if(name[s] == ' '){
            name[s]='@';
         
        }
           s++;
    }
}

int main (){
    char name [100];

      cin.getline(name, 100);
    cout<<"Before replacement: "<<name<<endl;
replacelement(name);
cout<<"After replacement : "<<name<<endl;
}