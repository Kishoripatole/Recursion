#include<stdio.h>
int palindrome();

int main()
{
     
    palindrome();
   return 0;
}

int palindrome()
{
    int n,n1,n2,n3,reverse;
    printf("Enter number:");
    scanf("%d",&n);
   
    n1=n/100;
    n2=(n/10)%10;
    n3=(n%100)%10;
    reverse=(n3*100)+(n2*10)+n1;
    if(reverse==n)
    {
        printf("This Number is palindrome.");
    }
    else
    {
        printf("This Number is not palindrome.");
    }
    return 0;

     
}







