#include<stdio.h>
#include<stdlib.h>

int size;

struct Stack{
    int arraStack[100];
    int top;
}st;

int main()
{
    st.top = -1;
    printf("Enter a stack size less than 100: ");
    scanf("%d",&size);
}
