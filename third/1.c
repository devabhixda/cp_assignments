#include <stdio.h>
int sum(int *, int);
int main() {
int n, i;
printf("Enter the size of array-");
scanf("%d", &n);
int arr[n];
printf("Enter array elements\n");
for(i=0;i<n;i++) {
scanf("%d", &arr[i]);
}
printf("The sum of array is-%d\n", sum(arr, n));
return 0;
}

int sum(int *ptr, int a) {
int add = 0;
int j;
for(j=0;j<a;j++) {
add = add + *(ptr + j);
}
return add;
}

