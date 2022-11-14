#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main(){
    int n;
    string name, number, query;
    map<string, string>phoneBook;

    cin>>n;
    for(int j=0;j<n;j++){
        cin>>name>>number;
        phoneBook[name] = number;
    }

    while(cin>>query){
        if(phoneBook.find(query) != phoneBook.end()){
            cout<<query<<"="<<phoneBook.find(query)->second<<endl;
        } else{
            cout<<"Not Found"<<endl;
        }
    }

    return 0;
}
