#include <stdio.h>

int main() {
    int array[] = {5,1,9,2,7};
    int size = sizeof(array)/sizeof(array[0]);
    printf("mang truoc khi sap xep la ");
    for(int i=0;i<size;i++){
        printf("%d\t",array[i]);
    }

    for(int i=0;i<size - 1;i++) {
        int  check = 1;
        for(int j= 0;j<size - 1 - i;j++) {
            if (array[j] > array[j + 1]) {
                int  temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                check = 0;
            }
        }
        if (check == 1) {
            break;
        }
        printf("mang sau khi sap xep la: ");
        for(int j=0;j<size;j++) {
            printf("%d\t",array[j]);
        }

        return 0;
    }
}







