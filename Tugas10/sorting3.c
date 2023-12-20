#include <stdio.h>
#define SIZE 100
int x;
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
int main(void){
    int a[SIZE];
    for (size_t x = 0; x < SIZE; ++x)
    {
        a[x] = 2 * x;
    }
    printf("Enter integer search key: ");
    int searchKey;
    scanf("%d", &searchKey);

    size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
    {
        while (low <= high){
            size_t middle = (low + high) / 2;
            printRow(b, low, middle, high);
            if(searchKey == b[middle]){
                return middle;
            }
            else if(searchKey < b[middle]){
                high = middle -1;

            } 
            else{
                low = middle + 1;
            }
        }
        return -1;
    }
}
