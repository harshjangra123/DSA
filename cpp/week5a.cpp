// Calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "input the size of array: ";
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int product = 1;
    for (int i = 0; i < a; i++)
    {
        product *= arr[i];
    }
    cout << product << endl;

    return 0;
}
// Find the second largest element in the given Array in one pass.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "input the size of array: ";
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < a; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int smax = arr[0];
    for (int i = 0; i < a; i++)
    {
        if (smax < arr[i] && arr[i] != max)
        {
            smax = arr[i];
        }
    }
    cout << smax << endl;

    return 0;
}

// Find the minimum value out of all elements in the array.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "input the size of array: ";
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < a; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min << endl;

    return 0;
}
// Given an array, predict if the array contains duplicates or not.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "input the size of array: ";
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    bool check = false;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (arr[i] == arr[j] && j != i)
            {
                check = true;
            }
        }
    }

    if (check == true)
    {
        cout << "duplicate is present";
    }
    else
        cout << "no duplicacy";

    return 0;
}
// WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.
#include <iostream>
using namespace std;
int main()
{
    cout <<"enter 5 elements of the array" << endl;
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int x = 0;
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] != x)
        {
            cout << x << endl;
            flag = true;
            break;
        }
        else
            x++;
    }
    if (flag == false)
        cout << x << endl;
    return 0;
}
// Predict the output.
#include <iostream>
using namespace std;
int main()
{
    int sub[50], i;
    for (i = 0; i <= 48; i++)
        ; // we dont have to end this loop here
    {
        sub[i] = i;
        cout << sub[i] << " ";
    }

    return 0;
}
