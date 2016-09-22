#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    Stack ob;
    datatype value;
    unsigned int size;

    setlocale (LC_CTYPE, "ukr");

    cout << "Розмір: ";
    cin >> size;
    cin.ignore();

    for(unsigned int i=0; i<size; i++)
    {
        cout << "[" << i+1 << "]: " << "Введіть значення: ";
        getline(cin, value);
        ob.Push(value);
    }

    cout << endl;
    ob.Show();
    cout << endl;

    int choose;
    while(choose)
    {
        cout << "Бажаєте видалити елемент стеку? (1/0)" << endl;
        cin >> choose;
        if (choose) ob.Pop();
    }

    cout << endl;
    ob.Show();
    cout << endl;


    return 0;
}
