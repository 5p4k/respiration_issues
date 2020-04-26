#ifndef NESTED_H
#define NESTED_H

#include <cstdio>

namespace nested {
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
        /** @brief Raises a DUPLICATE warning
         */
        inline void this_method_will_be_duplicate() const {}
    };
}

#endif
