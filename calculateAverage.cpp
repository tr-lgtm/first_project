#include "indexMinMaxElement.h"
template<class Type>
double CalculateAverage(Type *  array, int size)
{
    double sum{0};
    int i{indexMinElement(array, size)};
    int ii{indexMaxElement(array, size)};
    if(ii < i)
    {
        int tmp = i;
        i = ii;
        ii = tmp;
    }
    for(int i+1; i < ii ; i++)
        {
            sum += array[i];
        }
    return sum / (indexMaxElement(array, size) - indexMinElement(array, size));
}