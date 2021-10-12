#include<stdio.h>

int size;//9

struct stack{
    int arr[1000];
    int top;
}st;

void push()
{
    int value;

    if(st.top == size-1)
    {
        printf("\nStack is full");
    }
    else
    {
        st.top++;//0 -> 1 -> 2
        printf("Enter a value: ");
        scanf("%d",&value);
        st.arr[st.top] = value;
    }
}

int pop()
{
    if(st.top == -1)
    {
        printf("\n stack is empty");
    }
    else
    {
        int removeItem;
        removeItem = st.arr[st.top];
        st.top--;
        return removeItem;
    }
}

int peek()
{
    int peekValue;
    peekValue = st.arr[st.top];
    return peekValue;
}

void display()
{
    if(st.top >= 0)
    {
        printf("\n\nElement in the stack");
        for(int i = st.top; i>=0; i--)
        {
            printf("\n %d \n",st.arr[i]);
        }
    }
    else
    {
        printf("\n No element to display");
    }
}


void main()
{
    int choice;
    st.top = -1;
    printf("Enter size of stack: ");
    scanf("%d",&size); //front = 9 -1 = 8
    do{
       printf("\n\n\t1.PUSH");
       printf("\n\t2.POP");
       printf("\n\t3.PEEK");
       printf("\n\t4.DISPLAY");
       printf("\n\t0.EXIT");

       printf("\n\nEnter Your Choice: ");
       scanf("%d",&choice);
       switch(choice)
       {
       case 1:
        push();
        break;
       case 2:
        printf("\nRemove value: %d",pop());
        break;
       case 3:
        printf("\nPeek of the stack: %d",peek());
        break;
       case 4:
        display();
        break;
       case 0:
        printf("EXIT");
        break;
       default:
        printf("Invalid Input...");
       }
    }while(choice != 0);
}
