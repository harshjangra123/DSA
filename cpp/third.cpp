#include<bits/stdc++.h>
using namespace std;

 
void printSubarrays(vector<int> arr, int n)
 
{
//   for (int i = 0; i < n; i++) {
//     for (int j = i; j < n; j++) {
//       for (int k = i; k <= j; k++) {
//         cout << arr[k] << " ";
//       }
//       cout << endl;
//     }
//   }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j ; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        
    }
    
}

int
 
main()
 
{
  int n;cin>>n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
  }
  
  printSubarrays(v, n);

  return 0;
}