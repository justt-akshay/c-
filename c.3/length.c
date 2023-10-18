#include<stdio.h>
#include<string.h>

int main()
{
    printf("PROGRAMME TO FIND OUT LENGTH OF STRING\n");

    char str[]={"TOPS_TECHNOLOGIES."};
    int length= (sizeof(str) -1) / sizeof( str[0]);
    printf("length of string is %d",length);
   int length2=strlen(str);
    printf("\nconfirming with strlength function : %d",length2);
    return 0;
