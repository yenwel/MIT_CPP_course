#include <iostream>

using namespace std;


int main ()
{
    const int pathwidth = 100;
    // pathwidth = 2; this will cause a compiler error !
    const char tabulator = '\t';
    cout << " tabulator =" << tabulator << '\n';
    return 0;
}