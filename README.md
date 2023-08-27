# ComplexConcept

C++20 standard innovations. This program contains an implementation of a concept called ComplexConcept<T> , which imposes the following restrictions on a type:

Having the type T have a hash() method that returns a type that is convertible to long;
The presence of the toString() method of the T type, which returns std::string;
Type T does not have a virtual destructor.
