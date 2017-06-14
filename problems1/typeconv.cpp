#include <iostream>

using namespace std;


int main ()
{
    int x = (int) 5.0; // float should be explicitly " cast " to int
    short s = 3;
    long l = s; // does not need explicit cast , but
        // long l = ( long )s is also valid
    float y = s + 3.4; // compiler implicitly converts s
        // to float for addition
    return 0;
}