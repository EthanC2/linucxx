#include <stdio.h>
#include <linucxx/structures/range.hpp>
using namespace linucxx::structures;

enum class Day
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    InclusiveRange<Day> weekdays(Day::Monday, Day::Friday);
    Day day = Day::Friday;

    if (weekdays.contains(Day::Friday)) // true
    {
	puts("Friday is a weekday");
    }
    else
    {
	puts("Friday is NOT a weekday");
    }

    return 0;
}
