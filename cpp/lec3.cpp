//  IF AND ELSE STAEMENTS :-----------------------------------
#include <iostream>
using namespace std;
int main () {
    cout<<"plz input the integer:";
    int x;
    cin>>x;
    if (x>0)
    {
        cout<<"its positive integer";
    }
    if (x==0)
    {
        cout<<"it is zero";
    }
    else{cout<<"it is negetive";}

    return 0;
}

//  question of cost price and selling price:----------------------
#include <iostream>
using namespace std;
int main (){
int cp;
int sp;
cout<<"plz input the cost price:";
cin>>cp;
cout<<"plz input the selling price:";
cin>>sp;
if (cp<sp)
{
    cout<<"you are in profit"<<endl;
    cout<<"ammountof profit is:"<<(sp-cp)<<endl;
}
else if (sp==cp)
{
cout<<"no profit no loss"<<endl;
}

else{
    cout<<"you are in loss"<<endl;
    cout<<"ammount of loss facing:"<<(cp-sp)<<endl;

}

    return 0;
}

//  MULTIPLE CONDITIONS TOGATHER:-------------------------------------------------
#include <iostream>
using namespace std;
int main() {
    int j;
    cout<<"plz entre the number:";
    cin>>j;
    if (j>=100 && j<=999)         //it is going to check both the conditions
    {
        cout<<"it is a three digit number";
    }
    else{cout<<"its not a three digit number";}

    return 0;
}

//  divisible by 5 and 3:------------------------
#include<iostream>
using namespace std;
int main () {
    int a;
    cout<<"plz input the number:";
    cin>>a;
    if (a%5==0 || a%3==0)     //goin to check first condition
    {
        cout<<"it is divisible by  3 or 5";
    }
    else{cout<<"not divisible by three and 5";}
    return 0;
}

//   check the greatest among three numbers:---------------------------------------
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b && a > c)
    {
        cout << a << "is the greatest" << endl;
    }
    if (b > a && b > c)
    {
        cout << b << "is the greatest" << endl;
    }
    if (c > a && c > b)
    {
        cout << c << "is the greatest" << endl;
    }

    return 0;
}



//  check weather character is alphabet or not:------------------------------
#include <iostream>
using namespace std;
int main () {
    char ch;
    cout<<"plz input the character:";
    cin>>ch;
    int a =(int)ch;
    // if (a>=97 && a<=122)
    // {
    //     cout<<ch<<" is an alphabet"<<endl;
    // }
    // else if (a>=65 && a<=90)
    // {
    //     cout<<ch<<" is an alphabet"<<endl;
    // }
    if (a>=97 && a<=122 || a>=65 && a<=90)
    {
        cout<<ch<<" is an alphabet"<<endl;
    }
    else{cout<<" its not an alphabet"<<endl;}
    cout<<(int)isalpha(ch)<<endl; 
    cout<<(char)toupper(ch);   
    return 0;
}


//  the long condition question:---------------------------------------
#include <iostream>
using namespace std;
int main () {
    int a;
    cout<<"plz input the number :";
    cin>>a;
    // if ((a%5==0 || a%3==0) && (a%15!=0))
    // {
    //     cout<<"it comletes the condition";
    // }
    if (a%5==0 || a%3==0)
    {
        if (a%15!=0)
        {
            cout<<"it comletes the condition"<<endl;
        }
        
    }
    else{cout<<"it dont complete the condtion"<<endl ;}
    return 0;
}

 
// 3 numbers can be side of a triangle:-----------------------------------
#include<iostream>
using namespace std;
int main () {
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a+b>c && b+c>a && c+a>b)
    {
        cout<<"triangle";
    }
    else{cout<<"not a triangle";}
    return 0;
}

 