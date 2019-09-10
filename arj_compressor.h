#ifndef ARJ_COMPRESSOR_H
#define ARJ_COMPRESSOR_H
#include "compressor.h"

class Arj_Compressor : public Compressor
{
public:
    Arj_Compressor();
    void compress();
};

#endif // ARJ_COMPRESSOR_H
