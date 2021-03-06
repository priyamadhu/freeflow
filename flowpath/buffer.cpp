#include "buffer.hpp"

#include <string.h>

namespace fp
{


namespace Buffer
{

// Ctor for the base packet buffer.
Base::Base(unsigned char* data, int size)
{
  data_ = new unsigned char[size];
  memcpy(data_, data, size);
}


// Virtual Dtor for base packet buffer.
Base::~Base()
{
  delete data_;
}

} // end namespace buffer

} // end namespace fp
