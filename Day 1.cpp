#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
#include <string>
    int a;
    double b;
    string c;
    
    cin>>a;
    cin>>b;
    getline(cin>>ws, c);
    
    cout<<i+a<<endl;
    cout<< fixed << setprecision(1) << d + b <<endl;
    cout<<s<<c<<endl;

    return 0;
}
