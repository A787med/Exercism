#include <string>

namespace log_line {
std::string message(std::string line) {
  int index_of_first_occurance = line.find(": ");
  return line.substr(index_of_first_occurance + 2, line.length());
}

std::string log_level(std::string line) {
  // return the log level
  int index_of_close_square_braket = line.find("]");
  return line.substr(1, index_of_close_square_braket - 1);
}

std::string reformat(std::string line) {
  // return the reformatted message
  std::string msg = message(line);
  std::string lvl = log_level(line);
  return msg + " (" + lvl + ")";
}
} // namespace log_line
