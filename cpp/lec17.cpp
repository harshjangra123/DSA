//2d vector
//increase your rows
//variable columns
#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int>v2;
    v2.push_back(4);
    v2.push_back(5);
    vector<int>v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    
    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}




//passing 2d vector in a function :-----------------------------
#include<bits/stdc++.h>
using namespace std;
void change2d(vector<vector<int>>& v){
    v[0][0] = 69;
}
int main (){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int>v2;
    v2.push_back(4);
    v2.push_back(5);
    vector<int>v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    
    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][0]<<endl;
    cout<<v[0][1]<<endl;
    change2d(v);
    cout<<v[0][0]<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>> v(3,vector<int>(2,2));
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}




//generate a pascal triangle:----------
#include<bits/stdc++.h>
using namespace std;
int main () {
    int row ;
    cin>>row;
    vector<vector<int>> v(row,vector<int> (row)) ;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(j==0 || j == i){v[i][j]= 1;}
            else v[i][j] = v[i-1][j]+v[i-1][j-1];
        }
    }

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    
    return 0;
}

//another meathod:-----------
#include<bits/stdc++.h>
using namespace std;
int main () {
    int ro;
    cin>>ro;
    vector<vector<int>> v;
    for (int i = 1; i <= ro; i++)
    {
        vector<int> a(i);
        v.push_back(a);
    }

    for (int i = 0; i < ro; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                v[i][j] = 1;
            }
            else{
                v[i][j] = v[i-1][j]+v[i-1][j-1];
            }
            
        }
        
    }
    
    for (int i = 0; i < ro; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}



//print the final layer of pascal triangle
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main () {
    int ro = 5;
    // cin>>ro;
    vector<vector<int>> v;
    for (int i = 1; i <= ro; i++)
    {
        vector<int> a(i);
        v.push_back(a);
    }

    for (int i = 0; i < ro; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                v[i][j] = 1;
            }
            else{
                v[i][j] = v[i-1][j]+v[i-1][j-1];
            }
            
        }
        
    }
    vector<int> gg;
    for (int i = 0; i < ro; i++)
    {
        if(i == ro-1){
        for (int j = 0; j <= i; j++)
        {
            gg.push_back(v[i][j]);
        }
        }
    }

    for (int i = 0; i < gg.size(); i++)
    {
        cout<<gg[i]<<" ";
    }
    
    
    return 0;
}




  //convert binary to decimal-------------------
  #include<bits/stdc++.h>
  using namespace std;
  void convertdecimal(vector<int> &v){
        int sum = 0;
        int gg = v.size();
        vector<int> o(gg);
        int j =1;
        for (int i = 0; i < gg; i++)
        {
            o[i] = j;
            j*=2;
        }
        for (int i = 0,j = gg-1; i < v.size(); i++,j--)
        {
            v[i] = v[i]*o[j];
        }
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i];
        }        
        cout<<sum<<endl;
  }

  int main () {
  int n;
  cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    convertdecimal(v);
    return 0;
  }



//score sfter flipping the matrix----------
#include<bits/stdc++.h>
using namespace std;

int main () {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for (int i = 0; i <n ; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>v[i][j];
        }
        
    }

    //fipin rows------------
    for (int i = 0; i <n ; i++)
    {
        if(v[i][0] == 0){
        for (int j = 0; j < m; j++)
        {
                if(v[i][j] == 0) v[i][j] = 1;
                else v[i][j] = 0;
        }
        }
        
    }

    //flipin columns--------------
    for (int j = 0; j < m ; j++)
    {
        int noz = 0;
        int noo = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i][j] == 0){
                noz++;
            }
            else noo++;
        }
        if(noz>noo){
            for (int i = 0; i < n; i++)
            {
                if(v[i][j] == 0) v[i][j] = 1;
                else v[i][j] = 0;
            }
            
        }
        
    }
    

    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = m-1,k=1; j >=0; j--)
        {
            if(v[i][j] == 1){
                sum += k;
            } 
            k = k*2;           
        }
        
    }
    cout<<sum<<endl;
    
    
    return 0;
}



// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();
        int i = 0;
        int j = column -1;
        while(i<=row-1 && i>=0){
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target) j--;
            else i++;
        }
        return false;  
    }
};