//
// Created by user on 24/03/2022.
//

#ifndef LISTSTACK_LISTSTACK_H
#define LISTSTACK_LISTSTACK_H

#include <list>
#include <iterator>
#include "AbstractStack.h"
#include "ListStackIterator.h"
#include "TESTS.h"
template<typename main_type>
class ListStack : public AbstractStack {
private:
    typename std::list<main_type> arr;
    ListStackIterator<main_type> head=arr.begin();
public:

    ~ListStack() {
    }

    ListStack() {
        arr.clear();
        head=arr.begin();
    }


    ListStack(const ListStack &ListStack_) {
        arr = ListStack_.arr;
        head = ListStack_.head;
    }

    void push(const main_type &n) {

        arr.push_back(n);

        head = arr.end();
    }

    ListStack &operator=(const ListStack &ListStack_) {
        arr = ListStack_.arr;
        head = ListStack_.head;
        return *this;
    }

    void push(main_type &&n) {

        arr.push_back(n);
        head = arr.end();
    }


    void pop() {
        arr.pop_back();
        head = arr.end();
    }


    main_type &top() {
        head--;
        main_type *copy=&(*head);
        head++;
        return *copy;
    }

    bool empty() {
        return arr.empty();
    }


    int size() {
        return arr.size();
    }


};

#endif //LISTSTACK_LISTSTACK_H
