//
// Created by user on 24/03/2022.
//

#ifndef LISTSTACK_ABSTRACTSTACK_H
#define LISTSTACK_ABSTRACTSTACK_H

#include "AbstractContainer.h"

class AbstractStack : public AbstractContainer {
public:

    virtual int size() = 0;
};


#endif //LISTSTACK_ABSTRACTSTACK_H
