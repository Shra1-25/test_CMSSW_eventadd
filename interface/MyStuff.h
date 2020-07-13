#ifndef MyStuff_interface_MyStuff_h
#define MyStuff_interface_MyStuff_h
// -*- C++ -*-
//
// Package:     MyStuff/interface
// Class  :     MyStuff
// 
/**\class MyStuff MyStuff.h "MyStuff.h"

 Description: [one line class summary]

 Usage:
    <usage>

*/
//
// Original Author:  Shravan Sunil Chaudhary
//         Created:  Sun, 12 Jul 2020 21:59:03 GMT
//

// system include files

// user include files

// forward declarations

class MyStuff
{

   public:
      MyStuff();
      virtual ~MyStuff();
      
      // ---------- const member functions ---------------------

      // ---------- static member functions --------------------

      // ---------- member functions ---------------------------

   private:
      MyStuff(const MyStuff&); // stop default
      //const MyStuff& operator=(const MyStuff&); // stop default

      // ---------- member data --------------------------------

};


#endif
