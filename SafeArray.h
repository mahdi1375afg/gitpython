
#ifndef BLATT10_SAFEARRAY_H
#define BLATT10_SAFEARRAY_H

class SafeArray {
private:
  int m_begin = 0;
  int m_end = 99;
  int m_sarr[100];
public:
  SafeArray(int val);
  bool setAt(unsigned int pos, int val);
  int getAt(unsigned int pos);
  bool fill(unsigned int pos1, unsigned int pos2, int value);
  int getMinimum();
  void print();
};

#endif // BLATT10_SAFEARRAY_H
