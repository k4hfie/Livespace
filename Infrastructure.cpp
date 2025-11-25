#include <iostream>
#include <math.h>
#include <bits//stdc++.h>

using namespace std;

//Vector Class
class VectorType
{
    public:
    //Parameterized Constructor
    VectorType (int x, int y, int z)
    {
        cout << "Vector: " << x,y,z;
    }

    double NormFunction (int x, int y,int z)
    {
        sqrtf(x^2 + y^2 + z^2);
    }
};

int main()
{
    VectorType v1 (5,4,3);
    
}