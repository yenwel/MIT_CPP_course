#include <iostream>
using namespace std;

int main () {
    int n =0;
    cout << "input n:\n";
    cin >> n;
    if(n>1)
    {
        for(int numToCheck = 2; numToCheck <= n; numToCheck++)
        {
            int divisor = 2;
            while( numToCheck  % divisor != 0 && divisor <= numToCheck){
                divisor++;
            }
            if(divisor == numToCheck)
            {
                cout << numToCheck << " is prime\n";
            }
        }
    }
    return 0;
}