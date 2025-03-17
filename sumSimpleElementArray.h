bool isSimple(int number)
{
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    } 
    return true;
}


int sumSimpleElementArray(int* array, int size)
{
int sum_simple{};
for(int i{}; i < size; i++)
{
if(isSimple(array[i]))
{
sum_simple += array[i];
}
}
return sum_simple;
}