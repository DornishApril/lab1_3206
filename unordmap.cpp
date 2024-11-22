#include "headers.h"

int main(){


    unordered_map<int, int> myMap;

    myMap[1]=2;
    myMap[3]=4;
    myMap[5]=6;
    myMap[81]=6;
    myMap[5]=83;

    myMap.insert({8,10});

    // printf("%d",myMap[1]);
    //need to put something after myMap[1] like " " or any character otherwise doesnt work, printf works fine, fuck cpp

    cout<<myMap[1]<<" ";

    cout<<"\n----------\n";

    for(const auto& pair: myMap){
        cout<<pair.first<<" : "<<pair.second<<"\n";
    }

    myMap.erase(3);






}