#include <iostream>
using namespace std;
int main()
{

    int savings;
    cin >> savings;

    if (savings > 5000)
    {
        cout << "Neha ";
    }
    else if (savings > 2000)
    {
        cout << "Rashmi Singh";
    }
    else
    {
        cout << "Friends";
    }
    cout << endl;
    return 0;
}