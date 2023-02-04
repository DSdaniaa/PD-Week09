#include <iostream>
using namespace std;
main()
{
    int size, digit, num, length;
    bool result = false;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a number: ";
        cin >> array[i];
    }
    for (int x = 0; x < size; x++)
    {
        num = array[x];
        while (num > 0) // To calculate the length of a array element
        {
            num = num / 10;
            length++;
        }
        num = array[x];
        for (int y = 0; y < length; y++)
        {
            digit = num % 10;
            num = num / 10;
            if (digit == 7)
            {
                result = true;
            }
        }
    }
    if (result == true)
    {
        cout << "Boom!";
    }
    else
    {
        cout << "There is no 7 in the array";
    }
}