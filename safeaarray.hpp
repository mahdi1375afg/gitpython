#ifndef BLATTT10_SAFEARRAY_HPP
#define BLATTT10_SAFEARRAY_HPP

class safearray{
    int *a;
    int size;

    public:
       ~safearray();
       safearray(int value);

        bool setat(unsigned int pos, int val);

        int getat(unsigned int pos);

        int getminimum();

             bool fill(unsigned int pos1, unsigned int pos2, int value);

};

#endif // BLATTT10_SAFEARRAY_HPP
