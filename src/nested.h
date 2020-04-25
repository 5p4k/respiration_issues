#ifndef BASE_H
#define BASE_H

#include <cstdio>

/** @brief This class has a nested class defined elsewhere
 */
class parent {
public:
    class nested;
};

/** @brief The nested class
 * @note Every member of this class will raise a DUPLICATE warning
 */
class parent::nested {
public:
    inline void this_method_will_be_duplicate() const {}
};


#endif
