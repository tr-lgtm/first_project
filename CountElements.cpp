template <typename Type>
int CountElements(Type* array, int size) 
{
    int first_position{-1}; 
    int second_position{-1};
    for (int i = 0; i < size; i++) 
    {
        if (array[i] == T(0)) 
        { 
            if (first_position == -1) 
            {
                first_position = i;
            }
            first_position = i; 
        }
    }
    if (first_position == -1 || second_position == -1 || first_position == second_position) 
    {
        return -1;
    }
    return second_position - first_position - 1;
}