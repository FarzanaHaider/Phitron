#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while(n--) {
        int e;
        scanf("%d", &e);

        if(e < 1) {
            printf("Entry-level-candidate\n");
        }
        else if(e <= 3) {
            printf("Junior candidate\n");
        }
        else if(e <= 7) {
            printf("Mid-level candidate\n");
        }
        else {
            printf("Senior candidate\n");
        }
    }

    return 0;
}
