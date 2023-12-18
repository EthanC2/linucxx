# Arrays
Arrays are a contiguous sequence of elements with a mutable length but a constant capacity. 
The capacity is the upper-bound of the length and must be determined at compile time by the `Capacity` template parameter.

## Definition
```cpp
template <typename TElement, size_t Capacity>
struct Array
{
    TElement data[Capacity];
    const size_t capacity;
    size_t length;
};
```

## Construction
The `Array` structure has one variadic constructor that initializes the array with the list of elements passed.

```cpp
// Prototype:
// template <typename... Elements>
// Array(Elements... elements): 

#include <linucxx/structures/array.hpp>
using namespace linucxx::structures;

Array<int,10> digits(0,1,2,3,4,5,6,7,8,9); // initialize with digits 0-9
```

# Method Array::append()
The `Array::append()` method appends and element to the array and increments its length by 1, returning the index the element was inserted at.
If the array is full, the elements is NOT inserted (i.e. it does not overwrite the last element) and -1 is returned to indicate failure.

```cpp
// Prototype:
// ssize_t append(const TElement& element)

#include <linucxx/structures/array.hpp>
using namespace linucxx::structures;

Array<int,3> numbers(1,2);
ssize_t index;

index = numbers.append(3); // index = 2
index = numbers.append(4); // array is already full, index = -1
```

# Method Array::contains()
The `Array::contains()` method performs a linear search for the given element, returning the index of the first equal element (based on `==` equality) if found
and -1 if not found. Be careful, as returning the index means you must write `if (array.contains(n) != -1)` instead of `if (array.contains(n))`, which is an easy
mistake to make.

```cpp
// Prototype:
// ssize_t contains(const TElement& element)

#include <linucxx/structures/array.hpp>
using namespace linucxx::structures;

Array<int> numbers(3,7,9);
ssize_t index;

index = numbers.contains(9); // found, index = 2
index = numbers.contains(4); // not found, index = -1
```

# Method Array::fill()
The `Array::fill()` fills array with the given element. The method is `constexpr`, so a good compiler will perform the fill at compile time if possible.

```cpp
// Prototype:
// constexpr void Array<TElement,Capacity>::fill(const TElement& element)

#include <linucxx/structures/array.hpp>
using namespace linucxx::structures;

Array<int,16> scores;
scores.fill(0);
```
