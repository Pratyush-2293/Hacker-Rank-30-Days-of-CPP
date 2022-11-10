#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    
    for(int j=0;j<t;j++){
        string s;
        string s1, s2;
        cin>>s;
        
        for(int k=0;k<s.size();k++){
            if(k%2==0){
                s1 = s1 + s[k];
            } else{
                s2 = s2 + s[k];
            }
        }
        cout<<s1<<" "<<s2<<endl;
    }
    return 0;
}
