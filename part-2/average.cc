// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// @DJimenez27
// Partners: @DJimenez27

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  std::vector<double> arguments;
  std::vector<std::string> args(argv, argv + argc);
  for (int i = 1; i < argc; ++i) {
    try {
      double current_arg = std::stod(args[i]);
      arguments.push_back(current_arg);
    } catch (const std::invalid_argument& e) {
      return 1;
    }
  }
  double sum = 0.0;

  for (const double& arg : arguments) {
    sum += arg;
  }
  double average = sum / (argc - 1);

  std::cout << "average = " << average << std::endl;
  return 0;
}