template<class Type>
int FindElement(Type* array, int size)
{
    int position{-1};
    int the_desired_element{};
    std::cout << "Enter the item you want to find:\n";
    std::cin >> the_desired_element;
    for (int i = 0; i < size; i++)
    {
        if (array[index] > the_desired_element)
        {
            position = i;
        }
    }
    return position;
}
