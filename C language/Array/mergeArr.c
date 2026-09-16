#include <stdio.h>
void merge(int arr1[], int arr2[], int n1, int n2, int arr3[]){
    int i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(arr1[i]< arr2[j]){
            arr3[k++] = arr1[i++];
        }else{
            arr3[k++] = arr2[j++];
        }
        while(i<n1){
            arr3[k++] = arr1[i++];
        } while(j<n2){
            arr3[k++] = arr2[j++];
        }
    }
}
int main()
{
    int n1, n2, arr1[50], arr2[50], arr3[100];
    printf("Enter the number of elements of first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of first array: ");
    for(int i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements of second array: ");
    scanf("%d", &n2);
    printf("Enter of elements of second array: ");
    for(int i=0; i<n2; i++){
        scanf("%d", &arr2[i]);
    }

    merge(arr1, arr2, n1, n2, arr3);
    printf("\nArray after merging\n");
    for(int i=0; i<n1+n2; i++){
        printf("%d\t", arr3[i]);
    }
    return 0;
}