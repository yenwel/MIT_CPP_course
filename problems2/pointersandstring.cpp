#include<iostream >

long strlen(const char *str)
{
    int len = 0;    
    while(*str != '\0')
    {
        len ++;
        str ++;
    }
    return len;
}


void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main () {
    const char* helloworld = "helloworld";
    std::cout << "the len of helloworld is " << strlen(helloworld) << "\n";
    int a = 1;
    int b = 2;
    swap(&a,&b);
    std::cout << "a: " << a << " b: " << b  << "\n";
    swap2(a,b);
    std::cout << "a: " << a << " b: " << b  << "\n";
    return 0;
}
