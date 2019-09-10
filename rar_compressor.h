#ifndef RAR_COMPRESSOR_H
#define RAR_COMPRESSOR_H
#include "compressor.h"

class Rar_Compressor : public Compressor
{
public:
    Rar_Compressor();
    void compress();
};

#endif // RAR_COMPRESSOR_H
