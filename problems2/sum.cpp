#include<iostream >

int sum (const int one, const int two );
double sum (const double one, const double two );
int sum2 (const int one, const int two, const int three = 0, const int four = 0 ) { return (one + two + three + four);}
int sumloop(const int arr[], const int arrlen);
int sumrecur(const int arr[], const int arrlen);

int main () {
    int const arrlen = 10;
    int arr [10]= {1,2,3,4,5,6,7,8,9,10};
    std::cout << sum(1,2) << '\n';
    std::cout << sum(1.0,2.0) << '\n';
    std::cout << sum2(1,2) << '\n';
    std::cout << sum2(1,2,3) << '\n';
    std::cout << sumloop(arr, arrlen) << '\n';
    std::cout << sumrecur(arr,arrlen) << '\n';
    return 0;
}

int sum (const int one, const int two ) { return (one + two);}

double sum (const double one, const double two ) { return (one + two);}

int sumloop(const int arr[], const int arrlen){
    int sum = 0;
    for(int i = 0; i < arrlen; i++ )
    {
        sum += arr[i];
    }
    return sum;
}

int sumrecur(const int arr[], const int arrlen){
    std::cout << "recur " << arrlen << "\n";
    return arrlen == 0 ? 0 : arr[0] + sumrecur(arr + 1, arrlen - 1);

}