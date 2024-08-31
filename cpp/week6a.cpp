// Q1: Write a program to store 10 at every index of a 2D
// matrix with 5 rows and 5 columns.

// Q2: Write a program to add two matrices and save the
// result in one of the given matrices.
#include<bits/stdc++.h>
using namespace std;
int main () {
    int m,n;
    cout<<"input row of 1st matrix: ";
    cin>>m;
    cout<<"input column of 1st matrix: ";
    cin>>n;

    int p,q;
    cout<<"input row of 2st matrix: ";
    cin>>p;
    cout<<"input column of 2st matrix: ";
    cin>>q;

    vector<vector<int>> a (m,vector<int> (n));
    vector<vector<int>> b (p,vector<int> (q));
    
    cout<<"inpu first matrx: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }

    cout<<"inpu second matrx: "<<endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin>>b[i][j];
        }
        
    }
    


    cout<<"resultant matrix: ";
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            a[i][j] =a[i][j] + b[i][j];
        }
        
    }

        for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout<<a[i][j]<<" ";
        }
        
    }

    return 0;
}





// Given a matrix ‘A’ of dimension n x m and 2coordinates (l1, r1) and (l2, r2).
//  Return the sum ofthe rectangle from (l1,r1) to (l2, r2).
#include<bits/stdc++.h>
using namespace std;
int main (){
    cout<<"input the size of matrix: ";
    int m ;
    int n ;
    cin>>m>>n;
    vector<vector<int>> v(m,vector<int> (n));
    // int v[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"["<<i<<"]"<<" ["<<j<<"]:  ";
            cin>>v[i][j];
            cout<<endl;
        }
        
    }

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<"sum: "<<v[a][b]+v[c][d];
    
    return 0;
}