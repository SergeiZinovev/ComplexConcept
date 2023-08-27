#include <iostream>
#include <concepts>

template <typename T>
concept ComplexConcept =  requires(T v)
{
	{v.toString()}
	->std::same_as<std::string>;
	{v.hash()}
	->std::convertible_to<long>;
	std::has_virtual_destructor <T>::value ;
};

class SomeClass {
public:
		int val = 2;
		SomeClass() {
			std::cout << "Constructor\n";
		}
		std::string toString() {
			std::string text = "Concept toString\n";
			std::cout << text;
			return text;
		}
		int hash() {
			int number = 200;
			std::cout << number << std::endl;
			
			return number;
		}
		 ~SomeClass() {
			std::cout << "Distructor\n";
		};
};

template <ComplexConcept T> void PrintType( T val) {
	val.toString();
	val.hash();
}

int main()
{
	SomeClass p;
	//PrintType(-1);
	//PrintType("it");
	//PrintType('K');
	//PrintType(100FL);
	PrintType(p);
	return 0;
}
