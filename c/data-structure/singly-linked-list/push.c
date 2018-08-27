
/*
  Add a element as head of a linked list,
  Given the head of linked list, and the DATA to create the element
*/
void push(struct Node** head_ref, /* DATA */ )
{
  // create the new element
  struct Node * new_node = (struct Node *) malloc(sizeof(struct Node));

  // set new_node attr using given DATA
  // example: strcpy(new_node->data, new_data);


  // swap head
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}
