#include"Header.h"

int main()
{
cout<<"\n---------------------Integer---------------------\n";    
    SinglyLL <int>obj1;
    obj1.InsertFirst(11);
    obj1.InsertLast(21);
    obj1.InsertLast(31);
    obj1.InsertLast(41);
    obj1.InsertLast(51);
    obj1.InsertLast(61);
    obj1.Display();
    obj1.InsertAtPos(33,4);
    cout<<"\nInsertAtPos"<<endl;
    obj1.Display();
    obj1.DeleteAtPos(4);
    cout<<"\nDeleteAtPos"<<endl;
    obj1.Display();
    obj1.DeleteFirst();
    cout<<"\nDeleteFirst"<<endl;
    obj1.Display();
    obj1.DeleteLast();
    cout<<"\nDeleteLast"<<endl;
    obj1.Display();

cout<<"\n---------------------Float---------------------\n";
    SinglyLL <float>obj2;
    obj2.InsertFirst(11.2);
    obj2.InsertLast(21.2);
    obj2.InsertLast(31.2);
    obj2.InsertLast(41.2);
    obj2.InsertLast(51.2);
    obj2.InsertLast(61.2);
    obj2.Display();
    obj2.InsertAtPos(33.2,4);
    cout<<"\nInsertAtPos"<<endl;
    obj2.Display();
    obj2.DeleteAtPos(4.2);
    cout<<"\nDeleteAtPos"<<endl;
    obj2.Display();
    obj2.DeleteFirst();
    cout<<"\nDeleteFirst"<<endl;
    obj2.Display();
    
    obj2.DeleteLast();
    cout<<"\nDeleteLast"<<endl;
    obj2.Display();

    cout<<"\n---------------------Character---------------------\n";
    SinglyLL <char>obj3;
    obj3.InsertFirst('A');
    obj3.InsertLast('B');
    obj3.InsertLast('C');
    obj3.InsertLast('D');
    obj3.InsertLast('E');
    obj3.InsertLast('F');
    obj3.Display();
    cout<<"\nInsertAtPos"<<endl;
    obj3.InsertAtPos('G',4);
    obj3.Display();
    obj3.DeleteAtPos(4);
    cout<<"\nDeleteAtPos"<<endl;
    obj3.Display();
    obj3.DeleteFirst();
    cout<<"\nDeleteFirst"<<endl;
    obj3.Display();
    obj3.DeleteLast();
    cout<<"\nDeleteLast"<<endl;
    obj3.Display();

    return 0;
}