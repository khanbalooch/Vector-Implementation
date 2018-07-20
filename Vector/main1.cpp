#include "vector.h"
#include "vector.cpp"
using namespace std;

int main()
{
    char a[5];
    Vector<char *> v(5, a);
    v.push_back(6);
    v.pop_back();
    cout << v[4] << endl;
    v.erase(2, 3);
    cout << v[3] << endl;
    v.clear();
    cout << v[1] << endl;
    if (v.Empty())
    {
        cout << "yes the array is deleted\n";
    }
    Vector<int> v2(5, 5);
    v2.Resize(10, 10);
    cout << v2[10] << endl;
    return 0;
}
