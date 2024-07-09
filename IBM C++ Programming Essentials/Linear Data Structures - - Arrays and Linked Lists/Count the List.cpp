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
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    void append(int);
    void display();
    int countTheKey(int);
};

void LinkedList ::append(int value)
{
    // Create a new node
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    // If the list is empty, make the new node the head
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        // Otherwise, find the last node and append the new node
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LinkedList ::display()
{
    Node *temp = head;
    cout << "\nThe list is: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int LinkedList ::countTheKey(int key)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            count++;
        }
        temp = temp->next;
    }
    return count;
}

int main()
{
    cout << "\nEnter the size of the list: ";
    int N, value, key;
    LinkedList lst;
    cin >> N;
    if (N > 0)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> value;
            lst.append(value);
        }
        cout << "\n";
        lst.display();
        cout << "\nEnter the number: ";
        cin >> key;

        int occurrences = lst.countTheKey(key);
        cout << key << " occurs " << occurrences << " times.\n";
    }
    else
    {
        cout << "\nInvalid Input";
    }

    return 0;
}
