#include<bits/stdc++.h>
using namespace std;
struct node{
    int item;
    struct node *next;
} ;
typedef struct node *nodeptr;
nodeptr getnode(void)
{
    nodeptr p;
    p = (nodeptr) malloc(sizeof(struct node));
    return p;
}

nodeptr insertnode(int value , nodeptr top)
{
    nodeptr p = getnode();
    top->item = value;
    p->next = top;
    return p;
}
int main()
{
    int item;
    nodeptr start, top, ptr;
    start = getnode();
    start ->next = NULL;
    top = start;

    printf("Start a negative value to terminate\n");
    do
    {
        scanf("%d", &item);
        if(item > 0)
        {
            top = insertnode(item, top);
        }

    }while(item > 0);

   top = top->next;
    while(top != NULL)
    {
        int number =  top->item;
        printf("%d ",number);
        top = top->next;
    }
    return 0;
}

