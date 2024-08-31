#include<bits/stdc++.h>
using namespace std;

int fibo(int n){

    if(n == 1 || n == 2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}


int pow(int a,int b){
    if(b == 1){
        return a;
    } 

    int ans = pow(a,b/2);
    if(b%2 == 0){
        return ans*ans;
    }
    else{
        return ans*ans*a;
    }
    
}


int stairways(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    return stairways(n-1)+stairways(n-2);
}



int stairways3(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    if(n == 3){
        return 4;
    }
    return stairways3(n-1)+stairways3(n-2)+stairways3(n-3);
}


//maze's ways

// int mazeways(int x,int y,int dx,int dy){
//     if(x == dx){
//         return 0;
//     }
//     if(y == dy){
//         return 0;
//     }
//     if(x == dx-2){
//         return 2;
//     }
//     if(y == dy-2){
//         return 1;
//     }
//     return mazeways(x+1,y,dx,dy)+mazeways(x,y+1,dx,dy);
// }
    // int mazeways(int x,int y,int dx,int dy){
    //     if(x > dx || y > dy){
    //         return 0;
    //     }

    //     if(x == dx-1 && y == dy-1 ){
    //         return 1;
    //     }

    //     return mazeways(x+1,y,dx,dy)+mazeways(x,y+1,dx,dy);
    // }


int mazeways(int x,int y,int dx,int dy){
    if(x > dx || y > dy){
            return 0;
    }
    if(x == dx && dy == y){
        return 1;
    }
    // if(x == dx-1 && y == dy-1){
    //     return 2;
    // }
    // if(x == dx-2 && y == dy-1){
    //     return 3;
    // }
    // if(x == dx-1 && y == dy-2){
    //     return 3;
    // }
    return mazeways(x+1,y,dx,dy)+mazeways(x,y+1,dx,dy);
}


void printpath(int x,int y,int dx,int dy,string s){
      if(x > dx || y > dy){
            return;
        }

        if(x == dx-1 && y == dy-1 ){
            cout<<s<<endl;
            return;
        }

        printpath(x+1,y,dx,dy,s+"D");
        printpath(x,y+1,dx,dy,s+"R");
}


int maze2(int x,int y){
    if(x<1 || y <1){
        return 0;
    }

    if(x == 1 && y == 1){
        return 1;
    }

    return maze2(x-1,y) + maze2(x,y-1);
}


void printpath2(int x,int y,string s){
    if(x<1 || y< 1){
        return;
    }
    if(x == 1 && y == 1){
        cout<<s<<endl;
        return;
    }
    printpath2(x-1,y,s+"D");
    printpath2(x,y-1,s+"R");
}


//print zig zag by pre in post
void zz(int n){
    if(n == 0)return;
    cout<<n;
    zz(n-1);
    cout<<n;
    zz(n-1);
    cout<<n;
}

int main(){
    int n;cin>>n;
    // string s = "";
    // printpat2(3,3,s);
    // zz(n);
    // cout<<mazeways(1,1,n,n);
    cout<<maze2(n,n);
    return 0;
}