// library for input/output
#include <iostream>

int main(){

    //dog age
    int dog_age;
    int first_years;
    int later_years;
    int human_age;

    std::cout << "This program can only run for dog older than 2 years old.\n";
    std::cout << "Enter your dog age: ";
    std::cin >> dog_age;
    
    first_years = 21;
    later_years = (dog_age - 2) * 4;
    human_age = first_years + later_years;
    std::cout << "your dog is " << human_age << " years old in human years.\n";
    

}