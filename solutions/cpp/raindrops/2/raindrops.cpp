#include "raindrops.h"

namespace raindrops {

std::string convert(int i) {
  std::string res;
  if (i % 3 == 0)
    res.append("Pling");
  if (i % 5 == 0)
    res.append("Plang");
  if (i % 7 == 0)
    res.append("Plong");
  if (res.empty())
    res = std::to_string(i);
  return res;
}

} // namespace raindrops
