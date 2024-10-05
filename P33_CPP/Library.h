#pragma once
#include "Menu.h"

struct Book
{
	char* name; 
	char* author;
	int year_publishing;
	char* genre;

	void setParam()
	{
		setName();
		setAuthor();
		setYear();
		setGenre();
	}

	void setName()
	{
		char buff[80];
		cout << "Назва       : ";
		cin.getline(buff, 80);
		setName(buff);
	}

	void setName(const char* name_)
	{
		name = new char[strlen(name_) + 1];
		strcpy_s(name, strlen(name_) + 1, name_);
	}

	void setAuthor()
	{
		char buff[80];
		cout << "Автор       : ";
		cin.getline(buff, 80);
		setAuthor(buff);
	}

	void setAuthor(const char* author_)
	{
		author = new char[strlen(author_) + 1];
		strcpy_s(author, strlen(author_) + 1, author_);
	}

	void setYear()
	{
		cout << "Рік видання : ";
		int year;
		cin >> year;
		cin.ignore();
		setYear(year);
	}

	void setYear(int year)
	{
		if (year > 2024)
		{
			year_publishing = 9999;
			return;
		}
		year_publishing = year;
	}

	void setGenre()
	{
		char buff[80];
		cout << "Жанр        : ";
		cin.getline(buff, 80);
		setGenre(buff);
	}

	void setGenre(const char* genre_)
	{
		genre = new char[strlen(genre_) + 1];
		strcpy_s(genre, strlen(genre_) + 1, genre_);
	}

	void print()
	{
		cout << setw(15) << name << setw(15) << author << setw(12) << year_publishing << genre << endl;
	}

	void edit()
	{

		int c = Menu::select_vertical({
			"Назву",
			"Автор",
			"Рік видання",
			"Жанр",
			"Вихід" }, HorizontalAlignment::Center);

		switch (c)
		{
		case 0: setName(); break;
		case 1: setAuthor(); break;
		case 2: setYear(); break;
		case 3: setGenre(); break;
		case 4: return;
		}
	}
};

struct Library
{
	Book* books = nullptr;
	int size = 0;

	void addBook()
	{
		system("cls");
		cout << "Додавання нової книги" << endl;
		cout << "---------------------" << endl;
		Book book;
		book.setParam();
		addValueArray(books, size, book);
		cout << "Книга додана" << endl;
		system("pause");
	}

	void addBook(const char* name, const char* author, int year, const char* genre)
	{
		Book book;
		book.setName(name);
		book.setAuthor(author);
		book.setYear(year);
		book.setGenre(genre);
		addValueArray(books, size, book);
	}

	void print_all()
	{
		system("cls");
		cout << "Наша бібліотека" << endl;
		cout << endl;
		cout << "Назва          Автор          Рік видання Жанр" << endl;
		cout << "--------------------------------------------------" << endl;
		for (size_t i = 0; i < size; i++)
		{
			books[i].print();
		}
		system("pause");
	} 

	void find_autor()
	{
		char buff[80];
		cout << "Автор :";
		cin.getline(buff, 80);
		for (size_t i = 0; i < size; i++)
		{
			if (_stricmp(books[i].author, buff) == 0) 
			{
				books[i].print();
			}
		}
		system("pause");
	}

	void find_name()
	{

	}

	void sort()
	{

	}

	void editBook()
	{
		system("cls");
		cout << "Вибір книги" << endl;
		cout << endl;
		cout << "  Назва          Автор          Рік видання Жанр" << endl;
		cout << "--------------------------------------------------" << endl;
		for (size_t i = 0; i < size; i++)
		{
			cout << i+1 << " ";
			books[i].print();
		}
		int c;
		cin >> c;
		cin.ignore();
		books[c - 1].edit();
	}

	void menu()
	{
		while (true)
		{
			system("cls");

			int c = Menu::select_vertical({
			"Додати книгу",
			"Редагувати книгу",
			"Друк усіх книг",
			"Пошук книги за автором",
			"Пошук книги за назвою",
			"Сортування", 
			"Вихід" }, HorizontalAlignment::Center);

			switch (c)
			{
			case 0: addBook(); break;
			case 1: editBook(); break;
			case 2: print_all(); break;
			case 3: find_autor(); break;
			case 4: find_name(); break;
			case 5: sort(); break;
			case 6: exit(0);
			default:
				break;
			}
		}
	}
};

