#include <stdio.h>
int sum(int *, int);
int main() {
int n, i;
scanf("%d", &n);
int arr[n];
for(i=0;i<n;i++) {
scanf("%d", &arr[i]);
}
printf("%d", sum(arr, n));
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

