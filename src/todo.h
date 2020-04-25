#ifndef TODO_H
#define TODO_H

#include <cstdio>

/**
 * @todo This TODO directive causes <tt>(!) Unabridged API: unexpected kind 'page' (IGNORED)</tt>
 */
class incomplete_class {
    int _foo;
public:
    inline my_base(int foo) : _foo{foo} {}
};

#endif
