
#include "SafeArray.h"
#include <iostream>
#include <stdexcept>

bool SafeArray::setAt(unsigned int pos, int val) {
  if (pos < m_begin || pos > m_end) {
    return false;
  }
  m_sarr[pos] = val;
  return true;
}

int SafeArray::getAt(unsigned int pos) {
  if (pos < m_begin || pos > m_end) {
    throw std::range_error("Out of bounds!");
  }
  return m_sarr[pos];
}

void SafeArray::print() {
  for (int i = 0; i <= m_end; ++i) {
    std::cout << getAt(i) << "\n";
  }
}

SafeArray::SafeArray(int val) {
  for (int i = 0; i <= m_end; ++i) {
    setAt(i, val);
  }
}

bool SafeArray::fill(unsigned int pos1, unsigned int pos2, int value) {
  if (pos1 <= pos2) {
    for (pos1; pos1 <= pos2; pos2++) {
      if (setAt(pos1, value)) {
        continue;
      } else {
        return false;
      }
    }
    return true;
  }
  return false;
}

int SafeArray::getMinimum() {
  int min = m_sarr[m_begin];
  for (int i = 0; i < m_end; ++i) {
    if (min > m_sarr[i]) {
      min = m_sarr[i];
    }
  }
  return min;
}
