#include<bits/stdc++.h>
using namespace std;

void greet(int n){
    if(n == 0) return;
    cout<<"harsh"<<endl;
    greet(n-1);
}

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n-1); 
}

 int factupton(int n){
    if(n == 0)return 1;
    cout<<n<<" ";
    int ans = n*fact(n-1);
    return ans;
 }


void nto1(int n){
    cout<<n<<" ";
    if(n == 1){
        return;
    }
    nto1(n-1);
}


//using extra parameteru
void oneton(int one,int n){
    cout<<one<<" ";
    if(one == n){
        return;
    }
    oneton(one+1,n);
}


//oneton using backtracking
void oneton( int n){
    if(n == 0){
        return;
    }
    oneton(n-1);
    cout<<n<<" ";
}


//print sum from 1 to n
int sumupton(int n){
    if(n == 0){
        return 0;
    }
    int ans = n+sumupton(n-1);
    return ans;
}


//power function
int power(int n,int p){
    if(p == 0){
        return 1;
    }
    int ans = n * power(n,p-1);
    return ans;
}

int main(){
    int n;cin>>n;
    cout<<power(n,4);
    return 0;
}