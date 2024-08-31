// practise of arrays:-------------
// sort zeros and ones not by sorting
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    vector<int> v{1, 0, 1, 0, 1, 1, 2, 0, 0, 0, 1};
    display(v);
    cout << endl;
    // sort(v.begin(),v.end());

    // two pass meathod
    int noz = 0;
    int noo = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            noz++;
        }
        else
        {
            noo++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i < noz)
        {
            v[i] = 0;
        }
        else
            v[i] = 1;
    }

    display(v);
    return 0;
}
// 2nd meathod:----------
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    vector<int> v{1, 1, 0, 1, 0, 1, 1, 1};
    display(v);
    int n = v.size();
    int i = 0;
    int j = n - 1;
    for (; i < j;)
    {
        if (v[j] == 1)
        {
            j--;
        }
        else if (v[i] == 0)
        {
            i++;
        }
        else if (i > j)
        {
            break;
        }

        if (v[i] == 1 && v[j] == 0)
        {
            swap(&v[i], &v[j]);
        }
    }
    cout << endl;
    display(v);
    return 0;
}

// move all negative to the beginig an +ve to end with constant extra space
//*******important*********
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    vector<int> v{1, 8, 3, 6, -5, -2};
    display(v);
    int n = v.size();
    int i = 0;
    int j = n - 1;
    for (; i < j;)
    {
        if (v[i] < 0)
        {
            i++;
        }
        if (v[j] > 0)
        {
            j--;
        }
        if (i > j)
        {
            break;
        }

        if (v[i] > 0 && v[j] < 0)
        {
            swap(&v[i], &v[j]);
        }
    }
    cout << endl;
    display(v);
    return 0;
}

// leetcode(75) sort arrayd o 0s,1s and 2s
// dutch flag meathod
//*****important*********
class Solution
{
public:
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int lo = 0;
        int mid = 0;
        int hi = n - 1;
        // 1) mid ke baare me socho
        // 0 to lo-1 -> 0
        // hi+ to end -> 2
        // lo to mid-1 -> 1
        for (; mid <= hi;)
        {
            if (nums[mid == 2])
            {
                swap(&nums[mid], &nums[hi]);
                hi--;
                ;
            }
            if (nums[mid] == 0)
            {
                swap(&nums[mid], &nums[lo]);
                lo++;
                mid++;
            }
            if (nums[mid] == 1)
            {
                mid++;
            }
        }
    }
};
// two pointer algorythm :------------
//  int noz = 0;
//  int noo = 0;
//  int oot = 0;
//  int n = nums.size();
//  for(int i = 0;i<n;i++){
//      if(nums[i] == 0){noz++;}
//      if(nums[i] == 1) {noo++;}
//      if(nums[i] == 2) {oot++;}
//  }
//  for(int i=0;i<n;i++){
//      if(i<noz){nums[i]=0;}
//      else if(i<(noz+noo)) {nums[i] =1;}
//      else nums[i] = 2;
//  }

// for(int i =0;i<n;i++){
//     cout<<nums[i]<<',';
// }

// MERGE TWO SORTED ARRAYS:-----------
//  ********IMPORTANT**********

// merge two arrays with sorting:--------------------
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1{1, 4, 8, 12};

    vector<int> v2{3, 6, 10};
    int n = v1.size();
    int m = v2.size();
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> v3(m + n);
    for (int a = 0; a < m + n; a++)
    {
        if (v1[i] < v2[j])
        {
            v3[a] = v1[i];
            i++;
        }
        else if (v1[i] > v2[j])
        {
            v3[a] = v2[j];
            j++;
        }
    }
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}
////merging two arrays: -----

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2{6, 7, 8, 9};
    int m = v1.size();
    int n = v2.size();
    vector<int> v(m + n);
    int a = 0;
    for (int i = 0; i < m + n; i++)
    {

        if (i < m)
        {
            v[i] = v1[i];
        }
        else
        {
            v[i] = v2[a];
            a++;
        }
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

// merging two arrays leetcode problem:-----------------
class Solution
{
public:
    void merge(vector<int> &v1, int m, vector<int> &v2, int n)
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        for (; i >= 0 && j >= 0; k--)
        {
            if (v1[i] >= v2[j])
            {
                v1[k] = v1[i--];
            }
            else
            {
                v1[k] = v2[j--];
            }
        }

        while (i >= 0)
        {
            v1[k--] = v1[i--];
        }

        while (j >= 0)
        {
            v1[k--] = v2[j--];
        }
    }
};

// next permutation *******important********
//  [n!]  example :-
//  {123}=  1*2*3=6
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = *a;
}
void reversepart(vector<int> &v, int a, int b)
{
    int i = a;
    int j = b;
    for (; i <= j;)
    {
        // swap(&v[i],&v[j]);
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    vector<int> v{1, 2, 3};
    int n = v.size();
    int pivot;

    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            pivot = i;
            break;
        }
    }
    // cout<<pivot;
    reversepart(v, pivot + 1, n - 1);
    swap(&v[pivot], &v[pivot - 1]);
    display(v);

    return 0;
}
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int pivot = -1;

        // Step 1: Find the pivot index
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                pivot = i;
                break;
            }
        }

        // Step 2: Reverse the elements after the pivot
        reverse(nums.begin() + pivot + 1, nums.end());

        // Step 3: Swap the pivot with the next greater element
        if (pivot != -1)
        {
            for (int i = pivot + 1; i < n; i++)
            {
                if (nums[i] > nums[pivot])
                {
                    swap(nums[i], nums[pivot]);
                    break;
                }
            }
        }

        return;
    }
};
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    vector<int> nums{1, 2, 4, 3};
    int n = nums.size();
    int pivot = -1;

    // Step 1: Find the pivot index
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            pivot = i;
            break;
        }
    }

    // Step 2: Reverse the elements after the pivot
    reverse(nums.begin() + pivot + 1, nums.end());

    // Step 3: Swap the pivot with the next greater element
    if (pivot != -1)
    {
        for (int i = pivot + 1; i < n; i++)
        {
            if (nums[i] > nums[pivot])
            {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        display(nums);

        return 0;
    }
}

// trapin rain water  ****very famous****
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2};
    int a = v.size();
    int volume = 0;
    for (int i = 0; i < a; i++)
    {
        int a = v[i] - v[i + 1];
        if (a < 0)
        {
            continue;
        }
        else
            volume += a;
    }
    cout << volume << endl;

    return 0;
    ;
}


// 0 1 0 2 1 0 1 3 2 1 2 1
//-1 0 1 1 2 2 2 2 3 3 3 3 previous greatest element
// 3 3 3 3 3 3 3 2 2 2 1 -1  next greatest element
//-1 0 1 1 2 2 2 2 2 2 1 -1
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    vector<int> v{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2,1};
    int n = v.size();

    // previous greatest element
    vector<int> arr(n);
    int max = v[0];
    for (int i = 1; i < n; i++)
    {
        arr[i] = max;
        if (max<v[i])
        {
            max = v[i];
        }
        
    }
    arr[0] = -1;
    


    // next greatest element
    vector<int> brr(n);
    brr[n-1] = -1;
    max = v[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        brr[i] = max;
        if (max<v[i])
        {
            max = v[i];
        }
        
    }

    //minimum array
    vector<int>crr(n);
    for (int i = 0; i < n; i++)
    {
        crr[i] = min(arr[i],brr[i]);
    }
    
    // crr-hights 
    // calculatin water
    int water = 0;
    for (int i = 1; i < n-1; i++)
    {
        if (v[i]<crr[i])
        {
            int c = crr[i] - v[i];
            water += c;
        }
        
    }
    

cout<<water;



    return 0;
    ;
}

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    vector<int> v{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2,1};
    int n = v.size();

    // previous greatest element
    vector<int> arr(n);
    int max = v[0];
    for (int i = 1; i < n; i++)
    {
        arr[i] = max;
        if (max<v[i])
        {
            max = v[i];
        }
        
    }
    arr[0] = -1;
    


    // next greatest element
    vector<int> brr(n);
    brr[n-1] = -1;
    max = v[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        brr[i] = max;
        if (max<v[i])
        {
            max = v[i];
        }
        
    }
    //minimum array
    // vector<int>crr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = min(arr[i],brr[i]);
    }
    
    // crr-hights 
    // calculatin water
    int water = 0;
    for (int i = 1; i < n-1; i++)
    {
        if (v[i]<arr[i])
        {
            int c = arr[i] - v[i];
            water += c;
        }
        
    }
    

cout<<water;



    return 0;
     ;
}