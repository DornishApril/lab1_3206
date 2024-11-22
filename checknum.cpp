#include "headers.h"

int main(){
    unordered_map<int,int> charmap;

    string a = " ";

    int current_length=0;
    int highest_length=0;

    for(int i=0;a[i]!='\0';i++){
        cout<<(int)a[i]<<"\n";
        cout<<"----"<<charmap[(int)a[i]]<<"---\n";
        charmap[(int)a[i]]+=1;

        if(charmap[(int)a[i]]==2){
            highest_length = (highest_length<current_length)? (current_length):(highest_length);
            current_length = 0;
            charmap.clear();
            i=i-1;

        }
        else{
            
            current_length++;
        }
    }

    cout<<highest_length;
    

}

