#include <iostream>
#include <string>
#include <regex>
int main() {
std::string input;
std::cout << "Enter a string: ";
std::cin >> input;
// Construct the regular expression
std::regex pattern("ab+a");
// Match the input against the regular expression
if (std::regex_match(input, pattern)) {
std::cout << "Input matches the regular expression." << std::endl;
} else {
std::cout << "Input does not match the regular expression." << std::endl;
}
return 0;
}

