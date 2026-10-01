#include <stdio.h>

int main() {
    int n, largest=0 ,sec_largest=-5;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest=a[0];
    
 for (int i = 0; i < n; i++) {
        if(a[i]>largest){
              sec_largest=largest;
              
              largest=a[i];
              }
              else if (a[i]>sec_largest && a[i]!=largest){
                    sec_largest=a[i];
                    
              }
         }
  if (second_largest == -1) {
        printf("No second largest element\n");
    } else {
        printf("%d\n", second_largest);
    }

    return 0;
}
    return 0;
}
