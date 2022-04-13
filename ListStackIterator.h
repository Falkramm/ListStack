//
// Created by user on 24/03/2022.
//

#ifndef LISTSTACK_LISTSTACKITERATOR_H
#define LISTSTACK_LISTSTACKITERATOR_H

#include "AbstractStackIterator.h"
#include <list>
#include <iterator>

template<typename main_type>
class ListStackIterator : public AbstractStackIterator {
private:
    typename std::list<main_type>::iterator it;
public:
    ListStackIterator(typename std::list<main_type>::iterator it_) {
        it = it_;
    }

    ListStackIterator operator++(int) {
        ListStackIterator copy = *this;
        it++;
        return copy;
    }

    ListStackIterator &operator++() {

        it++;
        return *this;
    }

    ListStackIterator operator--(int) {
        ListStackIterator copy = *this;
        it--;
        return copy;
    }

    ListStackIterator &operator--() {
        it--;
        return *this;
    }

    main_type &operator*() {
        return *it;
    }

    ListStackIterator operator=(typename std::list<main_type>::iterator it_) {
        it = it_;
        return *this;
    }

};

#endif //LISTSTACK_LISTSTACKITERATOR_H
