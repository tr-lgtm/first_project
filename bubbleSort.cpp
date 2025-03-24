template <typename T>
bool SortByDescending(T numberOne,T numberTwo)
{
    return numberOne > numberTwo;
}


template <typename T>
bool SortByAscending(T numberOne,T numberTwo)
{
    return numberOne < numberTwo;
}

template <typename T>
void bubbleSort(T* array, int size, bool (*comparison)(T,T))
{
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (comparison(array[j],array[j+1])) {
                std::swap(array[j],array[j+1]);
            }
        }
    }
}
