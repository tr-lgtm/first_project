#include "indexMinMaxElement.h"
template<class Type>
double CalculateAverage(Type *  array, int size)
{
double sum{0};
    for(int i{indexMinElement(array, size) + 1 }; i < indexMaxElement(array, size); i++)
        {
            sum += array[i];
        }
    return sum / (indexMaxElement(array, size) - indexMinElement(array, size));
}