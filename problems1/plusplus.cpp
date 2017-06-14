#include <iostream>

using namespace std;


int main ()
{
    // this code outputs 0 to 9
    for(int i = 0; i < 10;)
    {
        cout << i++ << "\n";
    }
    // this code outputs 1 to 10
    for(int i = 0; i < 10;)
    {
        cout << ++i << "\n";
    }
    return 0;
}