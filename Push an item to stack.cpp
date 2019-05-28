#include<bits/stdc++.h>
using namespace std;
int top, maxstk = 10;
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
int main()
{
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


    for(int i = 0; i<maxstk; i++)
    {
        printf("%d ", stack[i]);
    }

    printf("\nTop = %d\n",top);

    return 0;
}
