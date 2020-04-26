#ifndef PARSE_H
#define PARSE_H

namespace parse {

    /** @brief This doesn't parse. The issue is in decltype(...)::member.
     */
    template <class Container>
    using iterator_value_t = typename decltype(std::declval<Container>().begin())::value_type;
}


#endif
