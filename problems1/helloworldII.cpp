#include <iostream>
using namespace std;

int main () {
    int n ;
    const char* helloworld = "Hello world!\n";
    cout << "input n:\n";
    cin >> n;
    cout << "Printing " << n << " times " << helloworld;
    for(int i = 0; i < n; i++)
    {
        cout << helloworld;
    }
    cout << "Printing " << n << " times " << helloworld;
    int j = 0;
    while(j < n)
    {
        cout << helloworld;
        j++;
    }
    cout << "Printing " << n << " times " << helloworld;
    int k = 0;
    do
    {
        cout << helloworld;
        k++;
    } while ( k < n);

    return 0;
}