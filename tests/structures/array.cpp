#include <stdio.h>
#include <linucxx/structures/array.hpp>
#include <linucxx/development/test.hpp>
using namespace linucxx::structures;

#define MAXLEN_NUMBERS 10

void test_array_constructor_default()
{
    Array<int,MAXLEN_NUMBERS> numbers;

    EXPECT(numbers.length == 0);
    EXPECT(numbers.capacity == MAXLEN_NUMBERS);
}

void test_array_constructor_variadic()
{
    Array<int,MAXLEN_NUMBERS> numbers(1,2,3);

    EXPECT(numbers.length == 3);
    EXPECT(numbers[0] == 1);
    EXPECT(numbers[1] == 2);
    EXPECT(numbers[2] == 3);
}

void test_array_method_append()
{
    Array<int,MAXLEN_NUMBERS> numbers;

    size_t index = numbers.append(1);
    EXPECT(index == 0);
    EXPECT(numbers.length == 1);
}

void test_array_method_contains()
{
    Array<int,MAXLEN_NUMBERS> digits(0,1,2,3,4,5,6,7,8,9);
    EXPECT(digits.contains(5) == 5);
    EXPECT(digits.contains(10) == -1);
}

void test_array_method_fill()
{
    Array<int,100> numbers;
    numbers.fill(10);

    EXPECT(numbers.length == numbers.capacity);
    for (size_t i = 0; i < numbers.capacity; ++i)
    {
	EXPECT(numbers[i] == 10);
    }
}

void test_array_operator_bracket()
{
    Array<int,MAXLEN_NUMBERS> numbers;
    numbers.append(1);

    EXPECT(numbers[0] == 1);
    numbers[0] = 100;
    EXPECT(numbers[0] == 100);
}

int main()
{
    test_array_constructor_default();
    test_array_constructor_variadic();
    test_array_method_append();
    test_array_method_contains();
    test_array_method_fill();
    test_array_operator_bracket();

    return 0;
}
