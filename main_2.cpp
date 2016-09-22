#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    Queue ob;
    string value;

    setlocale (LC_CTYPE, "ukr");

    while(true)
    {
        int choose;
        cout << "1 - Додати елемент "
                "2 - Видалити елемент "
                "3 - Показати вміст "
                "4 - Вийти " << endl;
        cin >> choose;
        cin.ignore();

        switch (choose)
        {
            case 1: { cout << "Введіть значення: "; getline(cin, value);
                      ob.Enqueue(value);
                      break;
                    }
            case 2: { cout << "Елемент видалено!" << endl;
                      ob.Dequeue();
                      break;
                    }
            case 3: { ob.Show();
                      break;
                    }
            case 4: { exit(0);
                      break;
                    }
            default: { break; }
        }
    }

    return 0;
}
