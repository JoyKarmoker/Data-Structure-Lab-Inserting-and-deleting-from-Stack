#include<bits/stdc++.h>
using namespace std;
int top, maxstk = 10;
//This function inserts an item yo stack
void PUSH(int arr[], int item)
{

    if(top >= maxstk)
    {
        printf("Overflow\n");
    }

    else
    {
        arr[top] = item;
        top++;
    }

}

int POP(int arr[])
{
    int item;
    if(top ==0)
    {
        printf("\nUnderflow");
        return NULL;
    }

    else
    {
        top = top-1;
        item = arr[top];
        return item;
    }
}
int main()
{
    int item;
    int stack[maxstk];

    PUSH(stack, 10);
    PUSH(stack, 9);
    PUSH(stack, 8);
    PUSH(stack, 7);
    PUSH(stack, 6);
    PUSH(stack, 5);
    PUSH(stack, 4);
    PUSH(stack, 3);
    PUSH(stack, 2);
    PUSH(stack, 1);
    PUSH(stack, 0);
    PUSH(stack, -1);


    item = POP(stack);
    printf("%d ", item);//1

    item = POP(stack);
    printf("%d ", item);//2

    item = POP(stack);
    printf("%d ", item);//3

    item = POP(stack);
    printf("%d ", item);//4

    item = POP(stack);
    printf("%d ", item);//5

    item = POP(stack);
    printf("%d ", item);//6

    item = POP(stack);
    printf("%d ", item);//7

    item = POP(stack);
    printf("%d ", item);//8

    item = POP(stack);
    printf("%d ", item);//9

    item = POP(stack);
    printf("%d ", item);//10

    item = POP(stack);
    printf("%d ", item);//11

    item = POP(stack);
    printf("%d ", item);//12

    item = POP(stack);
    printf("%d ", item);//13

    return 0;
}

