# ComplexConcept

C++20 standard innovations. This program contains an implementation of a concept called ComplexConcept<T> , which imposes the following restrictions on a type:

1)Having the type T have a hash() method that returns a type that is convertible to long;

2)The presence of the toString() method of the T type, which returns std::string;

3)Type T does not have a virtual destructor.
