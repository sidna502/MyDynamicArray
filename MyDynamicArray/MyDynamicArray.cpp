#include <iostream>
#include "clsMyDynamicArray.h"


int main()
{
    system("color 5f");

    clsMyDynamicArray<int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "Array Size: " << MyDynamicArray.Size() << endl;
    cout << "\nIs Array Emplty ? : " << MyDynamicArray.IsEmpty() << endl;
    cout << "\nArray iems: ";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAtBeginning(400);
    cout << "\nArray after inserting 400 at beginning :\n";
    cout << "\array size : " << MyDynamicArray.Size() << endl;
    cout << "\nArray Items : ";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertBefore(2, 500);
    cout << "\nArray after inserting 500 Before index 2 :\n";
    cout << "\array size : " << MyDynamicArray.Size() << endl;
    cout << "\nArray Items : ";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAfter(2, 600);
    cout << "\nArray after inserting 600 after index 2 :\n";
    cout << "\array size : " << MyDynamicArray.Size() << endl;
    cout << "\nArray Items : ";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAtEnd(800);
    cout << "\nArray after inserting 800 at end :\n";
    cout << "\array size : " << MyDynamicArray.Size() << endl;
    cout << "\nArray Items : ";
    MyDynamicArray.PrintList();

   /* MyDynamicArray.InsertAt(2, 500);
    cout << "\nArray after inserting 500 at index 2 :\n";
    cout << "\array size : " << MyDynamicArray.Size() << endl;
    cout << "\nArray Items : ";
    MyDynamicArray.PrintList();*/

    /*int index = MyDynamicArray.Find(30);

    if (index == -1)
        cout << "\nIem was not found :-(\n";
    else
        cout << "\n30 is found at index: " << index << endl;

    MyDynamicArray.DeleteItem(30);
    cout << "\nArray Items after deleting 30: \n";
    cout << "Arry Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintList();*/
    
    /*MyDynamicArray.DeleteFirstItem();
    cout << "\nArray Items after deleting first item: \n";
    cout << "Arry Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintList();

    MyDynamicArray.DeleteLastItem();
    cout << "\nArray Items after deleting last item: \n";
    cout << "Arry Size: " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintList();*/

   /* cout << "\nItem(2): " << MyDynamicArray.GetItem(2) << endl;
    MyDynamicArray.DeleteItemAt(4);
    cout << "\nArray Items after deleting item(2): ";
    MyDynamicArray.PrintList();*/

    /*MyDynamicArray.Reverse();
    cout << "\nArray Item after reversing: ";
    MyDynamicArray.PrintList();

    MyDynamicArray.Clear();
    cout << "\nArray Item after clear: ";
    MyDynamicArray.PrintList();*/

    /*MyDynamicArray.Resize(2);
    cout << "\nArray Size: " << MyDynamicArray.Size() << endl;
    cout << "\nArray items resize to 2: ";
    MyDynamicArray.PrintList();

    MyDynamicArray.Resize(10);
    cout << "\nArray Size: " << MyDynamicArray.Size() << endl;
    cout << "\nArray items resize to 10: ";
    MyDynamicArray.PrintList();
    */
    system("pause > 0");
}
