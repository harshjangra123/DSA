//multiplication of two matrices:------------
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
    
    if(n==p){

    vector<vector<int>> res (m,vector<int>(q));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {   
            res[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                res[i][j] += (a[i][k] * b[k][j]);
            }
            
        }
        
    }
    
    cout<<"resultant matrix: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    }

    else{
        cout<<"plz inpu valid matrices"<<endl;
    }

    return 0;
}




//print the matrix in wave form:
#include<bits/stdc++.h>
using namespace std;
int main () {
    int m,n;
    cout<<"input row of the matrix: ";
    cin>>m;
    cout<<"input column of the matrix: ";
    cin>>n;
    vector<vector<int>> a (m,vector<int> (n));
    cout<<"input the matrx: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        if(i%2 == 0){

        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        }
        else{
        for (int j = n-1; j >= 0; j--)
        {
            cout<<a[i][j]<<" ";
        }
        }
    }
    return 0;
}


//print the matrix in ulta wave form:
#include<bits/stdc++.h>
using namespace std;
int main () {
    int m,n;
    cout<<"input row of the matrix: ";
    cin>>m;
    cout<<"input column of the matrix: ";
    cin>>n;
    vector<vector<int>> a (m,vector<int> (n));
    cout<<"input the matrx: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }

    for (int i = m-1; i >=0; i--)
    {
        if(i%2 == 0){

        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        }
        else{
        for (int j = n-1; j >= 0; j--)
        {
            cout<<a[i][j]<<" ";
        }
        }
    }
    return 0;
}



//COLUMN WISE PRINTING:-------------------
#include<bits/stdc++.h>
using namespace std;
int main () {
    int m,n;
    cout<<"input row of the matrix: ";
    cin>>m;
    cout<<"input column of the matrix: ";
    cin>>n;
    vector<vector<int>> a (m,vector<int> (n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[j][i]<<" ";
        }
    }

    return 0;
}


//column wise wave printing:-----------------
#include<bits/stdc++.h>
using namespace std;
int main () {
    int m,n;
    cout<<"input row of the matrix: ";
    cin>>m;
    cout<<"input column of the matrix: ";
    cin>>n;
    vector<vector<int>> a (m,vector<int> (n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"result"<<endl;
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0){
        for (int j = 0; j < m; j++)
        {
            cout<<a[j][i]<<" ";
        }
        }
        else{
        
        for (int j = m-1; j >=0; j--)
        {
            cout<<a[j][i]<<" ";
        }
        }

    }

    return 0;
}



//print the matrix elemwnt in spiral:===========
#include<bits/stdc++.h>
using namespace std;
int main () {
    int m,n;
    cout<<"input row of the matrix: ";
    cin>>m;
    cout<<"input column of the matrix: ";
    cin>>n;
    vector<vector<int>> a (m,vector<int> (n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;
    int element  = m*n;
    int count = 0;
    while( minr<=maxr && minc<=maxc )
    {    
       //right
        for (int i = minc; i <= maxc && count<element; i++)
        {
            cout<<a[minr][i]<<" ";
            count++;
        }
        minr++;
        //down
        for (int j = minr; j <= maxr && count<element; j++)
        {
            cout<<a[j][maxc]<<" ";
            count++;
        }
        maxc--;
        //left
        for (int i = maxc; i >= minc && count<element; i--)
        {
            cout<<a[maxr][i]<<" ";
            count++;
        }
        maxr--;
        //up
        for (int j = maxr; j >= minr && count<element; j--)
        {
            cout<<a[j][minc]<<" ";
            count++;
        }
        minc++;
    }
    
    
    

    

    return 0;
}