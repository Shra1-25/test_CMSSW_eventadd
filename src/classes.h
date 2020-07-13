#include "StuffProd/MyStuff/interface/MyStuff.h"
//#include "Analysis/MyStuff/interface/MyOtherStuff.h"
#include <vector>
#include "DataFormats/Common/interface/Wrapper.h"

namespace { namespace {
  //say which template classes should have dictionaries
  edm::Wrapper<MyStuff> dummy1;
  //edm::Wrapper<std::vector<MyOtherStuff> > dummy2;
} }
