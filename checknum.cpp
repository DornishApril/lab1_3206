#include "headers.h"

int main(){
    
    unordered_map <int,int> charmap;
    string s = "bb";

    int current_length=0;
    int highest_length=0;
    int offset =0;


    int p=0;

    for(int i=0;s[i]!='\0';i++){
        //cout<<(int)a[i]<<"\n";
        //cout<<i<<"\n";
        p=(int)s[i]+offset;
        charmap[p]+=1;

        if(charmap[p]==2){
            highest_length = (highest_length<current_length)? (current_length):(highest_length);
            current_length = 0;
            offset+=10;
            i=i-2;
            continue;
            //break;
            

        }
        else{
            current_length++;
        }
    }

    highest_length = (highest_length<current_length)? (current_length):(highest_length);

    cout<<"---"<<highest_length<<"\n";

    for(const auto& pair:charmap){
        cout<<(char)pair.first<<" --- "<<pair.second<<"\n";
    }
    

}

