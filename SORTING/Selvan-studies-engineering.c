#include <stdio.h>
void printArray(int arr[],int n){
    int i;
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        }
        printf("\n");
        }
        void insertionSort(int arr[],int n){
            int i, key, j;
            for (i = 1; i < n; i++) {
                if(i==3){printArray(arr,n);
                }
                key = arr[i];
                j = i -1;
                while (j >= 0 && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j = j -1;
                    }
                    arr[j + 1] = key;
                    }
                    }
                    int main(){  
                        int n,i;
                        scanf("%d",&n);
                        int arr[n];
                        for (i = 0; i < n; i++) 
                        {
                            scanf("%d",&arr[i]);
                            }
                            insertionSort(arr, n);
                            printArray(arr,n);
                            return 0;
                    }