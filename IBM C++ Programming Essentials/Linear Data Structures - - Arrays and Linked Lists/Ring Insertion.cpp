#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head, *tail;
    LinkedList()
    {
        head = NULL;
    }
    void insertAtFront(int value);
    void display();
};

void LinkedList::insertAtFront(int value)
{

    Node *newNode = new Node();
    newNode->data = value;

    newNode->next = head;

    head = newNode;
}

void LinkedList::display()
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    char choice;
    int value;
    LinkedList rod;
    do
    {
        cout << "\nEnter the ring number:\n";
        cin >> value;

        rod.insertAtFront(value);

        cout << "Do you want to add another ring? Enter y/n \n";
        cin >> choice;
    } while (choice == 'y');

    cout << "The ring numbers in the rod are: \n";

    rod.display();

    return 0;
}
