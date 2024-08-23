#include <stdio.h>

void interpolation_search(int a[], int bottom, int top, int item)
{
    int mid,index = -1;
    while (bottom <= top) {
        mid = bottom + (top - bottom)*((item-a[bottom])/(a[top]-a[bottom]));
        if (item == a[mid]){
            index = mid ;
            break;

        }

        if (item < a[mid])
            top = mid - 1;
        else
            bottom = mid + 1;
    }

     if (index != -1)
        printf("Element %d is present at index %d", item, index);
    else
        printf("Element %d not found in the list!", item);

}
/* End of interpolation_search() */
/* The main() begins */
int main()
{
    int arr[10];
    int i, num;
    int item;

    scanf("%d", &num);
    printf("Enter %d Elements in ascending order:\n",num);
    for (i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nSearch For : ");
    scanf("%d", &item);
   interpolation_search(arr, 0, num - 1, item);


    return 0;
}
