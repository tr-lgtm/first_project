template <typename T>
void reverseArray(T* array, int size) {
    for (int i = 0; i < size / 2; ++i) {
        std::swap(array[i],array[size - i- 1]);
    }
}