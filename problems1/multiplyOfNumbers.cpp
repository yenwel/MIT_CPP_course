#include <iostream>
using namespace std;
int main() {
    while(true) {
        cout << "Input number: \n";
        int n;
        cin >> n;
        int result = n > 0 && n % 5 == 0 ? n / 5 : -1;
        cout << result << "\n";
    }
    return 0;
}