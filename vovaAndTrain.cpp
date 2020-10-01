#include <iostream>
using namespace std;
int main(){
   long int n, num,fact,start,e;
    cin >> n;
    while(n>0){
        long int f1, f2;
        cin>>num>>fact>>start>>e;
        //start-=1;
        cout<<num/fact-(e/fact-start/fact)<<endl;
        n--;
    }
}