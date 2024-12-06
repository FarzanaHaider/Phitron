#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    int a[n];
    int s = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        s += a[i];

        if (s <= t)
        {
            ans++;
        }
        else if (s > t)
        {
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}
