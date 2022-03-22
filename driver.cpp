#include <iostream>
#include <stdio.h>
#include "linkedlist.h"

using namespace std;

int main() {
    LinkedList list;
    for (int i = 0; i < 15; i++) {
        int* x = new int;
        *x = i*i;
        list.addFirst(x);
    }
    int i = 0;
    while(list.size() > 0) {
        void* elem = list.removeFirst();
        cout << *((int*)elem) << " ";
        delete (int*)elem;
        i++;
    }
    cout << "\n";

    return 0;
}