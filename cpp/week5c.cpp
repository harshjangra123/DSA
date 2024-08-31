// Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    int x= 7;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            for (int k = 0; k < v.size(); k++)
            {
                if (v[i]+v[j]+v[k] == 7)
                {
                    cout<<v[i]<<','<<v[j]<<','<<v[k]<<endl;
                }
                
            }
            
        }
        
    }
    
    return 0;
}
// Find the factorial of a large number.
#include<iostream>
#include<vector>
using namespace std;
int factorial(int a) {
    int fact = 1;
for (int i = 0; i < a; i++)
{
    /* code */
}

}
int main () {
    return 0;
}

// Find the first non-repeating element in the array .
#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> v{1,1,2,2,3,4,5,6};
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] != v[j] )
            {
                cout<<i<<" "<<v[i];
            }
            
                break;
        }
        
        
    }
    
    return 0;
}

#include <iostream>
using namespace std;
int main() {
int arr[5]={1,2,2,4,7};
int n=5;
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++)
if (i != j && arr[i] == arr[j])break;
if (j == n){
cout<<arr[i];
return 0;
}
}
return 0;
}
// Check if an array is a subset of another .
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<set>
// using namespace std;
// bool subcheck(vector<int> &a,vector<int> &b) {
//     set <int> s1(a.begin(),a.end());
//     set <int> s2(b.begin(),b.end());
// for (int element : set1) {
//         if (set2.find(element) == set2.end()) {
//             return false;
//         }
//     }
//     return true;

// }
// int main (){
// vector<int> a{1,2,3,4,5,6,7,8};
// vector<int> b(3,5,7,8);
// bool result = subcheck(a,b);
// if (result == false)
// {
//     cout<<"exist";
// }
// else cout<<"dont exist";

//     return 0;
// }
#include <iostream>
#include <vector>
#include <set>

bool isSubset(const vector<int>& array1, const vector<int>& array2) {
    // Convert vectors to sets for efficient membership testing
    set<int> set1(array1.begin(), array1.end());
    set<int> set2(array2.begin(), array2.end());

    // Check if all elements of set1 are present in set2
    for (int element : set1) {
        if (set2.find(element) == set2.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    // Test
    vector<int> array1 = {1, 2, 3,4};
    vector<int> array2 = {3, 2, 1, 4, 5};
    bool result = isSubset(array1, array2);
    cout << boolalpha << result << endl;  // Output: true

    return 0;
}
