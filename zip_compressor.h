#ifndef ZIP_COMPRESSOR_H
#define ZIP_COMPRESSOR_H
#include "compressor.h"

class Zip_Compressor : public Compressor
{
public:
    Zip_Compressor();
    void compress();
};

#endif // ZIP_COMPRESSOR_H
