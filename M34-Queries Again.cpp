#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val ;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;       
    }
    head->prev = newNode;
    newNode->next = head;

    head = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;       
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool insert_at_any_position(Node* &head, Node* &tail, int idx, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for (int i = 1; i < idx; i++)
    {
        if (tmp == tail)
        {
            return false;
        }
        tmp = tmp->next;
    }

    if (tmp == tail)
    {
        insert_at_tail(head, tail, val);
        return true;
    }
    newNode->prev = tmp;
    newNode->next = tmp->next;

    tmp->next->prev = newNode;
    tmp->next = newNode;
    return true;
}

void print_forward(Node* head)
{
    Node* tmp = head;

    cout << "L -> ";

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    
    cout << endl;
}

void print_backward(Node* tail)
{
    Node* tmp = tail;

    cout << "R -> ";
    
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int t, val, x;
    cin >> t;

    while (t--)
    {   
        bool flag = false;
        cin >> x >> val;

        if (x == 0)
        {
            insert_at_head(head, tail, val);
            flag = true;
        }
        else
        {
            if (head != NULL)
            {
                flag = insert_at_any_position(head, tail, x, val);
            }
            else
            {
                flag = false;
            }
        }

        if (flag)
        {
            print_forward(head);
            print_backward(tail);
        } 
        else
        {
            cout << "Invalid\n";
        }
    }
    return 0;
}