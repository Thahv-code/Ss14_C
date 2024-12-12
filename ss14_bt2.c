#include <stdio.h>
#include <string.h>
int main() {
    char arr[]="ABCDEF";
    int length = strlen(arr);
    for(int i=0;i<length;i++){
        printf("%3c",arr[i]);
    }
    return 0;
}