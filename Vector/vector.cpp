#include "vector.h"

template <typename t>
Vector<t>::Vector(int sz, t s)
{
	this->sz = sz;
	arr = new int[sz];
	for (int i = 0; i < sz; i++)
	{
		arr[i] = s;
	}
}

template <typename t>
Vector<t>::~Vector()
{
	delete[] arr;
}
template <typename t>
void Vector<t>::push_back(t s)
{
	t *temp;
	temp = new t[sz + 1];
	for (int i = 0; i < sz; i++)
	{
		temp[i] = arr[i];
	}
	temp[sz] = s;
	sz++;
	arr = temp;
}

template <typename t>
void Vector<t>::pop_back()
{
	t *temp;
	temp = new t[sz - 1];
	for (int i = 0; i < sz - 1; i++)
	{
		temp[i] = arr[i];
	}
	arr = temp;
	sz--;
}

template <typename t>
t Vector<t>::operator[](int s) { return arr[s - 1]; }

template <typename t>
void Vector<t>::erase(int st, int en)
{
	t *temp = new t[sz - (en - st + 1)];
	for (int i = 0; i < st - 1; i++)
	{
		temp[i] = arr[i];
	}
	for (int i = st; i < sz - (en - st + 1); i++)
	{
		temp[i] = arr[i];
	}
	sz = en - st + 1;
	arr = temp;
}

template <typename t>
void Vector<t>::clear()
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
	sz = 0;
}

template <typename t>
int Vector<t>::Empty() { return sz == 0; }

template <typename t>
void Vector<t>::Resize(int nsz, int init = 0)
{
	if (sz >= nsz)
	{
		sz = nsz;
	}
	else
	{
		t *temp = new t[nsz];
		for (int i = 0; i < sz; i++)
		{
			temp[i] = arr[i];
		}
		for (int i = sz; i < nsz; i++)
		{
			temp[i] = init;
		}
		arr = temp;
	}
}
/**************************************************************/

Vector<char *>::Vector(int sz, char *s)
{
	this->sz = sz;
	arr = new char *[sz];
	for (int i = 0; i < sz; i++)
	{
		arr[i] = new char[sz];
		arr[i] = s;
	}
}
template <>
Vector<char *>::~Vector()
{
	delete[] arr;
}
template <>
void Vector<char *>::push_back(char s)
{
	char *temp;
	temp = new char[sz + 1];
	for (int i = 0; i < sz; i++)
	{
		temp[i] = arr[i];
	}
	temp[sz] = s;
	sz++;
	arr = temp;
}

template <>
void Vector<char *>::pop_back()
{
	char *temp;
	temp = new t[sz - 1];
	for (int i = 0; i < sz - 1; i++)
	{
		temp[i] = arr[i];
	}
	arr = temp;
	sz--;
}

char *Vector<char *>::operator[](int s) { return &arr[s - 1]; }

void Vector<char *>::erase(int st, int en)
{
	t *temp = new t[sz - (en - st + 1)];
	for (int i = 0; i < st - 1; i++)
	{
		temp[i] = arr[i];
	}
	for (int i = st; i < sz - (en - st + 1); i++)
	{
		temp[i] = arr[i];
	}
	sz = en - st + 1;
	arr = temp;
}

void Vector<char *>::clear()
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
	sz = 0;
}

int Vector<char *>::Empty() { return sz == 0; }

void Vector<char *>::Resize(int nsz, int init = 0)
{
	if (sz >= nsz)
	{
		sz = nsz;
	}
	else
	{
		t *temp = new t[nsz];
		for (int i = 0; i < sz; i++)
		{
			temp[i] = arr[i];
		}
		for (int i = sz; i < nsz; i++)
		{
			temp[i] = init;
		}
		arr = temp;
	}
}
