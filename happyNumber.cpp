#include<iostream>
#include<unordered_set>
using namespace std;
int solveSum(int n){
    int sum=0;
    while(n>0){
        int digit = n%10;
        sum+=digit*digit;
        n = n/10;
    }
    return sum;
}
bool happyNumber(int n){
    unordered_set<int>seen;
    while(n!=1 && seen.find(n)==seen.end()){
        seen.insert(n);
        n = solveSum(n);
    }
    return n==1;
}
int main(){
    int n;
    cin>>n;
    if(happyNumber(n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

return 0;
}
