// you are given an array and you have to find the frequency of elements of the array
#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector ka siyapa
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int vs = v.size();

    // unique vector ka siyapa
    set<int> s1;
    for (int i = 0; i < n; i++)
        s1.insert(v[i]);
    vector<int> s;
    for (int value : s1)
    {
        s.push_back(value);
    }
    int ss = s.size();

    vector<int> a;
    vector<int> b;
    //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
    for (int i = 0; i < ss; i++)
    {
        int count = 0;
        for (int j = 0; j < vs; j++)
        {
            if (s[i] == v[j])
            {
                count++;
            }
            if (j == vs - 1)
            {
                a.push_back(s[i]);
                b.push_back(count);
            }
        }
    }

    cout << "element  count " << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "   ->   " << b[i] << endl;
    }

    return 0;
}


//given an array of size n+1, consisting of integers from 1 to n.one of the elements is duplicate in the array .find th duplicate element
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin>>v[i];
    int s = v.size();
    bool flag = false;
    for (int i = 0; i < s; i++)
    {
        if(flag == true) break;
        for (int j = i+1; j < s; j++)
        {
            if(v[i] == v[j]){
                cout<<v[i];
                flag = true;
                break;
            }
        }    
    } 
    return 0;
}
// another meathod *******this meathod is pending*******
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    
    vector<int> b(n,0);

    for (int i = 0; i < n; i++)
    {
        if(b[a[i]] == 0){
            b[a[i]]++;
        }
        // if(b[a[i]] != 0){
        //     cout<<i;
        //     break;
        // }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    
    return 0;
}
//most efficient meathod
#include<bits/stdc++.h>
using namespace std;
int main (){
    int cc;cin>>cc;
    vector<int> v(cc);
    for (int i = 0; i < cc; i++) cin>>v[i];
    int sum = 0;
    for (int i = 0; i < cc; i++) sum += v[i];
    int n = cc-1;
    int s = n*(n+1)/2;
    cout<<sum -s;
    return 0;
}

