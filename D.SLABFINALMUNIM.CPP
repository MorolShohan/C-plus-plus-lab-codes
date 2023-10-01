#include <iostream>
using namespace std;

class Node
{
public:
    string data;
    Node *next;
};

class LinkedList
{
    Node *head=NULL,*current=NULL;
public:

    Node* createNode(string value)
    {
        Node *temp=new Node();
        temp->data=value;
        temp->next=NULL;
        return temp;
    }
    void insertAtFirst(string value)
    {
//        Node *temp=new Node();
//        temp->data=value;
//        temp->next=NULL;

        Node *temp=createNode(value);
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            temp->next=head;
            head=temp;
        }
    }

    void insertAtLast(string value)
    {
//        Node *temp=new Node();
//        temp->data=value;
//        temp->next=NULL;
        Node *temp=createNode(value);
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=current->next;
        }
    }


    void deleteFromLast()
    {
        Node *temp=head,*p;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        p=temp->next;
        temp->next=NULL;
        current=temp;
        delete p;
    }
    void displayElements()
    {
        Node *p=head;
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<endl;
    }
};

int main()
{
    LinkedList l;
    l.insertAtFirst("IP -->");
    l.insertAtFirst("OOP1-->");
    l.insertAtFirst("DS-->");
    l.insertAtFirst("ALGO-->");
    l.insertAtLast("TOC-->");
    l.displayElements();
    l.deleteFromLast();
    cout<<"-------------After deleting the last node------------"<<endl;
    l.displayElements();
    return 0;
}

