#ifndef COMPRESSOR_H
#define COMPRESSOR_H
#include <iostream>

class Compressor
{
private:
    Compressor *p;
public:
    Compressor();
    ~Compressor();
    virtual void compress() = 0;
};

#endif // COMPRESSOR_H
