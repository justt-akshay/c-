include<stdio.h>
#include<string.h>
char palindrome(char *sentence,char *char_array,int n)
{   int j=0;
  for(int i=n-1;i>=0;i--)
  {
    if(sentence[j]!=char_array[i]) 
         { 
            return printf("it is not palindrome");
         }
    j++;
  }
return printf("\nit is palindrome");
}

int main()
{
    printf("WAP to reverse a string and check that the string is palindrome or not\n");

    char sentence[100];
    char char_array[100];
    printf("enter the sentence:");
    fgets(sentence,sizeof(sentence),stdin);

    int n=strlen(sentence); 

    int i,j;
    i=j=0;
    for(int i=n-1; i>=0;i--)
    {   
       char_array[j]=sentence[i];  
       j++;  
    }
    char_array[j]='\0';

    printf("reversed string is:");
    for(i=0;i<n;i++)
    {
    printf("%c",char_array[i]);
    }
    palindrome(sentence,char_array,n);
    return 0;
}