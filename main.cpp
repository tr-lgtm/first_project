#include <iostream>
#include <cstdlib>
using namespace std;

template <typename T>
void bubbleSort(T* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array[j],array[j+1]);
            }
        }
    }
}

int main() {
    int numSize = 7;
    char symSize = 5;

    // Создаем динамические массивы
    int* numbers = new int[numSize] {64, 34, 25, 12, 22, 11, 90};
    char* symbols = new char[symSize] {'z', 'a', 'f', 'b', 'y'};

    bubbleSort(numbers, numSize);
    bubbleSort(symbols, symSize);

    cout << "Отсортированные числа: ";
    for (int i = 0; i < numSize; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Отсортированные символы: ";
    for (int i = 0; i < symSize; ++i) {
        cout << symbols[i] << " ";
    }
    cout << endl;

    // Освобождаем память
    delete[] numbers;
    delete[] symbols;

    return 0;
}