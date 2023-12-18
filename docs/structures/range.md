# Ranges
Ranges represent a contiguous subsequence. There are two types of ranges: `InclusiveRange` and `ExclusiveRange`, both of which
inherit from the abstract struct `Range`. Ranges are typically used for indices (and so default to the type `size_t`), but the `Range` family 
of structures are templated to function as general-purpose start and end structure. For example, the example ranges program uses a range 
of the enum class `Day` (`InclusiveRange<Day>`) to define the weekdays. Note that unlike slices, ranges do not maintain a reference to a structure.

Note to self: add specializations for floating-point types.

```cpp
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

InclusiveRange<Day> weekdays(Day::Monday, Day::Friday);
printf("Friday is a weekday?: %s\n", weekdays.contains(Day::Friday) ? "true" : "false"); // true
```

## Method Range::contains()
The `Range::contains()` method returns true if the range contains the given element.

```cpp
InclusiveRange range(1,10);
bool within_range;

within_range = range.contains(1);	    // true, lower bound
within_range = range.contains(10);	    // true, upper bound
within_range = range.contains(5);	    // true, between lower and upper bounds
within_range = range.contains(0);	    // false, outside range
within_range = range.contains(11);	    // false, outside range
```
