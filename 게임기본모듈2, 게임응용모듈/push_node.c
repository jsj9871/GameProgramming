void push(char data)
{
	struct stack_node *new_node;
	new_node = (struct stack_node*)malloc(sizeof(struct stack_node));
	new_node -> data = data;
	new_node -> link = top;
	top = new_node;
}
