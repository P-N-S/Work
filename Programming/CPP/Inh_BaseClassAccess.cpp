#include <iostream>

using namespace std;

class base {
    int i, j;
public:
    void set(int a, int b) {
        i = a;
        j = b;
    }

    void showb() {
        cout << i << " " << j << "\n";
    }
};

class derived : public base {
    int k;
public:
    derived(int x) { k = x; }
    void showd() { cout << k << "\n"; }
};

int main()
{
    derived dobj(3);

    dobj.set(1, 2);
    dobj.showb();
    dobj.showd();

    return 0;
}