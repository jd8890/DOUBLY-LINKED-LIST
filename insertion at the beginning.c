void insertFront(struct Node** head, int data) 
{
    struct Node* newNode = new Node;
    newNode->data = data;
    newNode->next = (*head);
    newNode->prev = NULL;
    if ((*head) != NULL)
        (*head)->prev = newNode;
        (*head) = newNode;
}
