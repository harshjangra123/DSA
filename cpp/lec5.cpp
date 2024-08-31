// LOOPS :----------------------------------------------
// iteration = no. of rounds
// 1)check
// 2)inside loop
// 3) increment  -------->   completes one iteration

// for (int i = 0; i <= 10; i++)
// {
//     if(i%2==0) cout<<i<<endl;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"hiiiiiiiiiiii"<<endl;
    }
    for (int i = 1; i <= 100; i++)
    {
        cout<<i<<endl;
    }
    for (int i = 1; i <= 100; i++)
    {
        if (i%2==0)
        {
            cout<<i<<endl;
        }

    }

    return 0;
}

//  table of 19:-------------------------------
#include <iostream>    // my version
using namespace std;
int main()
{
    int x;
    cin>>x;
    for (int i = 0; i <= 10; i++)
    {
        cout<<x*i<<endl;
    }

    return 0;
}

// table of 19:-------------------------------------
#include<iostream>
using namespace std;
int main() {
    for (int i = 19; i <= 190; i++)          //ganda tarika
    // 190-19 = 171 bar loop chal rha hai;kitni baar loop chal rha hai  ***imp***
    {
        if(i%19==0) cout<<i<<endl;
    }

    return 0;
}

// table of 19:------------------------------------- //acha tarika
#include <iostream>
using namespace std;
int main()
{
    for (int i = 19; i <= 190; i = i + 19)
    {
        cout << i << endl;
    }

    for (int i = 2; i <= 20; i = i + 2)
    {
        cout << i << endl;
    }

// ARITHMATIC PROGRESSIONS

    return 0;
}

//  express this ap(coomon difference = 2):---------------------------------------
#include<iostream>          //my version
using namespace std;
int main () {
    int x;
    cin>>x;
    for (int  i = 1; i <= x ; i+=2)
    {
        cout<<i<<endl;
    }

    return 0;
}
// express this ap(coomon difference = 2):---------------------------------------
// 1 3 5 7 9 11 13 15 ...................
// a .............     an
// a=1 and d=2(common difference)

// an =  a+(n-1)d
// = 1+2n-2
// =2n-1

#include<iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    for (int i = 1; i <= (2*n)-1; i+=2)
    {
        cout<<i<<endl;
    }

    return 0;
}

// best way-------------->

#include <iostream>          //yeh wala thik tarika hai arithmatic progressions ke liye
using namespace std;
int main () {
    int x;
    cin>>x;
    int a= 1;
    for (int i = 0; i < x; i++)
    {
        cout<<a<<endl;
        a = a+2;
    }

    return 0;
}               //*********** important **************

//  GEOMETRIC PROGRESSIONS
// common multiple
// ex = 1 2 4 8 16 36 (cm->2)

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int a = 1;
    for (int i = 0; i <= x; i++)
    {
        cout << a << endl;
        a = a * 3;
    }

    return 0;
}


//  arithmatic progressions : 100,97,94---- express it
#include <iostream>          
using namespace std;
int main () {
    int x;
    cin>>x;
    int a= 100;
    for (int i = 0; i < x; i++)
    {
        cout<<a<<endl;
        a = a-3;
        if (a<0)
        {
            break;
        }
        
    }

    return 0;
} 


// thoda efficient way of doin it:-----
// special tarikas; 
#include <iostream>          
using namespace std;
int main () {

    
    // for (int a = 100;a>0; a=a-3)
    // {
    //     cout<<a<<endl;
    // }
    int a=100;
    for (;a>0; )
    {
        cout<<a<<endl;
        a=a-3;
    }
    
    
    return 0;
} 




// while loop
#include <iostream>         
using namespace std;
int main () {
    int i = 1;
    while (i<=10)
    {
        cout<<i<<endl;
        i++;
    }
    

    return 0;
}



// dowhile loop
#include <iostream>         
using namespace std;
int main () {
    int i = 11;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=10);
    


    return 0;
} 


//  print all the alphabets uppercase with their ascii value:-------------------------------
#include<iostream>
using namespace std;
int main(){
    char a = 'A';
    int x = a;

    for (int i = 0; i < 26; i++)
    {
        cout<<"alphabet "<<a<<" has "<<x<<" this ascii value"<<endl;
        a++;
        x++;
    }
    


    return 0 ; 
}