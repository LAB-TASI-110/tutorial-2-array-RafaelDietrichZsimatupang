#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int num;
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    int i;
    int first_element = 0;
    int second_element = 0;
    float average_first_two;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (i == 0) {
            first_element = num;
        } else if (i == 1) {
            second_element = num;
        }
        if (num < min_val) {
            min_val = num;
        }
        if (num > max_val) {
            max_val = num;
        }
    }

    if (n >= 2) {
        average_first_two = (float)(first_element + second_element) / 2.0;
    } else {
        average_first_two = 0.0;
    }

    printf("%d\n", min_val);
    printf("%d\n", max_val);
    printf("%.2f\n", average_first_two);

    return 0;
}
