#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        string s;
        Node *next;
        Node *prev;

    Node(string s)
    {
        this->s = s;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, string s)
{
    Node* newNode = new Node(s);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

Node* check_cmd(Node* head, Node* tail, Node* &tmp, string s)
{
    if (s == "prev")
    {
        if(tmp->prev != NULL)
        {
            tmp = tmp->prev;
            cout << tmp->s << endl;
        }
        else
        {
            cout << "Not Available\n";
            return tmp;
        }
    }
    else if (s == "next")
    {
        if (tmp != tail)
        {
            tmp = tmp->next;
            cout << tmp->s << endl;
        }
        else
        {
            cout << "Not Available\n";
            return tmp;
        }
    }
    else
    {
        Node* back = tmp;
        tmp = head;
        s.erase(0, 6);

        while(tmp->s != s)
        {
            tmp = tmp->next;
            if (tmp->next == NULL && tmp->s != s)
            {
                cout << "Not Available\n";
                tmp = back;
                return tmp; 
            }
        }
        cout << tmp->s << endl;

    }
    return tmp;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    string s;
    while(true)
    {
        cin >> s;
        if (s == "end")
        {
            break;
        }

        insert_at_tail(head, tail, s);
    }

    int q;
    cin >> q;
    cin.ignore();

    Node* tmp = head;
    while(q--)
    {
        getline(cin, s);
        tmp = check_cmd(head, tail, tmp, s);
    }
    return 0;
}