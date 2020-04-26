This file contains warnings raised when running with the master version of Sphinx and Exhale, but with the [`scoped-rendering`](https://github.com/jakobandersen/breathe/tree/scoped-rendering) that corresponds to [PR #512](https://github.com/michaeljones/breathe/pull/512).

nested.h:
---

```
./respiration_issues/docs/api/classnested_1_1parent_1_1nested.rst:19: WARNING: Duplicate declaration, nested::parent::nested
./respiration_issues/docs/api/classnested_1_1parent_1_1nested.rst:19: WARNING: Duplicate declaration, void this_method_will_be_duplicate () const
```

detect_idiom.h
---
```
./respiration_issues/docs/api/function_detect__idiom_8h_1a2298a2bb5c4964236303a599d5091d1c.rst:13: WARNING: Invalid C++ declaration: Expected end of definition. [error at 52]
  template<class T> auto detect::test_something (int) -> decltype(std::declval< T >().something(), std::true_type
  ----------------------------------------------------^
./respiration_issues/docs/api/function_detect__idiom_8h_1a2298a2bb5c4964236303a599d5091d1c.rst:13: WARNING: Duplicate declaration, template<class> std::false_type detect::test_something (...)
./respiration_issues/docs/api/function_detect__idiom_8h_1a69d042d6bb253247bd7b81706d6abbc6.rst:13: WARNING: Invalid C++ declaration: Expected end of definition. [error at 52]
  template<class T> auto detect::test_something (int) -> decltype(std::declval< T >().something(), std::true_type
  ----------------------------------------------------^
./respiration_issues/docs/api/function_detect__idiom_8h_1a69d042d6bb253247bd7b81706d6abbc6.rst:13: WARNING: Duplicate declaration, template<class> std::false_type detect::test_something (...)
./respiration_issues/docs/api/function_detect__idiom_8h_1a69d042d6bb253247bd7b81706d6abbc6.rst:13: WARNING: doxygenfunction: Unable to resolve multiple matches for function "detect::test_something" with arguments (int) in doxygen xml output for project "Test" from directory: ./doxyoutput/xml.
Potential matches:
    - template<class T> auto detect::test_something (int) -> decltype(std::declval< T >().something(), std::true_type
    - template<class>
      std::false_type detect::test_something(...)
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
./respiration_issues/docs/api/function_stream__ins_8h_1a5fbd536323e164a0cbfc52ea9189e662.rst:13: WARNING: doxygenfunction: Unable to resolve multiple matches for function "operator<<" with arguments (std::ostream&, stream_ins::some_unrelated_struct const&) in doxygen xml output for project "Test" from directory: ./doxyoutput/xml.
Potential matches:
    - std::ostream &operator<<(std::ostream &o, stream_ins::some_unrelated_struct const &d)
    - streamable &stream_ins::streamable::operator<<(uint32_t data)
```

parse.h
```
./respiration_issues/docs/api/typedef_parse_8h_1aca23ad7051f25ce3433da3d5ea86fb7b.rst:13: WARNING: Error in type declaration.
Invalid C++ declaration: Expected identifier in nested name, got keyword: decltype [error at 69]
  template<class Container> parse::iterator_value_t = typename decltype(std::declval< Container >().begin())::value_type
  ---------------------------------------------------------------------^
```