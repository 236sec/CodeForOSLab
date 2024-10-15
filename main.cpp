#include <iostream>
using namespace std;

int g1 = 5;
int g2 = 2;
int g3 = 1;

int myfunc(int a) {
    int b = 0;
    if(a==3){
        return 0;
    }
    int* k = (int *)malloc(sizeof(int));
    cout << "Call Function n = " << a << endl;
    cout << "Global g1 "<< a << " : " << &g1 << endl;
    cout << "Global g2 "<< a << " : " << &g2 << endl;
    cout << "Global g3 "<< a << " : " << &g3 << endl;
    cout << "Local l"<< a << " : " << &b << endl;
    cout << "New Malloc m"<< a << ": " << k << endl;
    myfunc(a+1);
    free(k);
    return 1;
}

int main() {
    cout << "Hello World" << endl;
    myfunc(0);
    return 0;
}