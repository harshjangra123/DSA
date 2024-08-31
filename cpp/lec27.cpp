// capacity to ship packages within n days
#include <bits/stdc++.h>
using namespace std;

bool poss(vector<int> &w, int d, int mid)
{
    int count = 1;
    int sum = 0;
    for (int i = 0; i < w.size(); i++)
    {
        if (sum + w[i] > mid){
            count++;
            sum = w[i];
            if(count > d){
                return 0;
            }
        }
        else{
            sum += w[i];
        }
    }
    return 1;

}


int shipWithinDays(vector<int> &w, int days)
{
    int sum = accumulate(w.begin(), w.end(), 0);
    int maxWeight = *max_element(w.begin(), w.end());

    int s = maxWeight;
    int e = sum;
    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (poss(w, days, mid))
        {
            e = mid;
        }
        else
        {
            s = mid + 1;
        }
    }

    return e;
}

int main()
{
    int a;cin>>a;
    vector<int> w(a);
    for(int i=0;i<a;i++)cin>>w[i];
    int d;cin>>d;
    cout<<shipWithinDays(w,d);


    return 0;
}



// koko eating bananas 

#include<bits/stdc++.h>
using namespace std;

bool isp(vector<int> p,int h,int mid){
            vector<int> v;

            for(int ele : p){
                if(ele <= mid){
                    v.push_back(ele);
                }
                else{
                    for(int i = ele;;i = i-mid){
                        if(i<mid){
                            v.push_back(mid-i);
                            break;
                        }
                        else{
                        v.push_back(mid);
                        }
                    }
                }
            }
            cout<<mid<<"  "<<v.size()<<endl;
            for(int i : v){
                cout<<i<<" ";
            }
            cout<<endl;
            cout<<endl;
            if(v.size() <= h){
                return 1;
            }
            else{
                return 0; 
            }

    }


    int minEatingSpeed(vector<int>& p, int h) {
        auto minp = max_element(p.begin(), p.end());
        int max = *minp;

        int s = 1;
        int e = max;
        while(s<e){
            int mid = s + (e-s) / 2;

            if(isp(p,h,mid)){
                e = mid;
            }
            else{
                s = mid+1;
            }
        }

        return s;
    }


int main(){
    int n;cin>>n;
    vector<int> p(n);
    for(int i = 0;i<n;i++)cin>>p[i];
    int h;cin>>h;
    cout<< "ans : "<<minEatingSpeed(p,h);
    return 0;
}


//minimum number of trimes in given time :
class Solution {
public:

    bool isp(long long mid,vector<int> &t,long long tt){
        long long count = 0;
        for(int i : t){
            
                count += mid/i;
                if(count >= tt){
                    return 1;
                }

        }

        if(count < tt){
            return 0;
        }
        return 1;
    }

    long long minimumTime(vector<int>& time, long long tt) {
        auto m = max_element(time.begin(),time.end());
        long long max = (long long)*m;
        long long s = 1;
        long long e = max * tt;
        long long ans = -1;
        while(s<=e){
            long long mid = s+(e-s) / 2;

            if(isp(mid,time,tt)){
                ans = (long long)mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};