// class_Book.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include"Book.h"



using namespace std;
using Program::Book;

int main()
{
	setlocale(LC_ALL, "Rus");

	Book a;

	a.setAutor("Leonardo");
	a.setName_Book("Liefe");
	a.setpages(240);


	cout << "Автор книги : " <<a.getAutor() << endl;
	cout << "Название : " << a.getName_Book() << endl;
	cout << "Количество страниц : " << a.getpages() << endl;



    return 0;
}

