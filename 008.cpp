//finding lengthof character array
#include <iostream>
#include <cstring>
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

int main (){
    char name[50] ;
   
    cin>>name;

cout<<"Length is : "<<getCharLength(name)<<endl;
cout<<"Length is :"<<strlen(name)<<endl;
  
}