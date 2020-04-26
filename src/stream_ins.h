#ifndef STREAM_H
#define STREAM_H

#include <iostream>

namespace stream_ins {

    /** @brief This class is befriended
     */
    class streamable {
        /** @brief Pipes new data into the streamable class
         */
        inline streamable &operator<<(uint32_t data) {
            std::cout << data << std::endl;
            return *this;
        }
    };

    /** Some other stream-insertable structure somewhere else in the file.
     */
    struct some_unrelated_struct {
        /// @brief Baz
        int baz = 1;
    };

}

// For some reason, the presence of this in the file causes a duplicate declaration
inline std::ostream &operator<<(std::ostream &o, stream_ins::some_unrelated_struct const &d) {
    return o << d.baz;
}


#endif
