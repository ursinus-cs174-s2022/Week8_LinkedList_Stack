#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>

// Wrapper class around arbitrary object reference 
// that also holds arrows
class LinkedNode {
    public:
        void* obj; // Object I'm wrapping
        LinkedNode* next; // Arrow to the next object
        LinkedNode(void* obj) {
            this->obj = obj;
            next = NULL;
        }
};



class LinkedList {
    private:
        LinkedNode* head;
        int N;
    public:
        LinkedList();
        ~LinkedList();

        /**
         * @brief Return how many elements are in this list
         * 
         * @return int Number of elements
         */
        int size() {
            return N;
        }

        /**
         * @brief Add an object reference to the beginning of the 
         * linked list
         * 
         * @param obj Object reference to add
         */
        void addFirst(void* obj);
        /**
         * @brief Remove the first occurrence of an object from 
         * the list
         * 
         * @param obj Object reference to remove
         */
        void remove(void* obj);

        /**
         * @brief Remove the first object from the list and return
         * what it was
         * 
         * @return void* 
         */
        void* removeFirst();

        /**
         * @brief Remove the last object from the list and return
         * what it was
         * 
         * @return void* 
         */
        void* removeLast();

        /**
         * @brief Loop through the linked list and return
         * the elements in an array
         * 
         * @param N Pointer to size of array
         * @return void** 
         */
        void** toArray(int* N);
};


class Stack {
    public:
        Stack();

        void push(void* obj);
        void* pop();
};

/**
 * @brief Determine whether this string is a palindrome
 * 
 * @param s String
 * @return true If palindrome
 * @return false Otherwise
 */
bool isPalindrome(char* s);

#endif