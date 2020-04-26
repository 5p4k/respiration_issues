#ifndef PARSE_H
#define PARSE_H

namespace templ_union {

    /** @brief This doesn't parse, but it's legal.
     */
    template <class UnsignedT>
    union ti_map {
        /// @brief Some floating point
        float a;
        /// @brief Our favourite unsigned type
        UnsignedT b;
    }
}

#endif
