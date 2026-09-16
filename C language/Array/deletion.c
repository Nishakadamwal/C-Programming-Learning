#include <stdio.h>
int n;
void delete(int arr[], int); 
int main()
{
    int arr[100], pos;
    
    printf("Enter number of element: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter position to delete(1 to %d):", n);
    scanf("%d", &pos);

    if(pos<1 || pos>n){
        printf("Invalid position!\n");
    }else{
        delete(arr, pos);
    }
    printf("Array after deletion:\t");

    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}

void delete(int arr[], int pos){
    int i;
    // shifts element to the left
    for(i=pos-1; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
    printf("Item deleted successfully!\n");
}