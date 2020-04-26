#ifndef INHERIT_H
#define INHERIT_H

#include <cstdio>

namespace inherit {
    /** @brief This class defines some methods
     */
    class parent {
        unsigned _last_answer = 0;
    public:
        /** @brief Answers any question.
         * @note This method is NON-CONST and will be duplicated
         */
        unsigned a_method() { _last_answer = 42; return _last_answer; };

        /** @brief Same as above, but doesn't update the last answer
         * @note This method is CONST and will NOT be duplicated!
         */
        unsigned b_method() const { return 42; };
    };

    /** @brief The child privately inherits, but exposes publicly a_method
     */
    class child : private parent {
    public:
        // This will cause a duplicate declaration
        using parent::a_method;
        // But this one doesn't!
        using parent::b_method;
    };
}


#endif
