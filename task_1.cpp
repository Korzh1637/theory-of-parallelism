#include <cmath>
#include <vector>
#include <iostream>
#define SIZE 10000000

#ifdef FLOAT
    using Type = float;
#else
    using Type = double;
#endif

int main()
{
    Type sum_sin = 0.0;
    std::vector<Type> arr_sin(SIZE);
    
    for (int i = 0; i < SIZE; i++)
    {
        Type x = 2.0 * M_PI * (Type)i / (SIZE - 1);
        arr_sin[i] = std::sin(x);
        sum_sin += arr_sin[i];
    }

    std::cout << sum_sin << std::endl;
    return 0;
}
