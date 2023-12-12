#include <linucxx/debug.hpp>

// debug statements only print if `DEBUG` defined

int main()
{
    DPUTS("start of the program!"); // prints "[debug.cpp, line 7] start of the program!\n"
    int x = 10, y = 20;
    int z = x + y;

    DPRINTF("%d + %d = %d\n", x, y, z); // prints "[debug.cpp, line 7] 10 + 20 = 30\n"

    return 0;
}
