
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <boost/foreach.hpp>

#include <boost/regex.hpp>
using boost::regex;
using boost::smatch;
using boost::regex_match;

// Proof that we can connect to a compiled Boost library. In Visual Studio, you have 
// to specify the directory of the binary library for the linker. However, you don't 
// have to specify the library itself, because it auto-links to appropriate version. 
// This would be more convenient if all of the Boost libraries are in a single directory.
void RegexDemo() {

  string email[5] = {
    "To: George Shmidlap",
    "From: Rita Marlowe",
    "Subject: Will Success Spoil Rock Hunter?",
    "---",
    "See subject." };

  regex pattern("^Subject: (Re: |Aw: )*(.*)");

  BOOST_FOREACH(string line, email) {
    smatch matches;
    if (regex_match(line, matches, pattern)) { cout << matches[2] << endl; }
  }

}
