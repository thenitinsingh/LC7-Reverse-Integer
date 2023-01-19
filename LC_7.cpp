#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, temp, rev_n = 0, int_MIN = 0 - (pow(2, 31)), int_MAX = pow(2, 31) - 1;
    cout << "Number:";
    cin >> x;
    while (x != 0)
    {
        temp = x % 10;
        if ((rev_n < int_MIN / 10) || (rev_n > int_MAX / 10))
        {
            cout << 0;
            continue;
        }
        rev_n = (rev_n * 10) + temp;
        x = x / 10;
    }
    cout << rev_n;
}
