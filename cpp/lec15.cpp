// 2D- ARRAYS 
#include<iostream>
using namespace std;
int main () {
    int ar[3] [3];
    // rows-> 3   0-2
    // columns -> 3   0-2
    cout<<ar[0] [0]<<endl;  //garbage value
    ar [0] [0] = 4;
    cout<<ar[0] [0];
    return 0;
}

#include<iostream>
using namespace std;
int main () {
    //    rows columns
    int arr[4] [3] = {{1,2,4} , {4,5,6} , {7,8,9} , {0,11,12}};  //array oof arrays
    int brr [4] [3] ={1,2,3,4,5,6,7,8,9,10,11,12};
    int crr[][3] = {12,34,56,78,91,23}; //also valid
    return 0;
}

// traversal thriough 2d array
// output:-------
#include<iostream>
using namespace std;
int main () {
    int arr [3] [3] = {1,2,3,4,5,6,7,8,9} ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}

// taking input:-----------
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"plz entre bo. of rows:";
    cin>>n;
    int m;
    cout<<"plz entre no.of columns:";
    cin>>m;
    int arr [n] [m] ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"input"<<'['<<i<<']'<<','<<'['<<j<<']'<<"index";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}


#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"plz entre bo. of rows:";
    cin>>n;
    int m;
    cout<<"plz entre no.of columns:";
    cin>>m;
    int arr [n] [m] ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            
            cin>>arr[i][j];
        }
        
    }

        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}



// FIND THE MAXIMUM NUMBER IN THE ARRAY:---------
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"plz entre bo. of rows:";
    cin>>n;
    int m;
    cout<<"plz entre no.of columns:";
    cin>>m;
    int arr [n] [m] ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"input"<<'['<<i<<']'<<','<<'['<<j<<']'<<"index";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    int max = arr[0] [0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            if (arr [i] [j] > max)
            {
                max = arr[i] [j] ;
            }
            
        }
        
    }
    cout<<max<<endl;
    return 0;
}


//calculatin the sum of all numbers of an array:-
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"plz entre bo. of rows:";
    cin>>n;
    int m;
    cout<<"plz entre no.of columns:";
    cin>>m;
    int arr [n] [m] ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"input"<<'['<<i<<']'<<','<<'['<<j<<']'<<"index";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            sum += arr[i] [j];
            
        }
        
    }
    cout<<sum<<endl;
    return 0;
}



// adding two matrix:--------------
#include<bits/stdc++.h>
using namespace std;
int main  () {
    int a[3] [2];
    int b[3] [2];
    int c[3] [2];

    cout<<"input elements of first matrix:--- "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>a[i] [j];
        }
        
    }

    cout<<"input elements of second matrix:--- "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>b[i] [j];
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i] [j] = a[i] [j] + b[i] [j];
        }
        
    }

    cout<<"after adding: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<c[i] [j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


// transpose of a matrix:----------
#include<bits/stdc++.h>
using namespace std;
int main () {
    int a;
    cout<<"ente rows: ";
    cin>>a;

    int b;
    cout<<"ente columns: ";
    cin>>b;
    int arr[a] [b];
    cout<<"input the matrix: " ;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin>>arr[i] [j];
        }
        
    }
    int tarr[b] [a];
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            tarr[i] [j]=arr[j] [i];
        }

        
    }
    // int tarr[b] [a];
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout<<tarr[i] [j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}


// 2D VECTORS *************************************************************
#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<vector<int>> v (3,vector<int> (2));
    int row = v.size();
    int column = v[0].size();
    // int column = (v.at(0)).size();
    cout<<row<<" "<<column;
    return 0;
}

            // try {
            //     cout << "Enter " << i << " " << j << ": ";
            //     cin >> v.at(i).at(j);
            // } 
            // catch (out_of_range& e) {
            //     continue;
            // }.
            //***********8important****************

#include<bits/stdc++.h>
using namespace std;
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();  //row
        int m = matrix[0].size();  //column
        vector<vector<int>> tra (m,vector<int>(n));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                tra[i][j] = matrix[j][i];
            }
            
        }
        return tra;
    }
int main (){
    int m;
    cout<<"inut the row: ";
    cin>>m;
    int n;
    cout<<"input the column: ";
    cin>>n;

    vector<vector<int>> v (m,vector<int> (n));
    cout<<"input the matrix: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j< n; j++)
        {
            int input;cin>>input;
            v[i] [j] = input;
        }
        
    }
     
    vector<vector<int>> g = transpose(v);
    cout<<"matrix after the transpose: "<<endl;
    for (int i = 0; i < g.size(); i++)
    {
        for (int j = 0; j< g[0].size(); j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}




//transorm a matrix into its transpose
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main () {
    int n;
    cin>>n;
    vector<vector<int>> v (n,vector<int>(n));
    
    cout<<"input the matrix: "<<endl;
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout<<"input"<<i<<" "<<j<<": ";
            cin>>v[i] [j];
        }
        
    }
    
    cout<<"original matrix:"<<endl;
    
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<v[i] [j]<<" ";
        }
        cout<<endl;
    }

    
    for (int i = 0; i < n; i++)
    {
        
        for (int j = i; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else {
                swap(&v[i] [j],&v[j][i]);
            }
        }
    }

    cout<<"matrix after transpose:"<<endl;

        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<v[i] [j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}





//rotate an array by 90 degrees clockwise:
#include<bits/stdc++.h>
using namespace std;
void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(vector<int>& v){
    int i =0;
    int j  = v.size()-1;
    for (; i < j; i++,j++)
    {
        swap(&v[i],&v[j]);
    }
    
}
int main () {
    int n;
    cout<<"row/column: ";
    cin>>n;


    vector<vector<int>> v (n,vector<int> (n));

    cout<<"input matrix:" <<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>v[i] [j];
        }
        
    }


    cout<<"original matrix:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<v[i] [j]<<" ";
        }
        cout<<endl;
    }
    

    for (int i = 0; i < n; i++)
    {
        reverse(v[i]);
    }


    cout<<"matrix after rotation"<<endl;
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<v[i] [j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}