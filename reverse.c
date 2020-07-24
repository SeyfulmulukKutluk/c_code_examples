#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Author:Seyfülmülük Kutluk email:seyfkutluk@gmail.com , kutluk18@itu.edu.tr

#define SIZE 10

void reverseof(char* arr);
int main()
{
    char* ch;
    ch=(char*)malloc(SIZE*sizeof(char));
    printf("Enter");
    fgets(ch, SIZE, stdin);

    reverseof(ch);
    printf("%s",ch);
    return 0;
}
void reverseof(char* arr)
{
    int i;
    char temp;
    int length=strlen(arr);
    for(i=0; i<length/2; i++){
        temp=arr[i];
        arr[i]=arr[length-1-i];
        arr[length-1-i]=temp;
    }
}
