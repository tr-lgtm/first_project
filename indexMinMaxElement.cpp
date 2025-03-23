#include "indexMinMaxElement.h"
template<class Type>
size_t indexMinElement(Type *  array, int size)
{ 
    size_t index{};
    for (int i = 0; i < size; i++)
    {
        if(array[index] > array[i])
        {
            index = i;
        }  
    }
        return index;
}


template<class Type>
size_t indexMaxElement(Type *  array, int size)
{
    size_t index{};
    for (int i = 0; i < size; i++)
    {
        if(array[index] < array[i+1])
        {
            index = i+1;
        }    
    }
    return index;
}