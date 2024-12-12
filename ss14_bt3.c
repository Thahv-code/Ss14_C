#include <stdio.h>
#include <string.h>
int main() {
    char arr[]="ABCDF";
    long long length= strlen(arr);
    for(int i=0;i<length/2;i++){
        int temp = arr[i];
        arr[i]=arr[length-1-i];
        arr[length-i-1]=temp;
    }
    printf("%s\n",arr);
    return 0;
}