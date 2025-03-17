template<class Type>
Type CalculateAverage(Type *  array, int size)
{
double arithmetic_mean{};
arithmetic_mean = (1.0 * ( array[IndexMaxElement(array, size)] + array[IndexMinElement(array, size)] )) / 2;
    return arithmetic_mean;
}