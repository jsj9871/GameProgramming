char pop(void)
{
	struct stack_node *temp;
	char data;
	data = pop -> data;
	temp = top;
	top -> top -> link;
	free(temp);
	return data;
}






int main(void)
{
	int count = 0;
	char key;
	do
	{
		count++;
		printf("%2d 번 문자입력 >", count);
		key = getch();
		push(key);
		printf("%c\n", key);
	}while(key!=27);
	printf("\n\n");
	printf("데이터 pop과정 \n\n");
	while (top != NULL)
	{
		key = pop();
		printf("%c", key);
	}
	printf("\n");
	return 0;
}
void push(char data)
{
	
}

char pop(void)
{
	
}
