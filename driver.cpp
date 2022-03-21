#include <iostream>
#include "linkedlist.h"

using namespace std;

int main() {
    LinkedList list;
    for (int i = 0; i < 15; i++) {
        int* x = new int;
        *x = i*i;
        list.addFirst(x);
    }

    int N;
    void** arr = list.toArray(&N);
    for (int i = 0; i < N; i++) {
        cout << *((int*)arr[i]) << " ";
        delete (int*)arr[i];
    }
    cout << "\n";
    delete[] arr;

    return 0;
}