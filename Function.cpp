#include"Header.h"

template<class T>
SinglyLL<T>::SinglyLL()
    {
        head = NULL;
        iCnt=0;
    }

template<class T>
void SinglyLL<T>::InsertFirst(T iNo)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;
    newn->data=iNo;
    newn->next=NULL;

    if(head == NULL)
    {
        head=newn;
    }
    else
    {
        newn->next=head;
        head=newn;
    }
    iCnt++;
}

template<class T>
void SinglyLL<T>::InsertLast(T iNo)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;
    newn->data=iNo;
    newn->next=NULL;

    if(head == NULL)
    {
        head=newn;
    }
    else
    {
        struct node<T> *temp=NULL;
        temp=head;
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
    iCnt++;
}

template<class T>
void SinglyLL<T>::InsertAtPos(T iNo,int iPos)
{
    int iSize=0;
    iSize=CountNode();
    if(iPos==1)
    {
        InsertFirst(iNo);
    }
    else if(iPos==iSize)
    {
        InsertLast(iNo);
    }
    else
    {
    struct node<T> *newn=NULL;
    newn = new node<T>;
    newn->data=iNo;
    newn->next=NULL;
    struct node<T> *temp = NULL;
    temp=head;
        for(int i = 1;i<(iPos-1);i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
    iCnt++;
    
}

template<class T>
void SinglyLL<T>::DeleteFirst()
{
    if(head->next == NULL)
    {
        delete head;
        head=NULL;
    }
    else
    {
        struct node<T> *temp;
        temp=head;
        head=head->next;
        delete temp;
    }
    iCnt--;
}

template<class T>
void SinglyLL<T>::DeleteLast()
{
    if(head->next == NULL)
    {
        delete head;
        head=NULL;
    }
    else
    {
        struct node<T> *temp=NULL;
        temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    iCnt--;
}

template<class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    int iSize = CountNode();
    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos==iSize)
    {
        DeleteLast();
    }
    else
    {
        struct node<T> *temp = NULL;
        struct node<T> *dTemp = NULL;
        temp=head;
        for(int i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        dTemp=temp->next;
        temp->next=temp->next->next;
        delete dTemp;
        dTemp=NULL;
    }
    iCnt--;
}

template<class T>
void SinglyLL<T>::Display()
{
    struct node<T> *temp=NULL;
    temp=head;
    cout<<"\n------------------------------"<<endl;
    while(temp!=NULL)
    {
        cout<<"["<<temp->data<<"]->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<"\n------------------------------"<<endl;
}

template<class T>
int SinglyLL<T>::CountNode()
{
    return iCnt;
}
