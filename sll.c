
#include <stdio.h>
#include <stdlib.h>
void Insert();
void Display();

struct node
{
    int data;
    struct node* link;
};
struct node* root;

int main()
{
    int ch;
    printf("1.Insert\n");
    printf("2.Display\n");
    printf("3.Exit\n");
    while(1)
    {
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:Insert();
                   break;
            case 2:Display();
                   break;
            case 3:exit(0);
        }
    }
    return 0;
}


void Insert()
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&temp->data);
temp->link=NULL;
 if(root==NULL) 
 {
     root=temp;
 }
    else
    {
        struct node* p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}

void Display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
    printf("List is Empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d-->",temp->data);
            temp=temp->link;
        }
    }
}

