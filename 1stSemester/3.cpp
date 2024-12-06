#include <stdio.h>

int main() {
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);

    int a[n];
    int ans = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] <= y && a[i] >= x) {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}
