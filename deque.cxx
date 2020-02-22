#include <iostream>
#include <vector>
#include <deque>
#include <numeric>
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
  to.reserve(from.size() + to.size());
  deque<int> n;

  size_t j{};

  for (size_t i{}; i < to.size(); ++i) {
    if (!n.empty()) {
      if (from[j] < to[i] && from[j] < n.front()) {
        n.push_back(to[i]);
        to[i] = from[j];
        ++j;
      }
      else if (n.front() < to[i]) {
        n.push_back(to[i]); 
        to[i] = n.front();
        n.pop_front();
      }
    }
    else if (from[j] < to[i]) {
      n.push_back(to[i]);
      to[i] = from[j];
      ++j;
    }
  }

  while (j < from.size()) {
    if (n.empty() || from[j] < n.front()) {
      to.push_back(from[j]);
      ++j;
    }
    else {
      to.push_back(n.front());
      n.pop_front();
    }
  }

  for (auto e : n) {
    to.push_back(e);
  }
}

#include "main.cxx"
