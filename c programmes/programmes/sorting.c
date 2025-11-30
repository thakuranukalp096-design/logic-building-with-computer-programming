                    #include <stdio.h>

void sort(int *a, int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(*(a+j) > *(a+j+1)) {
                temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;
            }
        }
    }
}

int main() {
    int a[10] = {34, 12, 5, 66, 23, 1, 89, 45, 78, 10};
    int i;

    sort(a, 10); 

    printf("Sorted array in ascending order:\n");
    for(i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}
