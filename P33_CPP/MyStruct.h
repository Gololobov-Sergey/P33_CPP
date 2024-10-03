#pragma once
#include<iostream>
#include<iomanip>

#include"myFunc.h"

using namespace std;

// ============== POINT =================

struct Point
{
	char name;
	int x;
	int y;
};


void printPoint(Point p)
{
	cout << p.name << "(" << p.x << ", " << p.y << ")" << endl;
}


double lenPoint(Point p1, Point p2)
{
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}


// ============== DATE =================

struct Date
{
	int d, m, y;
};


// ============== STUDENT =================


struct Student
{
	char* name = nullptr;
	int* ratings = nullptr;
	int size = 0;

	void setName(const char* name_)
	{
		name = new char[strlen(name_) + 1];
		strcpy_s(name, strlen(name_) + 1, name_);
	}

	void addMark(int mark)
	{
		addValueArray(ratings, size, mark);
	}

	void print()
	{
		cout << "Name  : " << name << endl;
		cout << "Marks : ";
		printArray(ratings, size);
	}
};


struct Group
{
	Student* students = nullptr;
	int size = 0;
	char* name;

	void addStudent(Student S) 
	{
		addValueArray(students, size, S);
	}

	void setName(const char* Name)
	{
		name = new char[strlen(Name) + 1];
		strcpy_s(name, strlen(Name) + 1, Name);
	}

	void print()
	{
		cout << "Group name :" << name << endl;
		printLine(15, '=');
		cout << "Students : " << endl;
		for (size_t i = 0; i < size; i++)
		{
			students[i].print();
			printLine(15, '-');
		}
	}
};


struct Engine
{
	int cilinder = 4;

	void start()
	{
		cout << "Engine started" << endl;
	}

	void stop()
	{
		cout << "Engine stoped" << endl;
	}
};


struct Car
{
	Engine engine;

	void move()
	{
		engine.start();
		cout << "Car moving....." << endl;
		engine.stop();
	}

	void beep()
	{
		cout << "Beep beep \a\a\a" << endl;
	}
};