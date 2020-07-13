#include "StuffProducer/MyStuff/interface/MyStuff.h"
//#include "Analysis/MyStuff/interface/MyOtherStuff.h"
//#include "StuffProd/DataFormats/MyStuff/interface/SampleProd.h"
#include <vector>
#include "DataFormats/Common/interface/Wrapper.h"
//using namespace std;

namespace { namespace {
  //say which template classes should have dictionaries
  edm::Wrapper<MyStuff> MyStuff_template;
  edm::Wrapper<std::vector<MyStuff> > MyStuff_vec_template;
  //edm::Wrapper<std::vector<MyOtherStuff> > dummy2;
} }
