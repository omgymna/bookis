//testone.cpp
#include <iostream>

using namespace std;

class Node
{
    public:
        int value;
        Node* next;
};
void delNode(Node** head, int x)
{
    Node* temporary = *head;
    Node* pre = NULL;

    if(temporary->value == x && temporary != NULL )
    {
            *head = temporary->next;
            delete temporary;
            return;
    }
    else
    {
        while(temporary!= NULL && temporary->value != x)
        {
            pre = temporary;
            temporary = temporary-> next;
        }
        if(temporary==NULL)
        {
            cout<<"not found"<<endl;
            return;
        }

        pre->next = temporary->next;
        delete temporary;
    }
}
bool searchElement(Node *head, int x)
{
    Node* now = head;
    while (now != NULL)
    {
        if (now->value == x)
            return true;
        now = now->next;
    }
    return false;
}
void PrintLinkedList(Node* n)
{
    while (n!= NULL)
    {
        cout << n->value<<endl;
        n = n->next;
    }
}
void insertAtBegin(Node** head, int newVal)
{
    Node* newNode = new Node();
    newNode->value = newVal;
    newNode->next = *head;
    *head = newNode;
}
int main()
{
    int x;
    char choice;
    Node* head = new Node();

    cout<<"enter a value: ";
    cin>>x;
    head->value = x;
    head->next = NULL;

    cout<<"enter new value? (y/n): ";
    cin>>choice;
    if(choice != 'y')
    {
        cout<<"Unsorted list: \n";
        PrintLinkedList(head);
        return 1;
    }

    do
    {
        cout<<"enter a value: ";
        cin>>x;
        insertAtBegin(&head,x);
        cout<<"enter new value? (y/n): ";
        cin>>choice;
    }
    while(choice == 'y');

    cout<<"Unsorted list: \n";
    PrintLinkedList(head);

    int searchkey = 0;
    cout<<"Enter Element to Search: ";
    cin>> searchkey;
    if(searchElement(head, searchkey))
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }

    int deletekey = 0;
    cout<<"Enter Element to Delete: ";
    cin>>deletekey;
    delNode(&head, deletekey);
    cout<<"New List: "<<endl;
    PrintLinkedList(head);



    return 0;
}
