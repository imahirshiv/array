#include <iostream>
using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "a is grater than all";
        }
        else
        {
            cout << "c is greater than all";
        }
    }
    else
    {
        if (b>c)
        {
            cout<<"b is greater than all";
        }
        else
        {
            cout<<"c is greater than all";
        }
    }
    
       
    cout<<endl;

    return 0;
}