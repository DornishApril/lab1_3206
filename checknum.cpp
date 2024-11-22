#include "headers.h"

int main(){
    
    string a = "dvdf";

    int current_length=0;
    int highest_length=0;
    int quit=0;
    int j=0;

    while(!quit){

        unordered_map<char,int> charmap;
        int i=j;

    for(int i=j;a[i]!='\0';i++){
        //cout<<(int)a[i]<<"\n";
        if(a[i]=='\0')
            quit =1;
        cout<<i<<"\n";
        charmap[a[i]]+=1;

        if(charmap[a[i]]==2){
            highest_length = (highest_length<current_length)? (current_length):(highest_length);
            current_length = 0;
            charmap.clear();
            j=i-2;
            break;
            

        }
        else{
            current_length++;
        }
    }
}
    highest_length = (highest_length<current_length)? (current_length):(highest_length);

    cout<<"---"<<highest_length;
    

}

