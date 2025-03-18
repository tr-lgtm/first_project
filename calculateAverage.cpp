#include "indexMinMaxElement.h"
template<class Type>
double CalculateAverage(Type *  array, int size)
{
    return (1.0 * ( array[IndexMaxElement(array, size)] + array[IndexMinElement(array, size)] )) / 2;
}