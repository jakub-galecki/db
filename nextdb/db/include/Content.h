//
// Class that stores the user's data
//

#ifndef NEXTDB_CONTENT_H
#define NEXTDB_CONTENT_H

#include "iostream"
#include "types.h"

class Content {
public:
    Key k;
    Value v;
    Content(Key k, Value v){
        k = k;
        v.assign(v);
    }
};

#endif //NEXTDB_CONTENT_H