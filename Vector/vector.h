#ifndef Ibrahim
#define Ibrahim
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

template <typename t>
class Vector
{

  private:
    int sz;
    t *arr;

  public:
    Vector(int sz, t s);
    ~Vector();
    void push_back(t s);
    void pop_back();
    t operator[](int s);
    void erase(int st, int en);
    void clear();
    int Empty();
    void Resize(int nsz, int init);
};
template <>
class Vector<char *>
{
  private:
    int sz;
    char **arr;

  public:
    Vector(int sz, char *s);
    ~Vector();
    void push_back(char s);
    void pop_back();
    char operator[](int s);
    void erase(int st, int en);
    void clear();
    int Empty();
    void Resize(int nsz, int init);
};
#endif
