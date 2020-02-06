#include <iostream.h>
#include <conio.h>
#include <alloc.h>
struct node
{
	int data;
	struct node * prev;
	struct node * next;
}*head,*last;

void create_list(int n);
void display_from_first();
void display_from_end();

int main()
{
	int n,choice;

	head = NULL;
	last = NULL;

	cout<<"enter the number of nodes you want to enter";
	cin>>n;

	create_list(n);

	cout<<"\npress 1 to display list from first";
	cout<<"\npress 2 to display list from last";
	cin>>choice;

	if(choice==1)
	{
		display_from_first;
	}
	else
	{
		display_from_end;
	}
	return 0;
}

void create_list(int n)
{
	int i,data;
	struct node *newNode;

	if(n>=1)
	{
		head=(struct node*)malloc(sizeof(struct node));

		if(head!=NULL)
		{
			cout<<"enter data of 1 node";
			cin>>data;

			head->data;
			head->prev;
			head->next;

			last = head;

			for(i=2;i<=n;i++)
			{
				newNode = (struct node*)malloc(sizeof(struct node));

				if(newNode != NULL)
				{
					cout<<"enter the data of the node"<<i;
					cin>>data;

					newNode->data = data;
					newNode->prev = last;
					newNode->next = NULL;

					last->next = newNode;
					last = newNode;
				}
				else
				{
					cout<<"unable to allocate momory";
					break;
				}
			}
			cout<<"\nDOUBLY LINKED LIST CREATED SUCCESSFULLY\n";
		}
		else
		{
			cout<<"unable to allocate memory";
		}
	}
}
