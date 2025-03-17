template<class Type>
Type FindElement(Type* array, int size)
{
    int element{-1};
    int position{};
    int input{};
    std::cout << "Enter element:\n";
    std::cin >> input;
    for (int i = 0; i < size; i++)
    {
        if (array[index] > input)
        {
            position = i;
        }
    }
    return position;
}
