#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double x[],int y,double z[])
{
    double sum,a;
    for(int i=0;i<=y;i++)
    {
        a += pow(x[i],2);
        sum += x[i];
    }
    sum = sum/y;
    double max =x[0],min =x[0];
    for(int i=0;i<=y;i++)
    {
        if(x[i]>max) max=x[i];
        if(x[i]<min) min=x[i];
    }
    z[0]=sum;
    z[1]=sqrt((a/y)-(sum*sum));
    z[2]=max;
    z[3]=min;
}