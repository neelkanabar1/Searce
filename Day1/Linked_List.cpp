class Node
{
    public:
    int data;
    Node *next;
};

void push(Node** head_ref, int new_data)
{

    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;

}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}

int main()
{
    
    Node* head = NULL;
    append(&head, 6);
    push(&head, 7);
    push(&head, 1);
    append(&head, 4);
    insertAfter(head->next, 8);
    
    cout<<"Created Linked list is: ";
    printList(head);
     
    return 0;
}