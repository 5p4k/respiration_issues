#ifndef DETECT_IDIOM_T
#define DETECT_IDIOM_T

#include <cstdio>

namespace detect {

    /** @brief Well defined only if @p T has an invocable function ::something(void)
     */
    template <class T>
    auto test_something(int) -> decltype(std::declval<T>().something(), std::true_type{});

    /** @brief Fallback, if @p T doesn't have ::something(void), will match this
     */
    template <class>
    std::false_type test_something(...);

    /**
     * Tests whether the given type has a ::something(void) method.
     */
    template <class T>
    using has_something = decltype(test_something<T>(0));

}

#endif
