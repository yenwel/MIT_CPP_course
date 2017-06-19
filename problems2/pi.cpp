#include<iostream>
#include<cstdlib>
#include<cmath>

double generaterand()
{
    return ((double) std::rand()) / RAND_MAX;
}

double distance(const double x, const double y)
{
    return std::sqrt(x*x + y*y);
}

double pi(const int dartsInQuadrant, const int totalDarts)
{
    return (4 * ((double) dartsInQuadrant ) / ((double) totalDarts));
}
double calcPi(const int iter){
    double x = 0.0;
    double y = 0.0;
    long dartsInQuadrant =0;
    for(int i = 0; i< iter; i++)
    {
        x = generaterand();
        y = generaterand();
        //std::cout << "x " << x << "\n";
        //std::cout << "y " << y << "\n";
        //std::cout << "distance " << distance(x,y) << "\n";
        if(distance(x,y) < 1)
        {
            dartsInQuadrant++;
            //std::cout << "Is in quadrant.\n";
        }
        //std::cout << "pi at iter " << i << " is " << pi(dartsInQuadrant,i) << "\n"; 
    }
    return pi(dartsInQuadrant,iter);
}

int main () {
    std::cout << "Pi is " << calcPi(100) << "\n";
    std::cout << "Pi is " << calcPi(1000) << "\n";
    std::cout << "Pi is " << calcPi(100000) << "\n";    
    std::cout << "Pi is " << calcPi(1000000) << "\n";
    return 0;
}