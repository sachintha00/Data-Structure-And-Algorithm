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
    int choice;
    printf("Enter a stack size less than 100: ");
    scanf("%d",&size);

    printf("Stack Menu\n\n\n");
    printf("1. PUSH");
    printf("2. POP");
    printf("3. PEEK");
    printf("4. DISPLAY");
    printf("0. EXIT");
}
