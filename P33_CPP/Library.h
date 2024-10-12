#pragma once
#include "Menu.h"

//#define TEST

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

	void save(ofstream& out)
	{
		out << name << endl;
		out << author << endl;
		out << year_publishing << endl;
		out << genre << endl;
	}

	void load(istream& in)
	{
		char buff[200];
		in.getline(buff, 200);
		setName(buff);
		in.getline(buff, 200);
		setAuthor(buff);
		in >> year_publishing;
		in.get();
		in.getline(buff, 200);
		setGenre(buff);
	}
};

bool fromName(Book b1, Book b2)
{
	return strcmp(b1.name, b2.name) > 0;
}

bool fromAuthor(Book b1, Book b2)
{
	return strcmp(b1.author, b2.author) > 0;
}

bool fromYear(Book b1, Book b2)
{
	return b1.year_publishing > b2.year_publishing;
}


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
		char buff[80];
		cout << "Назва книги :";
		cin.getline(buff, 80);
		for (size_t i = 0; i < size; i++)
		{
			if (_stricmp(books[i].name, buff) == 0)
			{
				books[i].print();
			}
		}
		system("pause");
	}

	void sort()
	{
		system("cls");
		int c = Menu::select_vertical({
			"За назвою",
			"За автором",
			"За роком видання",
			"Вихід" }, HorizontalAlignment::Center);

		switch (c)
		{
		case 0:
			bubbleSort(books, size, fromName);
			break;
		case 1:
			bubbleSort(books, size, fromAuthor);
			break;
		case 2:
			bubbleSort(books, size, fromYear);
			break;
		case 3:
			return;
		default:
			break;
		}
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

	void saveNotTest()
	{

#ifndef TEST
		save();
#endif // !TEST

	}


	void menu()
	{

#ifndef TEST
		load();
#endif

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
			case 0: addBook(); saveNotTest(); break;
			case 1: editBook(); saveNotTest(); break;
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

	void save()
	{
		ofstream out("library.txt");
		out << size << endl;
		for (size_t i = 0; i < size; i++)
		{
			books[i].save(out);
		}
		out.close();
	}

	void load()
	{
		ifstream in("library.txt");
		if (in.is_open())
		{
			in >> size;
			in.get();
			books = new Book[size];
			for (size_t i = 0; i < size; i++)
			{
				books[i].load(in);
			}
		}
		in.close();
	}
};

