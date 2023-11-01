// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// @DJimenez27
// Partners: @DJimenez27

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  if (argc == 4) {
    std::string protein = arguments[1];
    std::string bread = arguments[2];
    std::string condiment = arguments[3];
    std::cout << "Your order: \n"
              << "A " << protein << " sandwich on " << bread << " with "
              << condiment;
    return 0;
  } else {
    std::cout << "error: you must supply three arguments";
    return 1;
  }
}