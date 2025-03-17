template <typename T>
void removeNegatives(T* array, int size) {
    int counter = 0;

    for (int i = 0; i < size; ++i) {
        if (array[i] >= 0) {
            array[counter++] = array[i];
        }
    }

    while (counter < size) {
        array[counter++] = 0;
    }
}