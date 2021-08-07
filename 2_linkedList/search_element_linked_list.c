/**objective:SEARCH AN ELEMENT IN A LINKED LIST**
***@uthor:Prasanta Roy Choudhury****************/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};
struct node *start=NULL;
struct node *temp;
struct node *ptr;

void create();
void display();
void search();


main()
{
	int choice;
	
	while(1)
	{
		system("cls");
		printf("              ***SEARCH AN ELEMENT IN A LINKED LIST***        \n\n");
		printf("The Linked List:");
		display();
		printf("\n\n\n");
		printf("1. Create\t2. Search\t3. Exit\n\n");
		printf("Make your choice:");
		scanf("%d",&choice);
		printf("\n\n");
		
		switch(choice)
		{
			case 1:
				{
					create();
					break;
				}
			case 2:
				{
					search();
					break;
				}
			case 3:
				{
					exit(1);
				}
			default:
				{
					printf("Wrong input...!");
					getch();
					break;
				}
		}
	}
	getch();
}

void create()
{
	int data;
	while(1)
	{
		system("cls");
		printf("              ***SEARCHING OPERATION FOR LINKED LIST***        \n\n");
		printf("Linked List:");
		display();
		printf("\n\n");
		printf("1. create Linked List:\n\n\n");
		printf("Enter -999 to go back\n");
		printf("Enter data:");
		scanf("%d",&data);
	
		
		if(data==-999)
		{
			return;
		}
		else
		{
			temp=(struct node *)malloc(sizeof(struct node));
			temp->info=data;
			temp->link=NULL;
			
			if(start==NULL)
			{
				start=temp;
			}
			else
			{
				ptr=start;
				
				while(ptr->link!=NULL)
				{
					ptr=ptr->link;
				}
				ptr->link=temp;				
			}
		}
	}
	
	getch();
}

void display()
{
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d-->",ptr->info);
		ptr=ptr->link;
	}
}

void search()
{
	int key;
	int count=1;
	if(start==NULL)
	{
		printf("List is empty...!");
		getch();
		return;
	}
	else
	{
		printf("\nEnter key to find:");
		scanf("%d",&key);
		temp=start;
		while(temp->info!=key && temp->link!=NULL)
		{
			temp=temp->link;
			count++;
		}
		if(temp->info!=key)
		{
			printf("Data is not found in the list");
		}
		else
		{
			printf("data found at the position %d",count);
		}
	}
	
	getch();
}
