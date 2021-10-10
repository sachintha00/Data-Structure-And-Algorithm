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
    printf("\n2. POP");
    printf("\n3. PEEK");
    printf("\n4. DISPLAY");
    printf("\n0. EXIT");

    do{
        printf("Enter Your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                {
                    //
                    break;
                }
            case 2:
                {
                    //
                    break;
                }
            case 3:
                {
                    //
                    break;
                }
            case 4:
                {
                    //
                    break;
                }
            case 0:
                {
                    choice=0;
                    break;
                }
        }
    }while(choice != 0);
}
