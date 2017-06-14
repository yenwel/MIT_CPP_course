#include <iostream>
using namespace std;

int main () {
    int n ;
    int min;
    int max;
    double avg;
    double sum = 0.0;
    int current;
    cout << "input n:\n";
    cin >> n;
    cout << "Reading " << n << " times \n";

    for(int i = 0; i < n; i++)
    {
        cout << "Input " << i+1 << " \n";
        cin >> current;
        min = i == 0 ? current : current < min ? current : min;
        max = i == 0 ? current : current > max ? current : max;
        sum = sum + current;
    }

    cout << "Mean: " << (sum/n) << "\nMax: " << max << "\nMin: " << min << "\nRange: " << (max - min) << "\n";
    return 0;
}