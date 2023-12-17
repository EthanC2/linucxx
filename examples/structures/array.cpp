#include <stdio.h>
#include <linucxx/structures/array.hpp>
using namespace linucxx::structures;

int main()
{
    Array<int,3> numbers;
    
    // Array::append() appends an element to the list if the array is not full
    numbers.append(1);	// returns index 0
    numbers.append(2);	// returns index 1
    numbers.append(3);	// returns index 2
    numbers.append(4);	// returns -1 (full array)
    
    // The operator[] is overloaded for element access to provide ease of use
    numbers[0] = 100;

    // The `Array::capacity` member stores the maximum capacity of the array
    printf("The array can hold %zu elements\n", numbers.capacity);

    // The `Array::length` member stores the current length of the array
    for (int i=0; i < numbers.length; ++i)
    {
	printf("%d\n", numbers[i]);
    }
};
