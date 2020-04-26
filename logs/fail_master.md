This file contains warnings raised when running with the master version of Breathe, Sphinx and Exhale.

todo.h
---
```
(!) Unabridged API: unexpected kind 'page' (IGNORED)
```

friends.h
---
**NOTE: This is fixed by [PR #512](https://github.com/michaeljones/breathe/pull/512)**
```
./respiration_issues/docs/api/classfriends_1_1protective__friend__a.rst:13: WARNING: Error when parsing function declaration.
If the function has no return type:
  Error in declarator or parameters-and-qualifiers
  Invalid C++ declaration: Expecting "(" in parameters-and-qualifiers. [error at 38]
    friends::protective_friend_a::friendly
    --------------------------------------^
If the function has a return type:
  Error in declarator or parameters-and-qualifiers
  If pointer to member declarator:
    Invalid C++ declaration: Expected identifier in nested name. [error at 38]
      friends::protective_friend_a::friendly
      --------------------------------------^
  If declarator-id:
    Invalid C++ declaration: Expected identifier in nested name. [error at 38]
      friends::protective_friend_a::friendly
      --------------------------------------^
```

inheritance.h
---
**NOTE: This is fixed by [PR #512](https://github.com/michaeljones/breathe/pull/512)**
```
./respiration_issues/docs/api/classinherit_1_1parent.rst:22: WARNING: Duplicate declaration, unsigned inherit::parent::a_method()
```

nested.h
---
```
./respiration_issues/docs/api/classnested_1_1parent_1_1nested.rst:19: WARNING: Duplicate declaration, void nested::parent::nested::this_method_will_be_duplicate() const
./respiration_issues/docs/api/classnested_1_1parent_1_1nested.rst:19: WARNING: Duplicate declaration, nested::parent::nested
```


templates.h
---
**NOTE: This is fixed by [PR #512](https://github.com/michaeljones/breathe/pull/512)**
```
./respiration_issues/docs/api/classtemplates_1_1container.rst:13: WARNING: Too many template argument lists compared to parameter lists. Argument lists: 1, Parameter lists: 0, Extra empty parameters lists prepended: 1. Declaration:
    templates::container<T>::my_vector
```

detect_idiom.h
---
```
./respiration_issues/docs/api/function_detect__idiom_8h_1a2298a2bb5c4964236303a599d5091d1c.rst:13: WARNING: Duplicate declaration, template<class>std::false_type detect::test_something(...)
./respiration_issues/docs/api/function_detect__idiom_8h_1a69d042d6bb253247bd7b81706d6abbc6.rst:13: WARNING: Duplicate declaration, template<class T>auto detect::test_something(int)
./respiration_issues/docs/api/function_detect__idiom_8h_1a69d042d6bb253247bd7b81706d6abbc6.rst:13: WARNING: Duplicate declaration, template<class T>auto detect::test_something(int)
```

main.cpp
---
```
./respiration_issues/docs/api/function_main_8cpp_1a9b1c3880da1371929acb3582f0a1f842.rst:13: WARNING: doxygenfunction: Cannot find function "some_function_which_will_never_be_relevat" in doxygen xml output for project "Test" from directory: ./doxyoutput/xml
./respiration_issues/docs/api/function_main_8cpp_1ae66f6b31b5ad750f1fe042a706a4e3d4.rst:13: WARNING: doxygenfunction: Cannot find function "main" in doxygen xml output for project "Test" from directory: ./doxyoutput/xml
```

stream_ins.h
---
```
./respiration_issues/docs/api/function_stream__ins_8h_1a5fbd536323e164a0cbfc52ea9189e662.rst:13: WARNING: Duplicate declaration, std::ostream& operator<<(std::ostream & o, stream_ins::some_unrelated_struct  const & d)
```

parse.h
---
```
./respiration_issues/docs/api/typedef_parse_8h_1aca23ad7051f25ce3433da3d5ea86fb7b.rst:13: WARNING: Error in type declaration.
Invalid C++ declaration: Expected identifier in nested name, got keyword: decltype [error at 68]
  template<class Container>parse::iterator_value_t = typename decltype(std::declval<Container>().begin())::value_type
  --------------------------------------------------------------------^
```

templ_union.h
---
**NOTE: This is fixed by [PR #512](https://github.com/michaeljones/breathe/pull/512)**
```
./respiration_issues/docs/api/uniontempl__union_1_1ti__map.rst:13: WARNING: Invalid C++ declaration: Expected identifier in nested name, got keyword: template [error at 8]
  template<class UnsignedT> templ_union::ti_map
  --------^
```