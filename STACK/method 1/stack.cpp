#include<iostream>>

using namespace std;

class Stack{

private:
    int maxSize,top;
    double *stackArray;

public:

    Stack(int a)
    {
        top = -1;
        maxSize = a;
        stackArray = new double[maxSize];
    }

    ~Stack()
    {
        delete []stackArray;
    }

    void push(double value)
    {
        if(isFull())
        {
            stackArray[++top] = value;
        }
        else
        {
            cout<<"Array is full";
        }
    }

    double pop()
    {
        if(isEmpty())
        {
           cout<<stackArray[top--];
        }
        else
        {
            cout<<"Array is empty";
        }
    }

    bool isFull()
    {
        if(top != stackArray[maxSize - 1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isEmpty()
    {
        if(top != -1)
        {
            return true;
        }
        else
        {
            return false;

        }
    }

    void peek()
    {
        if(isEmpty())
        {
            cout<<stackArray[top];
        }
    }



};

int main()
{
    Stack obj(5);
    obj.push(10.00);
    obj.push(2.55);
    obj.push(5.55);

    obj.pop();
    obj.pop();

}
