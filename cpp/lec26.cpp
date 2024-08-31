#include<bits/stdc++.h>
using namespace std;

void binary(vector<int> &v,int s,int e){
    if(s>e){
        return;
    }
    int mid = s+e / 2;
    if(v[mid] > v[mid+1] && v[mid] > v[mid-1]){
        cout<<v[mid]<<endl;
        return;
    }

    if(v[mid] > v[mid-1]){
        binary(v,mid+1,e);
    }
    else{
        binary(v,s,e-1);
    }
}

int main(){
    int a;cin>>a;
    vector<int> v(a);

    for (int i = 0; i < a; i++)
    {
        cin>>v[i];
    }

    binary(v,0,a-1);
    
    return 0;
}


// binary search in rotated sorted array
#include<bits/stdc++.h>
using namespace std;

int ans = 0;
void binary(const vector<int>& v, int s, int e, int x) {
    static int ee = e;
    if (s > e) {
        ans = -1;
        return;
    }
    int mid = (s + e) / 2;

    if (v[mid] == x) {
        ans = mid;
        return;
    }

    if (x > v[mid]) {
        binary(v, mid + 1, e, x);
    } else {
        binary(v, s, mid - 1, x);
    }
}




void lbinary(vector<int> &v,int s,int e,int x){
    static int ee = e;
    static int ss = s;
    if(s>e){
        cout<<"not found";
        return;
    }
    int mid = s+(e-s) / 2;
    if(v[mid] > v[mid+1] && v[mid] > v[mid-1]){
        if(x > v[ee]){
            binary(v,ss,mid,x);
        }
        else{
            binary(v,mid+1,ee,x);
        }
        return;
    }
    if(v[mid] < v[mid+1] && v[mid] < v[mid-1]){
        if(x > v[ee]){
            binary(v,ss,mid-1,x);
        }
        else{
            binary(v,mid,ee,x);    
        }
        return;
    }

    if(v[mid] >= v[e]){
        lbinary(v,mid+1,e,x);
    }
    else{
        lbinary(v,s,mid-1,x);
    }
}

int main(){
    int a;cin>>a;
    vector<int> v(a);

    for (int i = 0; i < a; i++)
    {
        cin>>v[i];
    }
    int x;cin>>x;
    lbinary(v,0,a-1,x);
    cout<<ans;
    return 0;
}



//find the pivot elelment
 #include<bits/stdc++.h>
 using namespace std;

int pivot(vector<int> v){
    int i = 0;
    int j = v.size()-1;

    while(i<=j){
        int mid = (i+j)/2;
        if(v[mid] > v[mid+1] && v[mid] > v[mid-1]){
            return mid+1;
        }
        if(v[mid] < v[mid+1] && v[mid] < v[mid-1]){
            return mid;
        }
        if(v[mid] > v[j]){
            i = mid+1;
        }
        else{
            j = mid-1;
        }
    }

    return -1;
}


 int main(){
    int a;cin>>a;
    vector<int> v(a);
    for(int i = 0;i<a;i++)cin>>v[i];
    cout<<pivot(v);

    return 0;
 }


// find lower bound of the target x
 #include<bits/stdc++.h>
 using namespace std;

int lb(vector<int> v,int x){
    int i = 0;
    int j = v.size()-1;

    while(i<=j){
        int mid = (i+j)/2;

        if(v[mid] == x){
            return v[mid];
        }
        if(v[mid] > x){
            j = mid-1;
        }
        else{
            if(v[mid] < x && v[mid+1] > x){
                return v[mid];
            }
            else{
                i = mid+1;
            }
        }
    }

    return -1;
}


 int main(){
    int a;cin>>a;
    vector<int> v(a);
    for(int i = 0;i<a;i++)cin>>v[i];
    int x;cin>>x;
    cout<<lb(v,x);
    return 0;
 }


 //k closest elements

 #include<bits/stdc++.h>
 using namespace std;

int diff(int lb,int x){
    return abs(lb-x);
    }



    vector<int> findClosestElements(vector<int>& v, int k, int x) {
        int n = v.size();
        vector<int> ans;



        if(x <= v[0]){
            for(int i = 0;i<k;i++){
                ans.push_back(v[i]);
            }
            return ans;
        }

        else if(x >= v[n - 1]){
            for (int i = n - k; i < n; i++) {
                ans.push_back(v[i]);
            }
            return ans;
        }


        int lo = 0, hi = n - 1;

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (v[mid] >= x) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }

        int lb = lo - 1;
        int ub = lo; 
        // cout<<endl<<lb<<endl; 


        while(ans.size() < k){

            if(lb < 0){
                ans.push_back(v[ub]);
                ub++;
            }
            else if(ub>=n){
                ans.push_back(v[lb]);
                lb--;
            }

            else if(diff(x,v[lb])<=diff(x,v[ub])){
                ans.push_back(v[lb]);
                lb--;
            }
            else{
                ans.push_back(v[ub]);
                ub++;
            }
        }


        sort(ans.begin(),ans.end());
        return ans;
    }

 int main(){
    int a;cin>>a;
    vector<int> v(a);
    for(int i = 0;i<a;i++)cin>>v[i];
    int x;cin>>x;
    int k;cin>>k;
    vector<int> ans = findClosestElements(v,k,x);
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
 }


 //sum of squares brute force
 #include<bits/stdc++.h>
 using namespace std;

bool isperfectsquare(int n){
    if(n <= 0) return 0;
    int s = sqrt(n);
    double i = sqrt(n);
    return s == i;
}

 void sos(int n){
    int i = 0;
    int j = n;
    for(;;){
        if(i > n/2){
            cout<<"not found";
            break;

        }
        if(isperfectsquare(i) && isperfectsquare(j)){
            cout<<sqrt(i)<<" "<<sqrt(j)<<endl;
            break;
        }
        i++;
        j--;

    }
 }
 int main(){
    int n;cin>>n;
    sos(n);
    return 0;
 }                