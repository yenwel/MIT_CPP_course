#include <iostream>
using namespace std;
int main() {
    int threeExpFour = 1;
    for (int i = 0; i < 4; i = i + 1) {
        threeExpFour = threeExpFour * 3;
    }
    cout << "3^4 is " << threeExpFour << endl;
    int sixExpFive = 1;
    for (int i = 0; i < 5; i = i + 1) {
        sixExpFive = sixExpFive * 6;
    }
    cout << "6^5 is " << sixExpFive << endl;
    return 0;
}
