#include "stdafx.h"
#include "Book.h"


namespace Program
{

	Book::Book()
	{
		Name_Book = "HA";
		Autor = "Loh";
		Pages = 10;


	}


	
	void Book::setName_Book(const char* adf)
	{
	 Name_Book = adf;
	}

	const char* Book::getName_Book()
	{
		return   Name_Book;
	}

	void Book::setAutor(const char* autor)
	{
	 Autor = autor;
	}


	const char* Book::getAutor()
	{
		return Autor;
	}

	void Book::setpages(unsigned int Pg)
	{
	
		Pages = Pg;
	}

	unsigned int Book::getpages()
	{
		return Pages;
	}



	Book::~Book()
	{
	}


}