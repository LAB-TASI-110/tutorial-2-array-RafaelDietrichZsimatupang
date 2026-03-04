#include <stdio.h> 
#include <limits.h>
#include <float.h> 

int main() {
    int n;
    int num; 
    int prev_num;
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    float min_consecutive_avg = FLT_MAX;

    int third_element = 0;
    int fourth_element = 0;
    float average_third_fourth = 0.0;

    int i;
    scanf("%d", &n);
    if (n > 0) {
        scanf("%d", &prev_num);
        min_val = prev_num;
        max_val = prev_num;
    }
    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        if (i == 2) { 
            third_element = num;
        } else if (i == 3) {
            fourth_element = num;
        }

        if (num < min_val) {
            min_val = num;
        }
        if (num > max_val) {
            max_val = num;
        }

        float current_avg = (float)(prev_num + num) / 2.0;
        if (current_avg < min_consecutive_avg) {
            min_consecutive_avg = current_avg;
        }

        prev_num = num;
    }
    if (n >= 4) {
        average_third_fourth = (float)(third_element + fourth_element) / 2.0;
    } else {
        average_third_fourth = 0.0;
    }

    printf("%d\n", min_val);
    printf("%d\n", max_val);
    printf("%.2f\n", min_consecutive_avg);
    printf("%.2f\n", average_third_fourth);

    return 0;
}
