template<class Type>
Type indexMinElement(Type *  array, int size)
{ 
    int index{};
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
Type indexMaxElement(Type *  array, int size)
{
    int index{};
for (int i = 0; i < size; i++)
{
if(array[index] < array[i+1])
{
index = i+1;
}    
}
    return index;
}