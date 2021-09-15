void add_node(char data)
{
	struct linked_list *new_node, *last;
	last = head;
	while(last->Link != NULL)
		last = last ->link;
	new_node = (struct linked_list*)malloc(sizeof(struct linked_list));
	new_node ->data = data;
	new_node ->link = last ->link;
	last ->link = new_node;
}




int main(void)
{
	int count = 0;
	char key;
	head = (struct linked_list*)malloc(size of (struct linked_List));
	head -> Link=NULL;
	do
	{
		count++;
		printf("%2d번 문자입력 >"count);
		key=getch();
		add_node(key);
	}while(key != 27);
	
	printf("\n\n");
	printf("입력된 순서 : ");
	printf_linked_list(head->Link);
	printf("\n");
	printf("입력의 역순 : ");
	printf_reverse_linked_list(head->Link);
	pritnf("\n");
	return 0; 
}

void add_node(char data)
{
	
}

void print_list(struct linked_List *now)
{
	while(now!=NULL)
	{
		printf("%c", now -> data);
		now = now -> link;
	}
	printf("\n");
}

void print_reverse_linked_list(struct linked_list *now)
{
	if (now->link!=NULL)
	{
		print_reverse_linked_list(now->link);
		printf("%c", now -> data);
	}
	else
		printf("%c", now -> data);
}
