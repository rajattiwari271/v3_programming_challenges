#include <iostream>
# include <string>
using namespace std;
string reversOfString(string & rev ){
    int i = 0;
    int j = rev.length() - 1;
    while (i< j){
        swap(rev[i],rev[j]);

        i++;
        j--;
    }
    return rev;
}


int main (){
string reverse;
cout<<"Enter the string: ";
getline(cin, reverse);
cout<<"Before reversing string : "<<reverse<<endl;;

 

cout<<"String after reversal : "<<reversOfString(reverse)<<endl;

}