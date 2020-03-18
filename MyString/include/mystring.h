#pragma once

#include<iostream>
#include<string.h>
#include<stdio.h>

class MyString{
public:
	MyString(char *str);
	~MyString();

	bool operator==(const MyString &s) const;

	MyString & operator=(const MyString &s);

	char & operator[](int a);

	MyString operator*(int a) const;

	void Print() const;

	MyString substr(int a,int b);

private:
	char *_caption;
};

