#ifndef DataFormats_SampleProd_h
#define DataFormats_SampleProd_h

#include <vector>


// a simple class
struct SampleProd
{
  explicit SampleProd(int v):value_(v) { }
  SampleProd():value_(0) { }
  int value_;
};

// this is our new product, it is simply a 
// collection of SampleProd held in an std::vector
typedef std::vector<SampleProd> SampleCollection;

#endif
