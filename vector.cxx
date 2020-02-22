#include <iostream>
#include <numeric>
#include <vector>
#include <deque>
#include <utility>
#include <array>
#include <memory>
#include <functional>
#include <algorithm>
#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <chrono>


using namespace std;


void join(const vector<int>& from, vector<int>& to) {
  vector<int> res(from.size() + to.size());
  auto old = to.size();
  size_t i{};
  size_t j{};
  for (size_t x{}; x < res.size(); ++x) {
    if (i < old && j < from.size()) {
      if (from[j] < to[i]) {
        res[x] = from[j];
        ++j;
      }
      else {
        res[x] = to[i];
        ++i;
      }
    }
    else if (i < old) {
      res[x] = to[i];
      ++i;
    }
    else {
      res[x] = from[j];
      ++j;
    }
  }
  to.resize(res.size());
  swap(res, to);
}


#include "main.cxx"
