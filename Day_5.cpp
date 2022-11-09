#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int res;
    
    for(int i=1; i<=10; i++){
        res = i*n;
        cout<<n<<" x "<<i<<" = "<<res<<endl;
    }
}
