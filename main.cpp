#include <iostream>
#include <concepts>
#include "test_class.h"

template<typename T>
concept ComplexConcept = requires(T m){
			{ m.hash() } -> std::convertible_to<long>;
			{ m.toString() } -> std::same_as<std::string>;
	} && !std::has_virtual_destructor<T>::value;

template<ComplexConcept T>
void getInfo(T _x){
	std::cout << "hash() is found and convertable to long" << std::endl;
	std::cout << "toString() is found and the same as string" << std::endl;
	std::cout << "no virt destructor was found" << std::endl;
}

int main(){
	myClass x;
	getInfo(x);

	return 0;
}
