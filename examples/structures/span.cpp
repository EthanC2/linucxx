#include <stdio.h>
#include <linucxx/structures/span.hpp>
using namespace linucxx::structures;

#define NDIGITS 10

int main()
{
    int digits[NDIGITS] {0,1,2,3,4,5,6,7,8,9};
    Span<int> first_half(digits, NDIGITS/2);

    printf("Span address: %p\n", (int*) first_half);
    for (size_t i = 0; i < first_half.length; ++i)
    {
	printf("digits[%d] = %d\n", i, first_half[i]);
    }

    return 0;
}
