#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d)
{

    int nums[4];
    nums[0] = a;
    nums[1] = b;
    nums[2] = c;
    nums[3] = d;

    int great = 0;

    for (int i = 0; i < 4; i++)
    {
        if (nums[i] > great)
        {
            great = nums[i];
        }
    }
    return great;
}
    int main()
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int ans = max_of_four(a, b, c, d);
        printf("%d", ans);

        return 0;
    }