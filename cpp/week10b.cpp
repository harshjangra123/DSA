#include<bits/stdc++.h>
using namespace std;

int sumdigi(int a){
    if(a<1){
        return 0;
    }
    int lastdigit = a%10;
    return lastdigit+sumdigi(a/10);
}



int reverse(int reversed,int n){
    if(n < 1){
        return reversed;
    }

    int lastdigit = n%10;
    reversed *=10;
    reversed +=lastdigit;

    return reverse(reversed,n/10);
}


int numberOfSteps(int num) {
        int count = 0;
        for(;;){
            if(num<=0){
                break;
            }
            if(num %2 == 0){
                num = num/2;
            }
            else{
                num -= 1;
            }
            count++;
        }

        return count;
}

int nmbrofsteps(int num,int count){
    if(num<=0){
        return count;
    }
    if(num % 2 == 0){
        return (num/2,count+1);
    }
    else{
        return(num-1,count+1);
    }
}

int fun(int n) {
if (n <= 1) return 1;
if (n % 2 == 0) return fun(n / 2);
return fun(n / 2) + fun(n / 2 + 1);
}


int main(){
    int n;cin>>n;cout<<fun(n);
    return 0;
}