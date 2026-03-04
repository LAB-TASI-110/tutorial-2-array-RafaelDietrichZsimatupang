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
    int i; 
    scanf("%d", &n);
    if (n > 0) {
        scanf("%d", &prev_num);
        min_val = prev_num;
        max_val = prev_num;
    }

    for (i = 1; i < n; i++) {
        scanf("%d", &num); 
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

    printf("%d\n", min_val);
    printf("%d\n", max_val);
    printf("%.2f\n", min_consecutive_avg);

    return 0; 
}
