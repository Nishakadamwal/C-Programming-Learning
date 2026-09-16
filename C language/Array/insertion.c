#include <stdio.h>
int n; /*Here n stores the number of elements currently present in the array.
        We made it global because both main() and insert() need to use n.
       */
void insert(int arr[], int, int); /*This tells the compiler that we have a function named insert().
It takes three arguments:
arr[] → array
int → position
int → item
It returns nothing, so we use:(void)*/
int main()
{
    int arr[100], pos, item; /*Three things are declared: arr[100] = An array that can store up to 100 integers.
    pos = Stores the position where we want to insert.
    item = Stores the new value we want to insert.*/

    printf("Enter number of elements: "); //printf() = display output
    scanf("%d", &n); //scanf() = take input
    printf("Enter %d elements:\n", n); //Array index starts from 0, but position usually starts from 1.
    /*Position 1 → Index 0
      Position 2 → Index 1
      Position 3 → Index 2
      Position 4 → Index 3
      Position 5 → Index 4*/
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter position to insert(1 to %d):", n+1); //Why n+1?
    /*Because if there are 5 elements, we can insert at: 1  2  3  4  5  6
      So there are 6 possible positions.*/
    scanf("%d", &pos);
    printf("Enter item to insert: ");
    scanf("%d", &item);

    if(pos<1 || pos>n+1){ //pos < 1 = Position cannot be 0 or negative.
        //pos > n+1 = Position cannot be greater than the maximum possible position.
        printf("Invalid position!\n");
    }else{
        insert(arr, pos, item);  //If the position is valid, we call: insert(arr, pos, item);
    }
    printf("Array after Insertion\t");
    for(int i=0; i<n; i++){  /*Notice that n has been increased inside insert().
                               So if initially: n = 5
                               after insertion: n = 6
                               Therefore the loop prints all 6 elements.*/
        printf("%d\t",arr[i]);
    }
    return 0;
}


    void insert(int arr[], int pos, int item){
        int i; 

        for(i=n-1; i>=pos-1; i--){
            arr[i+1]=arr[i]; 
        }

        arr[pos-1] = item; 
        n++; //n=5 to n=6 (elements increase)
        printf("Item inserted successfully.\n");
    }