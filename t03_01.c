#include <stdio.h>
#include <limits.h> 

int main() {
    int n;
    int num;
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    int i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num < min_val) {
            min_val = num;
        }

        if (num > max_val) {
            max_val = num;
        }
    }

    printf("%d\n", min_val);
    printf("%d\n", max_val);

    return 0;
}
