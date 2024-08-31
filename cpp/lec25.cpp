#include <iostream>
#include <vector>

using namespace std;

void lbinary(const vector<int>& v, int s, int e, int x) {
    if (s > e) {
        cout<<"not found";
        return;
    }
    int mid = (s + e) / 2;
    if (v[mid] == x) {
        if (mid == e || v[mid + 1] != x) {
            cout << "last occurrence present at " << mid << endl;
            return;
        } else {
            lbinary(v, mid + 1, e, x);
            return;
        }
    }

    if (x > v[mid]) {
        lbinary(v, mid + 1, e, x);
    } else {
        lbinary(v, s, mid - 1, x);
    }
}

void fbinary(const vector<int>& v, int s, int e, int x) {
    static int ee = e;
    if (s > e) {
        cout << "not present" << endl;
        return;
    }
    int mid = (s + e) / 2;

    if (v[mid] == x) {
        if (mid == s || v[mid - 1] != x) {
            cout << "first occurrence present at " << mid << endl;
            lbinary(v, mid+1, ee, x);
            return;
        } else {
            fbinary(v, s, mid - 1, x);
            return;
        }
    }

    if (x > v[mid]) {
        fbinary(v, mid + 1, e, x);
    } else {
        fbinary(v, s, mid - 1, x);
    }
}

int main() {
    int a;
    cin >> a;
    vector<int> v(a);
    for (int i = 0; i < a; i++) {
        cin >> v[i];
    }
    int x;
    cin >> x;
    fbinary(v, 0, a - 1, x);

    return 0;
}


// find lowe bound of x:
#include<bits/stdc++.h>
using namespace std;
void fbinary(vector<int>& v, int s, int e, int x) {
    static int ee = e;
    if (s > e) {
        cout << "not present" << endl;
        return;
    }
    int mid = (s + e) / 2;

    if (x > v[mid]) {
        if((v[mid+1] > x)){
            cout<<v[mid];
            return;
        }
        else{
            fbinary(v,mid+1,e,x);
        }
    }
    else{
        fbinary(v,s,mid-1,x);
    }
    
}

int main() {
    int a;
    cin >> a;
    vector<int> v(a);
    for (int i = 0; i < a; i++) {
        cin >> v[i];
    }
    int x;
    cin >> x;
    fbinary(v, 0, a - 1, x);

    return 0;
}


// find upperbound
#include<bits/stdc++.h>
using namespace std;
void fbinary(vector<int>& v, int s, int e, int x) {
    static int ee = e;
    if (s > e) {
        cout << "not present" << endl;
        return;
    }
    int mid = (s + e) / 2;

    if(v[mid] >x){
        if(v[mid-1] < x){
            cout<<v[mid];
            return;
        }
        else{
            fbinary(v,s,mid-1,x);
        }
    }
    else{
        fbinary(v,mid+1,e,x);
    }
    
}

int main() {
    int a;
    cin >> a;
    vector<int> v(a);
    for (int i = 0; i < a; i++) {
        cin >> v[i];
    }
    int x;
    cin >> x;
    fbinary(v, 0, a - 1, x);

    return 0;
}

// find the smallest mssing element in the arrray
#include<bits/stdc++.h>
using namespace std;

void fbinary(vector<int>& v, int s, int e) {
    static int ans = 69;
    if (s > e) {
        cout << ans << endl;
        return;
    }
    int mid = (s + e) / 2;

    if(v[mid] == mid){
        fbinary(v,mid+1,e);
    }
    else{
        
        ans = mid;
        fbinary(v,s,mid-1);
    }
    
}


int main(){
    int a;
    cin >> a;
    vector<int> v(a);
    for (int i = 0; i < a; i++) {
        cin >> v[i];
    }

    fbinary(v, 0, a - 1);

    return 0;
}


// finding square root in binary search
#include<bits/stdc++.h>
using namespace std;
int sqrt(int z,int a,int t){
    int mid = z+(a-z)/2;
    if(mid * mid == t){
        
        return mid;
    }
    if(mid*mid>t){
        return sqrt(z,mid-1,t);
    }
    else{
        return sqrt(mid+1,a,t);
    }
}
int main(){
    int a;cin>>a;
    cout<<sqrt(0,a,a);
    return 0;
}

