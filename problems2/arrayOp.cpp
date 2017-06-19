#include<iostream>

void printArray(const int arr[], const int arrlen)
{
    for(int i = 0; i< arrlen; i++)
    {
        std::cout << arr[i];
        if(i < arrlen - 1)
            std::cout << ", ";
    }
    std::cout << "\n";
}

void reverse(int arr[], const int arrlen)
{
    for(int i = 0; i < arrlen / 2.0; i++)
    {
        //std::cout << i << " "<< arr[i] << " " << arr[arrlen - i] << "\n";
        int temp = arr[arrlen - (i+1)];
        arr[arrlen - (i+1)] = arr[i];
        arr[i] = temp;
        //printArray(arr,arrlen);
    }
}

const int LENGTH = 12;
const int WIDTH = 8;

void transpose (const int input [][ LENGTH ], int output [][ WIDTH ])
{
    for(int i = 0; i < WIDTH; i++)
    {
        for(int j = 0; j < LENGTH; j++)
            output[j][i] = input[i][j];
    }
}

int main () {
    const int arrlen = 8;
    int arr[arrlen] = {1,2,3,4,5,6,7,8};
    const int arrlen2 = 7;
    int arr2[arrlen2] = {1,2,3,4,5,6,7};
    printArray(arr,arrlen);
    reverse(arr,arrlen);
    printArray(arr,arrlen);
    reverse(arr2,arrlen2);    
    printArray(arr2,arrlen2);
    return 0;
}