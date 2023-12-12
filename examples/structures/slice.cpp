#include <stdio.h>
#include <linucxx/structures/slice.hpp>
using namespace linucxx::structures;

#define NDIGITS 10

int main()
{
    int digits[NDIGITS] {0,1,2,3,4,5,6,7,8,9};
    Slice<int> first_half(digits, NDIGITS/2);

    printf("Span address: %p\n", (int*) first_half);
    for (size_t i = 0; i < first_half.length; ++i)
    {
	printf("digits[%zu] = %d\n", i, first_half[i]);
    }

    return 0;
}
