#include <iostream>
using namespace std;

int myglobe = 5;

int myfunc(int a) {
    int b = 0;
    if(a==3){
        return 0;
    }
    int* k = (int *)malloc(sizeof(int));
    cout << "Call Function n = " << a << endl;
    cout << "Global g"<< a << " : " << &myglobe << endl;
    cout << "Local l"<< a << " : " << &b << endl;
    cout << "New Malloc m"<< a << ": " << k << endl;
    return myfunc(a+1);
}

int main() {
    cout << "Hello World" << endl;
    myfunc(0);
    return 0;
}