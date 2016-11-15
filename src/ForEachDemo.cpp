
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <boost/foreach.hpp>

// Proof that we can connect to a header-only Boost library (foreach). This 
// should work with just the Boost header files, without any compiled libs.
void ForEachDemo() {
  BOOST_FOREACH(char c, string("Hello.")) { cout << c << endl; }
}