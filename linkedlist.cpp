#include "linkedlist.h"
#include <stdio.h>

LinkedList::LinkedList() {
    head = NULL;
    N = 0;
}

LinkedList::~LinkedList() {
    LinkedNode* node = head;
    while (node != NULL) {
        LinkedNode* next = node->next;
        delete node;
        node = next;
    }
}

/**
 * @brief Add an object reference to the beginning of the 
 * linked list
 * 
 * @param obj Object reference to add
 */
void LinkedList::addFirst(void* obj) {
    LinkedNode* node = new LinkedNode(obj);
    if (head == NULL) {
        // Edge case: The list is empty, so this new node becomes
        // the head
        head = node;
    }
    else {
        // Add this new node to the front
        node->next = head;
        head = node;
    }
    N++;
}

/**
 * @brief Remove the first occurrence of an object from 
 * the list
 * 
 * @param obj Object reference to remove
 */
void LinkedList::remove(void* obj) {
    if (head != NULL) {
        // Only remove objects that exist
        if (head->obj == obj) {
            head = head->next;
            N--;
        }
        else {
            // The object might be somewhere in the middle
            // TODO: Fill this in.  Remove the object reference
            // if it exists in a node
            LinkedNode* node = head;
            bool found = false;
            while (!found && node->next != NULL) {
                if (node->next->obj == obj) {
                    found = true;
                    LinkedNode* toDelete = node->next;
                    node->next = node->next->next;
                    delete toDelete;
                    N--;
                }
                else {
                    node = node->next;
                }
            }
        }
    }
}

/**
 * @brief Remove the first object from the list and return
 * what it was
 * 
 * @return void* 
 */
void* LinkedList::removeFirst() {
    void* ret = NULL;
    // TODO: Fill this in

    return ret;
}

/**
 * @brief Loop through the linked list and return
 * the elements in an array
 * 
 * @param N Pointer to size of array
 * @return void** 
 */
void** LinkedList::toArray(int* N) {
    // TODO: Fill this in
    return NULL;
}


/////////////////////////////////////

Stack::Stack() {
    // TODO: Fill this in
}

void Stack::push(void* obj) {
    // TODO: Fill this in
}

void* Stack::pop() {
    void* ret = NULL;
    // TODO: Fill this in

    return ret;
}