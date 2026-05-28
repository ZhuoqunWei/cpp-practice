#include <iostream>
#include <string>
#include <iomanip> 

double celsius_to_fahrenheit(double c) {
	double result;
	result = (c * 9.0 / 5.0) + 32;
	return result;
}

double fahrenheit_to_celsius(double c) {
	return (c - 32.0) * 5.0 / 9.0;
}

void print_result(const std::string& label, double value){
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Your temperature in " << label << " is : " << value << "\n";
}

int main() {
    double temperature;
    std::cout << "Give me a tempreature: \n";
	// if not a double, throw an exception
    std::cin >> temperature;

	int choice;
    // std::cout << temperature;
    std::cout << std::endl; // Prints an empty line

	std::cout << "\nEnter 1 if you want fahrenheit to celsius; 2 if want celsius to fahrenheit\n";
	// if enter number not 1 or 2, throw an exception
    std::cin >> choice;
	double result;
    
	if (choice == 1){
		result = fahrenheit_to_celsius(temperature);
		print_result("Celsius", result);
	} else if (choice == 2){
		result = celsius_to_fahrenheit(temperature);
		print_result("Fahrenheit", result);
	} else {
		std::cerr << "Invalid input, must be 1 or 2";
		return 1;
	}
    
	// if i want std cout different based on certain value, how would you write
    return 0;
}

/*
Assignment:
Write a small program: a temperature converter.
Requirements:

Ask the user for a temperature value (a double).
Ask the user which conversion they want: Celsius to Fahrenheit, 
or Fahrenheit to Celsius. Read this as input.
Use two functions: double celsius_to_fahrenheit(double c) and double 
fahrenheit_to_celsius(double f). Both must take the parameter by value.
Print the result with 2 decimal places.
Add a third function: void print_result(const std::string& label, 
double value) that takes the label by const reference 
and the value by value. Use this to print.
If the user enters an invalid conversion choice, 
print an error and exit.
*/