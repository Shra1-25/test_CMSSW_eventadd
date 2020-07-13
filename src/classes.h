#include "StuffProd/MyStuff/interface/MyStuff.h"
//#include "Analysis/MyStuff/interface/MyOtherStuff.h"
//#include "StuffProd/DataFormats/MyStuff/interface/SampleProd.h"
#include <vector>
#include "DataFormats/Common/interface/Wrapper.h"

namespace { namespace {
  //say which template classes should have dictionaries
  edm::Wrapper<MyStuff> MyStuff;
  //edm::Wrapper<std::vector<MyOtherStuff> > dummy2;
} }
