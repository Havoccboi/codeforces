//https://codeforces.com/problemset/problem/977/A
#include<iostream>

using namespace std;

int main () {


int n;
int k;
 cin>>n;
 cin>>k;

 for(int i=1;i<=k;i++){

    if(n%10==0){
        n=n/10;
    }
    else n=n-1;

 }
 cout<<n;


}
