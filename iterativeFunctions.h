
#ifndef iterativeFunctions_h
#define iterativeFunctions_h
#include <iostream>

struct Node
{
    int data;
    Node* next;
}*first = nullptr, *last = nullptr;

void create(int* A, int length)
{
    Node* temp = new Node;
    temp->data = A[0];
    temp->next = nullptr;
    first = temp;
    last = first;
    
    for(int i=1; i<length; i++)
    {
        Node* temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}

void display(Node* p)
{
    while(p != nullptr)
    {
        std::cout<<p->data<<" ";
        p = p->next;
    }
}

void deleteNode(Node* p, int key)
{
    Node* q;
    while(p != nullptr)
    {
        if(first->data == key)
        {
            first = first->next;
            delete p;
        }
        else
        {
            q = p;
            p = p->next;
            if(p->data == key && p)
            {
                q->next = p->next;
                delete p;
            }
        }
        break;
    }
}

void reverse(Node* p)
{
    Node* q = nullptr;
    Node* r = nullptr;
    
    while(p!=0)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

#endif /* iterativeFunctions_h */
