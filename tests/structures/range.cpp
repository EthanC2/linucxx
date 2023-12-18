#include <linucxx/structures/range.hpp>
#include <linucxx/development/test.hpp>
using namespace linucxx::structures;

void test_inclusive_range()
{
    InclusiveRange range(1,10);

    EXPECT(range.contains(5));	    // any element
    EXPECT(range.contains(1));	    // lower bound
    EXPECT(range.contains(10));	    // upper bound
    
    EXPECT(not range.contains(0));  // outside lower bound
    EXPECT(not range.contains(11)); // outside upper bound
}


void test_exclusive_range()
{
    ExclusiveRange range(1,10);

    EXPECT(range.contains(5));	    // any element
    EXPECT(range.contains(2));	    // lower bound
    EXPECT(range.contains(9));	    // upper bound
    
    EXPECT(not range.contains(1));  // outside lower bound
    EXPECT(not range.contains(10)); // outside upper bound
}

int main()
{
    test_inclusive_range();
    test_exclusive_range();

    return 0;
}
