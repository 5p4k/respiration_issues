#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <vector>
#include <list>
#include <experimental/memory_resource>

namespace templates {
    /** @brief Some templated container on a different allocator
     * @tparam T anything
     */
    template <class T>
    class container {
        /// @brief Doxygen doesn't complain about this
        std::list<T, std::experimental::pmr::polymorphic_allocator<T>> _list;

        /// @brief It will also NOT complain about this
        using my_list = std::list<T, std::experimental::pmr::polymorphic_allocator<T>>;

    public:
        /**
         * @note As soon as I put an access modifier, e.g. "public", it won't understand the template!
         */
        using my_vector = std::vector<T, std::experimental::pmr::polymorphic_allocator<T>>;

        /**
         * It will however, let me do this:
         */
        std::vector<T, std::experimental::pmr::polymorphic_allocator<T>> _foo;
    };

}


#endif
