#include <stdio.h>
#include <linucxx/structures/array.hpp>
#include <linucxx/development/test.hpp>
using namespace linucxx::structures;

#define MAXLEN_NUMBERS 10

int main()
{
    Array<int,MAXLEN_NUMBERS> numbers;
    EXPECT(numbers.length == 0);
    EXPECT(numbers.capacity == MAXLEN_NUMBERS);
    
    size_t index = numbers.append(1);
    EXPECT(index == 0);
    EXPECT(numbers.length == 1);

    EXPECT(numbers[0] == 1);
    numbers[0] = 100;
    EXPECT(numbers[0] == 100);

    return 0;
}
