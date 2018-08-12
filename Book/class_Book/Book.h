#pragma once


namespace Program
{


	class Book
	{
	private:
		const char* Name_Book;
		const char* Autor;
		unsigned  int Pages;



	public:
		Book();
		void setName_Book(const char*);
		const char* getName_Book();

		void setAutor(const char*);
		const char* getAutor();

		void setpages(unsigned int);
		unsigned int getpages();





		~Book();
	};

}