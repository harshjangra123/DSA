// print inceasing to decreasing sequence

#include<bits/stdc++.h> 
using namespace std;

int sumodd(int n){
    if(n==0){
        return 0;
    }
    int ans;
    if(n%2 == 0){
        ans = 0+sumodd(n-1);
    }
    else{

        ans = n+sumodd(n-1); 
    }

    return ans;
}


//the sequence
void sequence(int one,int n){
    cout<<one<<" ";
    if(one == n){
        return;
    }

    sequence(one+1,n);
    cout<<one<<" ";
}





bool ispowerof2(int n){
    if(n == 1){
        return 1;
    }
    if(n%2 != 0){
        return 0; 
    }
    return ispowerof2(n/2);           
}

int main(){
    int n;cin>>n;
    // sequence(1,n,n);
    // cout<<ispowerof2(n);
    sequence(1,n);
    // sec(n-1);
    return 0;
}