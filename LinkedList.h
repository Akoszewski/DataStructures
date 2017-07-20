#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

int f();

template <typename T>
struct Element
{
    T data;
    Element<T>* next;
};

template <typename T> ostream& operator<<(ostream& out, const T& el);

template <typename T>
class LinkedList
{
    private:
        Element<T>* head;
    public:
        LinkedList();
        LinkedList(const LinkedList<T> copied);
        ~LinkedList();
        void addElement(const T& element);
        void print() const;
        //friend ostream& operator<<(ostream& out, const T& el);
};

template <typename T> 
LinkedList<T>::LinkedList() : head(NULL)
{

}

template <typename T> 
LinkedList<T>::LinkedList(const LinkedList<T> copied)
{
    //TODO: implement
}

template <typename T> 
LinkedList<T>::~LinkedList()
{
   //TODO: implement
}

template <typename T> 
void LinkedList<T>::addElement(const T& newEl)
{
     Element<T>* temp = new Element<T>;
     temp->data = newEl;
     temp->next = head;
     head = temp;
}

template <typename T>
void LinkedList<T>::print() const
{
    Element<T>* temp = head;
    while(temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

#endif