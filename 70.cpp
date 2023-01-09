#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
if (r >= l) {
int mid = l + (r - l) / 2;

if (arr[mid] == x)
return mid;

if (arr[mid] > x)
return binarySearch(arr, l, mid - 1, x);

return binarySearch(arr, mid + 1, r, x);
}

return -1;
}

int main(void)
{

int length;

printf("Enter length of your Array: ");

scanf("%d",&length);

int arr[length];

printf("Enter Array Elements: ");
for(int i=0;i<length;i++){
scanf("%d",&arr[i]);
}

int x;
printf("Enter Element to be searched: ");

scanf("%d",&x);

int result = binarySearch(arr, 0, length - 1, x);

if(result==-1){
printf("%d is not present in given Array.",x);
}else{
printf("%d is present at %d",x,result);
}
return 0;
}