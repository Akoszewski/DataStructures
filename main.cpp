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
    Complex num3(115, 226);
    Complex num4(110, 333);

    LinkedList <Complex> zespolone;
    zespolone.addElement(num1);
    zespolone.addElement(num2);
    zespolone.print();

    LinkedList <Complex> zespolone2;
    zespolone2.addElement(num3);
    zespolone2.addElement(num4);
    zespolone2.print();

    LinkedList <Complex> zespolone3(zespolone);
    zespolone3.print();

    getch();

    return 0;
}