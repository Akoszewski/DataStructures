#include <iostream>
#include <conio.h>

#include "LinkedList.h"
#include "Complex.h"

using namespace std;

template <typename T> 
T add(T a,  T b)
{
    return a + b;
}

int main()
{
    /*Complex num1(5, 6);
    Complex num2(10, 3);
    cout << num2;
    num2 = num1 + num2;
    cout << num2;

    cout << add(2, 3) << endl;
    cout << add(num1, num2);
    num2 = add(num1, num2);
    cout << num2;*/

    /*LinkedList <int> lista;
    lista.addElement(6);
    lista.addElement(65);
    lista.addElement(44);
    lista.addElement(22);
    lista.addElement(13);
    lista.addElement(456);
    lista.addElement(55);
    lista.print();*/

    Complex num1(5, 6);
    Complex num2(10, 3);

    LinkedList <Complex> zespolone;
    zespolone.addElement(num1);
    zespolone.addElement(num2);
    zespolone.print();

    return 0;
}