# Arrays
Arrays are a contiguous sequence of elements with a mutable length but a constant capacity. 
The capacity is the upper-bound of the length and must be determined at compile time by the `Capacity` template parameter.

```cpp
#include <linucxx/structures/array.hpp>
using namespace linucxx::structures;

// Array<Type,Capacity> name(initialization);
Array<int,10> digits(0,1,2,3,4,5,6,7,8,9);
```
